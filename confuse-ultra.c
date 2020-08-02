#include<stdio.h>
 int main()
 {
     unsigned int i = 10;
     signed char c = -10;
     if(i>c)
     {
         printf("yes\n");
     }
     
     else if (i<c)
     {
         printf("no\n");
     }
     printf("c = %c\n",c);
     printf("i = %d\n",i);
     printf(" ? = %c\n",-10);
    //  printf("%d\n",a);

     return 0;

 }