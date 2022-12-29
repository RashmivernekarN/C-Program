  /*prg to find area of a rectangle using sub program*/
  #include<stdio.h>
  #include<conio.h>
  float area(float,float);
  void main()
    {
      float ar,l,b;
      clrscr();
      printf("\n Enter length and breadth");
      scanf("%f%f",&l,&b);
      ar=area(l,b); //calling function
      printf("\n Area of a rectagle =%f",ar);
      getch();

    }
    float area(float x,float y)  //called function
      {
	float ar;
	ar=x*y;
	return(ar);
      }