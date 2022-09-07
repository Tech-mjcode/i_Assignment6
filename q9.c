#include<stdio.h>
int main()
{
    int num1,num2,big,small,lcm;
    printf("Enter two number : ");
    scanf("%d %d",&num1,&num2);
    int i=1;
    if(num1>num2)
    {
        big = num1;
        small = num2;
    }else
    {
        big = num2;
        small = num1;
    }
    while(1)
    {
        if((small*i)%big ==0)
        {
            lcm = small *i;
            break;
        }
        i++;
    }

    printf("LCM of %d and %d is %d",num1,num2,lcm);
    return 0;
}
