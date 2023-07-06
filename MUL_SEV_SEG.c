#include<AT89S52.h>
#define DATA P0
#define DIG P1
const char code[11]={0xC0,0XF9,0XA4,0XB0,0X99,0X92,0X82,0XF8,0X80,0X90};
void main()
{

while(1)
{
DATA=code[2];
DIG=0X07;
DIG=0x0F;
DATA=code[0];
DIG=0X0B;
DIG=0x0F;
DATA=code[2];
DIG=0X0D;
DIG=0x0F;
DATA=code[3];
DIG=0X0E;
DIG=0x0F;
}
}

