#include <stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc, char **argv)
{
  int i,*a,N,sum;

N=argc-1;
a=(int*)malloc(sizeof(int)*N);

for(i=0;i<N;i++) 
{
   a[i]=atoi(argv[i+1]);
}
}
//gcc main.c and ./a.out
//gcc main.o -o gram