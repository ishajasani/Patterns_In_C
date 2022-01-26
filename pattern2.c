#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,n;
    printf("Enter your number of rows:");
    scanf("%d",&n);
    for(i=1;i<=n;++i)
    {
        for(j=i;j<=n;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    getch();
}
