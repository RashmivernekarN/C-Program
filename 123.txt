    #include <graphics.h>
    #include <stdlib.h>
    #include <stdio.h>
    #include <conio.h>
    #include <math.h>
    #define Pi 3.1415926536
    // this function initializes graphics mode
    // it will work only if you're using Borland C++ compiler & BGI drivers
    // if you're using another compiler you should overwrite body of this function
    void init_gr(void)
    {
    /* request autodetection */
    int gdriver = DETECT, gmode, errorcode;
    /* initialize graphics mode */
    initgraph(&gdriver, &gmode, "");
    /* read result of initialization */
    errorcode = graphresult();
    if (errorcode != grOk) /* an error occurred */
    {
    printf("Graphics error: %s\n", grapherrormsg(errorcode));
    printf("Press any key to halt:");
    getch();
    exit(1); /* return with error code */
    }
    }
    // this function shuts graphics mode down
    // it will work only if you're using Borland C++ compiler & BGI drivers
    // if you're using another compiler you should overwrite body of this function
    void end_gr(void)
    {
    closegraph();
    }
    // this function moves CP to (x,y) position
    // it will work only if you're using Borland C++ compiler & BGI drivers
    // if you're using another compiler you should overwrite body of this function
    void MoveTo(int x, int y)
    {
    moveto(x,y);
    }
    // this function draws a line to (x,y) position
    // it will work only if you're using Borland C++ compiler & BGI drivers
    // if you're using another compiler you should overwrite body of this function
    void LineTo(int x, int y)
    {
    lineto(x,y);
    }
    const N=6; // number of points in the figure
    // coordinates of all given points
    enum actions {MOVE,DRAW};
    struct
    {
    actions action;
    int x;
    int y;
    } figure[N]={{MOVE,360,270},{DRAW,360,260},{DRAW,355,260},{DRAW,360,250},
    {DRAW,365,260},{DRAW,360,260}};
    int x0,y0,dx,dy;
    float phi;
    int main(void)
    {
    // initializing graphics mode
    init_gr();
    // rotating about (x0,y0)
    x0=300;
    y0=260;
    // by 10 degrees
    phi=45.0*Pi/180.0;
    // main loop
    for(int i=0;i<8;i++)
    {
    // rotating the figure
    for (int j=0;j<N;j++)
    {
    dx=figure[j].x-x0;
    dy=figure[j].y-y0;
    figure[j].x=x0+dx*cos(phi)-dy*sin(phi);
    figure[j].y=y0+dx*sin(phi)+dy*cos(phi);
    }
    // drawing rotated figure
    for (j=0;j<N;j++)
    if (figure[j].action==MOVE)
    MoveTo(figure[j].x,figure[j].y);
    else
    LineTo(figure[j].x,figure[j].y);
    }
    // clean up
    getch();
    end_gr();
    return 0;
    }