#include <stdio.h>
#include <time.h>
#define N 5
#define M 7
int main()
{
    srand(time(NULL));
    int i,j;
    int mt[N][M];
    int *p_mt;
    p_mt = mt;

    for(i = 0;i<N; i++)
    {
        for(j = 0;j<M; j++)
        {
            mt[i][j]=1+rand()%100;
            printf("  %d", mt[i][j]);
            p_mt++;
        }
    printf("\n");
    }
}
