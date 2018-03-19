#include<stdio.h>
#include<windows.h>
#define N 3

void display()      //Êä³öµØÍ¼
{
    int i,j;
    int Map[N][N]={0,0,0,0,1,0,0,0,0};
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            if(Map[i][j]==0)
                printf("  * ");
            else
                printf("    ");
        }
        printf("\n");
    }
}

void snake()      //Êä³öÉß
{
    int sna[100];
}

void main()
{
    display();
}
