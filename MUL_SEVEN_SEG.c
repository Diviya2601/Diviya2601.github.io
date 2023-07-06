#include<AT89S52.h>
#define DATA P0
#define DIG P1
#define BLANK 0x0F;
const char code[11]={0xC0,0XF9,0XA4,0XB0,0X99,0X92,0X82,0XF8,0X80,0X90};
const char dig[5]={0x0E,0x0D,0x0B,0x07};
void display(int);
void disp(char*);
void main()
{

while(1)
{
disp("8051");
}
}
void display(int val){
 char d3,d2,d1,d0;
 d3=(val/1000);
 d2=(val%1000)/100;
 d1=(val%100)/10;
 d0=(val%10);
 DATA=code[d3];
DIG=dig[3];
DIG=BLANK;
DATA=code[d2];
DIG=dig[2];
DIG=BLANK;
DATA=code[d1];
DIG=dig[1];
DIG=BLANK;
DATA=code[d0];
DIG=dig[0];
DIG=BLANK;
}
void disp(char*p)
{
int i;
for(i=0;i<4;i++)
{
 DATA=code[*p&0x0F];
 DIG=dig[3-i];
 DIG=BLANK;
 *p++;
}
}
