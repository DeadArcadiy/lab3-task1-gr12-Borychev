#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
 
 
 
bool simple (int n) {
 for(int i = 2; i <= n/2; i++)
   {
     if(n%i == 0)
     {
       return 0;
     }
   }
  return 1;
}
 
int main () {
 int a,b;
  b = 3;
 scanf("%d", &a);
 for (int i=0; i<=a; i++){
    if(simple(i))
    {
      if(b + 2 == i)
      {
        printf("%d %d\n",b,i);
      }
      b = i;
    }
 }
 return 0;
}