#include <AT89S52.h>
#define BUS P0
#define RS P1_2
#define RW P1_1
#define EN P1_0
const char pixel1[9]={0x00,0x0A,0x0A,0x0A,0x00,0x11,0x0E,0x00};
const char pixel2[9]={0x1F,0x11,0x11,0x11,0x11,0x11,0x11,0x1F};
void lcd_cmd(char);
void lcd_busy(void);
void lcd_data(char);
void lcd_display(char*); 

void lcd_char_gen(char add,char pattern[])
{
char i;
 lcd_cmd(add);
 for(i=0;i<8;i++)
 {
  lcd_data(pattern[i]);
 }
 
}
void main()
{
EN=0;
lcd_busy();
lcd_cmd(0x38);
lcd_cmd(0x01);
lcd_cmd(0x0c);
lcd_cmd(0x06);
lcd_char_gen(0x40,pixel1);
lcd_char_gen(0x48,pixel2);
lcd_cmd(0x08);
lcd_data(0x00);
lcd_data(0x01);
while(1)
{
}
}
 void lcd_cmd(char c)
 {
  BUS=c;
  RS=0;
  RW=0;
  EN=1;
  EN=0;
  lcd_busy();
}
   void lcd_data(char c)
 {
  BUS=c;
  RS=1;
  RW=0;
  EN=1;
  EN=0;
  lcd_busy();
 }

 void lcd_busy(void)
 {
  char status;
  BUS=0xFF;
  RS=0;
  RW=1;
  EN=1;
  EN=0;
  status=(BUS&0x80);
  while(status)
  {
   EN=1;
   EN=0;
   status=(BUS&0x80);
  }
 }
 void lcd_display(char*p)
 {
  while(*p!='\0')
  {
   lcd_data(*p);
   *p++;
  }
 } 
