#include<cs50.h>
#include<stdio.h>

int main(void)
{
    int n=get_int("Height: ");
    int i;
    for(int j=1; j<=n;j++)
    {
        for(i=n-j;i>=1;i--)
        {
            printf(" ");
        }
        for(int x=0;x<j;x++)
        {
            printf("#");
        }
        printf("  ");
        for(int y=0;y<j;y++)
        {
            printf("#");
        }
        printf("\n");
    }
    
}
