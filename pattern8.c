#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,n;
    printf("enter number of rows:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i==j)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
    getch();
}
