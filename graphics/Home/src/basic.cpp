// #include <graphics.h>
// #include <conio.h>

// int main()
// {
//     int gd = DETECT, gm;

//     initgraph(&gd, &gm, (char*)"");

//     circle(200, 200, 50);

//     line(100, 100, 300, 300);

//     getch();
//     closegraph();

//     return 0;
// }





// Middle Finger Drawing using graphics.h

#include <graphics.h>
#include <conio.h>
#include <iostream>

using namespace std;

int main()
{
    int gd = DETECT, gm;

    initgraph(&gd, &gm, (char*)"");

    setbkcolor(BLACK);
    cleardevice();

    // Hand color
    setcolor(LIGHTGRAY);
    setfillstyle(SOLID_FILL, LIGHTGRAY);

    // Palm
    bar(250, 250, 390, 400);

    // Thumb
    bar(200, 300, 250, 360);

    // Index Finger
    bar(260, 170, 290, 250);

    // Middle Finger (Raised)
    bar(305, 80, 340, 250);

    // Ring Finger
    bar(355, 190, 385, 250);

    // Little Finger
    bar(395, 220, 420, 250);

    // Finger outlines
    rectangle(250, 250, 390, 400);
    rectangle(200, 300, 250, 360);

    rectangle(260, 170, 290, 250);
    rectangle(305, 80, 340, 250);
    rectangle(355, 190, 385, 250);
    rectangle(395, 220, 420, 250);

    // Wrist
    setfillstyle(SOLID_FILL, DARKGRAY);
    bar(280, 400, 360, 470);

    outtextxy(240, 40,
              (char*)"Middle Finger");

    getch();
    closegraph();

    return 0;
}