#include<stdio.h>
int main()
{
    int num,m=0,i=1;
    printf("Enter a number : ");
    scanf("%d",&num);

    if(num>0)
    {
        while(i<=num)
        {
            if(m<=2)
            {
               if(num%i==0)
                    m++;
               i++;
            }else
                break;



        }

        if(m==2){
        printf("%d is prime a number.",num);
    }   else
        printf("%d is not a prime number.",num);
    }
    else
    {
        printf("Enter a Positive number.");
    }





    return 0;
}
