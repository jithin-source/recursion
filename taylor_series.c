#include <stdio.h>
#include <stdlib.h>
 double e(int x,int n)
 {
     static double p=1,f=1;
     double result;
     if(n==0)
     {
        return 1;
     }else
        {

          result = e(x,n-1);
          p=p*x;
          f=f*n;
          return result+p/f;
     }
 }
int main()
{
  int x,n;
  printf("Enter the value:");
  scanf("%d%d", &x, &n);
  printf("e^%d = %lf",x, e(x,n));
   return 0;

}