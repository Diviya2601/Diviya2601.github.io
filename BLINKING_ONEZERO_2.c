#include<AT89S52.h>
void wait(int);
void main()
{
char data=0xAA;
while(1)
{
P0=data;
wait(1);
P0=data<<1;
wait(1);
}
}
void wait(int del){
int c1,c2;
for(c1=0;c1<del;c1++){
for(c2=0;c2<del;c2++){
}
}
