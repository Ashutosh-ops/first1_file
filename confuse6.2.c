#include <stdio.h>
#include <stdlib.h>

int sum(int a, int b)
{
    return a + b;
}

void greet()                            
{                                     
    printf("Hello world my user good morning %d\n");
}

int main()
{
    int (*fPtr) (int, int);
    fPtr = &sum;
    int d = (*fPtr)(4, 6); /* Sir, When I am declaring d as a pointer variable then it is giving me core dumped
    ,So this thing makes me a little bit confusing 
    */
    printf("The value of d is %d\n", d);
    return 0;
}

