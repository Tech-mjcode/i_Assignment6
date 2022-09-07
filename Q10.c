#include<stdio.h>
#include<math.h>
int main()
{
    int re,reverse=0,num,digit=1,i=1,original;
    printf("Enter a number : ");
    scanf("%d",&num);
    original = num;
    int x = num;
    while(num/10)
    {
        num = num/10;
        digit++;
    }

    while((digit-i)>=0)
    {
        re = x%10;
        x = x/10;
        if(x==0)
            reverse = reverse+re;
        else
            reverse = reverse + re*pow(10,digit-i);
        i++;
    }

    printf("Reverse of %d is %d ",original,reverse);
}
