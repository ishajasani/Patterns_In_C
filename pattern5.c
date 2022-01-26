#include<stdio.h>
#include<conio.h>
void main()
{
    int i,s,j,n,k;
    printf("Enter row limit:");
    scanf("%d",&n);
    for(i=1,k=1,s=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(i%2!=0)
            {
                printf("%d ",s);
                s++;
            }
            else
            {
                printf("%c ",64+k);
                k++;
            }
        }
        printf("\n");
    }
    getch();
}
