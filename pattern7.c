#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n,k,j,p;
    printf("Enter row limit:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(k=1;k<=n-i;k++)
            printf("  ");
        for(j=1;j<=i;j++)
            printf("* ");
        for(p=j-2;p>0;p--)
            printf("* ");
        printf("\n");
    }
    for(i=n-1;i>0;i--)
    {
        for(k=1;k<=n-i;k++)
            printf("  ");
        for(j=1;j<=i;j++)
            printf("* ");
        for(p=j-2;p>0;p--)
            printf("* ");
        printf("\n");
    }
    getch();
}
