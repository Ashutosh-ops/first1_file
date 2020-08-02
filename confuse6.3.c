#include <stdio.h>

int *Ashu()
{
    int a = 3;
    return &a;
}
int main()
{
    int *ptr = Ashu(); //ptr pointing to a invalid location.
    printf("%d\n", *ptr);
    getchar();
    return 0;
}