#include <AT89S52.h>
#define FOSC 12000000
#define FTIM FOSC/12
#define LED P0_0
void main(){

  TR0=0;
  TMOD=((TMOD&0XF0)|0X02);
  TH0=0x9C;
  TL0=0x9C;
  TR0=1;
  while(1)
  {
  char i;
  for(i=0;i<10;i++)
  {
   while(TF0==0)
   {}
   TF0=0;
}
 LED=!LED;
}
}
