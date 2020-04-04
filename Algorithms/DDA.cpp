#include<iostream>
#include<graphics.h>
#include<math.h>
#include<cmath>
using namespace std;
int dda(int xa, int ya, int xb, int yb);
int main()
{
    int xa=100, ya=100, xb=200, yb=200;
    //dda(xa, ya, xb, yb);
    float xinc, yinc;
    int steps;
    int dx=xb-xa, dy=yb-ya;
    if (abs(dx) > abs(dy))
        steps = abs(dx);
    else
        steps = abs(dy);
    xinc = dx/steps;
    yinc = dx/steps;
    for(int i=0; i <= steps; i++)
    {
        putpixel(xa, ya);
        xa = xa + xinc;
        ya = ya + yinc;
    }
}

/*int dda(int xa, int ya, int xb, int yb)
{
    float xinc, yinc;
    int steps;
    int dx=xb-xa, dy=yb-ya;
    if (abs(dx) > abs(dy))
        steps = abs(dx);
    else
        steps = abs(dy);
    xinc = dx/steps;
    yinc = dx/steps;
    for(int i=0; i <= steps; i++)
    {
        putpixel(xa, ya);
        xa = xa + xinc;
        ya = ya + yinc;
    }
}
*/
