#include<stdio.h>
#include<math.h>
#include<string.h>
#include<unistd.h>
int main()
{
    float A=0, B=0, i, j;
    float z[1760];
    char b[1760];
    printf("\x1b[2j");
    for (;;) {
        memset(b,32, 1760);
        memset(z, 0, 7040);
        for (j=0; j<6.28; j += 0.07) {
            for (i=0; i<6.28; i += 0.07) {
                float c=sin(i), d=cos(j), e=sin(A),
                      f=sin(j), g=cos(A), h=d+2,
                      D= 1/ (c*h*e + f*g+5),
                      l= cos(i), m=cos(B), n=sin (B),
                      t= c*h* g-f *e;
                int x= 40+30 * D * (l*h*m-t*n),
                    y= 12+15 * D * (l* h* n+t* m),
                    o= x+80*y,
                    N= 8* (( f* e-c* d* g)* m-c* d* e-f* g-l* d*n);
                if (22> y&&y> 0&&x > 0&&80 > x&&D > z[o]) {
                z[o] =D;
                    b[o]= ".,-¬:;=!*#$@" [N> 0 ? N: 0];
                }
            }
        }
        printf("\x1b[H");
        for (int k=0; k< 1760; k++)
            putchar(k % 80 ? b[k]: 10);
        A+= 0.04;
        B+= 0.08;
        usleep(30000);
    }
    return 0;
}