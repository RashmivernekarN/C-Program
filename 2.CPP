#include <iostream>
#include <string.h>

struct student 
{
            int id;
            char name[20];
            float percentage;
} record;

int main() 
{

            record.id=1;
	    strcpy(record.name, "Raju");
	    record.percentage = 86.5;

	    cout<<" Id is:  \n"<<record.id;
	    cout<<" Name is: \n"<<record.name;
	    cout<<" Percentage is:  \n"<<record.percentage;
	    return 0;
}