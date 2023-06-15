#include <AT89S52.h>	
#define LED1 P2_4	
#define LED2 P2_5
#define ON 0
#define OFF 1

void wait(int);

void main()
{
  LED1=OFF;
  LED2=OFF;
  while(1)  
  {
   LED1=ON;
   LED2=OFF;
   wait(1);
   LED1=OFF;
   LED2=ON;
   wait(1);
  }
}

void wait(int del)  
{
 int c1,c2; 
 for(c1=0; c1<del; c1++)
 {
  for(c2=0; c2<15; c2++)  
  {
  }
 }
}
