#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,k=1,n;
    printf("Enter row limit:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++,k++)
        {
            printf("%d ",k);
        }
        printf("\n");
    }
    getch();
}
