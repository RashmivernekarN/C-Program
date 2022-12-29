  /*prg to find simple interest using sub program*/
  #include<stdio.h>
  #include<conio.h>
  float simple(float,float,float);
  void main()
    {
      float si,p,t,r;
      clrscr();
      printf("\n Enter p t r");
      scanf("%f%f%f",&p,&t,&r);
      si=simple(p,t,r); //calling function
      printf("\n Simple interest =%f",si);
      getch();

    }
    float simple(float x,float y,float z)  //called function
      {
	float si;
	si=(x*y*z)/100;
	return(si);
      }