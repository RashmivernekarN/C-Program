//even sum and odd sum up to n natural numbers
#include<iostream.h>
#include<conio.h>

 void main()
 {
    int i,esum=0,osum=0,n;
    clrscr();
    cout<<"\n\tenter value for n";
    cin>>n;
    i=1;
    while(i<=n)
    {
      cout<<"\n\t"<<i;
       if(i%2==0)
	 {
	   esum=esum+i;
	 }
	 else
	 {
	   osum=osum+i;
	 }
	 i++;
    }
    cout<<"\n\tEVEN NUMBER SUM="<<esum;
    cout<<"\n\tODD NUMBERS SUM="<<osum;
    getch();
}