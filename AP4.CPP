/* prg to cheack wether given num is amstrong or not*/
#include<iostream.h>
#include<conio.h>
void main()
{
int n,temp,d,am=0;
clrscr();
cout<<"\n enter any num";
cin>>n;
temp=n;
while(n>0)
{
d=n%10;
am=am+(d*d*d)
n=n/10;
}
if(temp==rev)
cout<<"\n given num is="<<temp<<" is amstrong";
else
cout<<"\n reversed num is="<< temp<<" is not amstrong";
getch();
    }