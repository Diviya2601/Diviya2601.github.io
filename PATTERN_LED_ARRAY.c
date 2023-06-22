#include<AT89S52.h>
void wait(int);
const char data[9]={0x01,0x02,0x04,0x08,0x10,0x20,0x40,0x80};
void main()
{

char i;
while(1)
{
for (i=0;i<8;i++)
{
P0=~data[i];
wait(1);
}
}
}
void wait(int del){
int c1,c2;
for(c1=0;c1<del;c1++){
for(c2=0;c2<del;c2++){
}
}
}
