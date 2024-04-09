#include <stdio.h>
#include <time.h>
#define N 20
int main()
{
    srand(time(NULL));
    int i;
    double vt[N];
    double *p;
    p=vt;

    for(i = 0;i<N; i++)
    {
        vt[i]=1+rand()%100;
        printf("%f\n", *p);
        p++;
    }
}

