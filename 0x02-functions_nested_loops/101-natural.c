#include<stdio.h>


/**
 * computes and prints the sum of all the multiples of 3 or 5 below 1024
 * @n:
 * Return: Always 0.
 */
 
 
int main()
{
    long unsigned int i,sum=0;
    clrscr();
    for(i=0;i<=1000;i++)
    {
        if((i%5==0)||(i%3==0))
        {
            sum=sum+1;
        }
    }
    printf("%d\n",sum);
    getchar();
    return 0;
}
