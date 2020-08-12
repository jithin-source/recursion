#include <stdio.h>
#include <stdlib.h>
 int c(int n,int r)
 {

     if(r==0 || n==r)
     {
        return 1;
     }else
        {

          return c(n-1,r-1)+c(n-1,r);

     }
 }
int main()
{
  int r,n;
  printf("Enter the value of n and r:");
  scanf("%d%d", &n, &r);
  printf("%dC%d = %d",n,r, c(n,r));
   return 0;

}