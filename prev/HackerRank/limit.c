#include <stdio.h>
#include <limits.h>

int main() 
{ 
   int a= INT_MAX;
   int b= INT_MIN;
    printf("%d  == %d\n",a,(a+1));
    printf("%d == %d",b,(b-1));
   return(0);
}