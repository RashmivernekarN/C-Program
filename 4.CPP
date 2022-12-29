#include <iostream>
#include <string.h>
struct student
{
     int id;
     char name[30];
     int percentage;
};
int main()
{
     int i;
     struct student record1 = {1, "Raju", 90};
     struct student record2 = {2, "Mani", 93};
     struct student record3 = {3, "anil", 98};
     clrscr();

     cout<<"Records of STUDENT1: \n";
     cout<<"  Id is:  \n"<<record1.id;
     cout<<"  Name is:  \n"<<record1.name;
     cout<<"  Percentage is:  \n\n"<<record1.percentage;

     cout<<"Records of STUDENT2: \n";
     cout<<"  Id is:  \n"<<record2.id;
     cout<<"  Name is:  \n"<<record2.name;
     cout<<"  Percentage is:  \n\n"<<record2.percentage;

     cout<<"Records of STUDENT3: \n";
     cout<<"  Id is:  \n"<<record3.id;
     cout<<"  Name is:  \n"<<record3.name;
     cout<<"  Percentage is:  \n\n"<<record3.percentage;

     getch();
}