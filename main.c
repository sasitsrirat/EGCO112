#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int isprime(int n)
{
    if (n<=1) {
        return 0;
    }
    for(int count=2; count<n; ++count)
    {
        if (n % count==0)
        {
            return 0;
        }
    }
    return 1;
}

int main (int argc, char **argv)
{
    int count,n,max=0,min=0;
    for(count=1; count<argc; ++count)
    {
        n = atoi(argv[count]);
        if(isprime(n)==1)
        {
            if(n>max || max ==0)max=n;
            if(n<min || min ==0)min=n;
        }
    }
  
    if (max==0 || min==0)
    {
        printf("Don't have prime number \n");
        return 0;
    }
    printf("The smallest prime is %d \n",min);
    printf("The biggest prime is %d \n",max);
    return 0;
}
//gcc main.c and ./a.out
//gcc main.o -o gram
//make --> sasit