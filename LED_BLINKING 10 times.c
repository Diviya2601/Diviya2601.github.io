#include <AT89S52.h>
#define LED P2_4	
#define ON 0
#define OFF 1

void wait(int);

void main()
{
  char n;
  LED=OFF; 
  for(n=0;n<10;n++)
  {
   LED=ON;
   wait(1);
   LED=OFF;
   wait(1);
  }
  while(1) 
  {
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
