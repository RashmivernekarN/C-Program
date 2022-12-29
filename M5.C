 /*prg to demonstrate size of operator */
  #include<stdio.h>
  #include<conio.h>
  void  main()
    {
       clrscr();
       printf("\n size of int=%d bytes",sizeof(int));
       printf("\n size of float=%d bytes",sizeof(float));
       printf("\n size of char=%d bytes",sizeof(char));
       printf("\n size of double=%d bytes",sizeof(double));
       printf("\n size of signed=%d bytes",sizeof(signed));
       printf("\n size of unsigned=%d bytes",sizeof(unsigned));
       printf("\n size of short=%d bytes",sizeof(short));
       printf("\n size of long=%d bytes",sizeof(long));
       getch();
    }