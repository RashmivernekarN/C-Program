  #include<stdio.h>
#include<conio.h>
void main()
{
 int a[5]={1,2,3,4,5};
 int i;
 clrscr();
 printf("\n assigned array elment are:\n");
 for(i=0;i<5;i++)
 {
 printf("\n%d",a[i]);
 }
printf("\n array element can also be printed using brlow method:\n");
 for(i=0; i<5; i++)
 {
 printf("\n %d\t%d\t%d\t%d",a[i],i[a],*(i+a),*(a+i));
 }printf("\n adress of array element are:\n");
 for(i=0;i<5;i++)
{
printf("\n%d",&a[i]);
}
getch ();
}
