#include<stdio.h>
int main(int argc, char const *argv[])
{
//half triangle of *
int n;
printf("enter number of n=");
scanf("%d",&n);
for (int i = 0; i <=n; i++)
{
    for (int j = 0; j <=n; i++)
    {
        printf("* ");
    }
   printf("\n");
}

    return 0;
}
