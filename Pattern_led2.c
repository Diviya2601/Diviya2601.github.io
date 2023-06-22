#include<AT89S52.h>
void wait(int);
void main()
{
char data=0x01;
char i;
while(1)
{
for (i=0;i<8;i++)
{
P0=~(data<<i);
wait(1);
}
}
}
void wait(int del){
int c1,c2;
for(c1=0;c1<del;c1++){
for(c2=0;c2<50;c2++){
}
}
}
