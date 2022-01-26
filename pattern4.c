#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,k,n;
    printf("Enter row limit:");
    scanf("%d",&n);
    for(i=1,k=1;i<=n;i++)
    {
        for(j=1;j<=i;j++,k++)
        {
            if(k%2==0)
                printf("0 ");
            else
                printf("1 ");
        }
        printf("\n");
    }
    getch();
}
