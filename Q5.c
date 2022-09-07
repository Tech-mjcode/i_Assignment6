#include<stdio.h>
int main()
{
    int i,num,s=0;
    printf("Enter a number : ");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        s = s+i*i*i;
    }
    printf("Sum of %d Cube natural is %d ",num,s);
    return 0;
}
