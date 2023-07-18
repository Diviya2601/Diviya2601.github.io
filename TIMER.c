#include <AT89S52.h>
#define FOSC 12000000
#define FTIM FOSC/12
#define LED P0_0
void main(){

  TR0=0;
  TMOD=((TMOD&0XF0)|0X01);
  while(1)
  {
  TH0=0xFC;
  TL0=0x18;
  TR0=1;
  while(TF0==0)
  {}
  TF0=0;
  LED=!LED;
  TR0=0;
 
}
}
