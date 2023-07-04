#include <AT89S52.h>
#define g2 P0_7
#define g1 P0_6
#define g0 P0_5
#define b0 P0_0
#define b1 P0_1
#define b2 P0_2
void main()
{
__bit a,b,c;
g0=1;
g1=1;
g2=1;
while(1){
a=!g2;
b=!g1;
c=!g0;
b2=!a;
b1=!(a^b);
b0=!((a^b)^c);
}
