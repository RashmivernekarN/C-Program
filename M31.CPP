//prg to read a no and find sum of odd and even  nos
#include <iostream.h>
#include <conio.h>
void main()
{
  int i=1,sume=0,sumo=0,n;
  clrscr();
  cout<<"\n enter any no";
  cin>>n;

  while(i<=n)
    {
      if(i%2==0)
       {
       sume=sume+i;
       }
      else
	{
	sumo=sumo+i;
	}
       i++;
    }
  cout<<"sum  of even nos="<<sume<<endl;
  cout<<"sum  of odd nos="<<sumo<<endl;
  getch();
}