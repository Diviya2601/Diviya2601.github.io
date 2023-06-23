#include<AT89S52.h>
#define SW P0
#define LED P1
void main()
{
char s;
SW=0xFF;
while(1)
{
s=SW;
LED=s;
}
}
