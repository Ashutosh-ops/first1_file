#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>


int *Ashu()
{
    int b = 2;
    int *a = &b;
    return a;
}
int main()
{
    printf("%d", Ashu());
    getchar();
    /* system("pause");<<--And one more thing why Should I use getchar(); instead of system("pause");
    OR
    In which way getchar(); and in which way system("pause");

    */

    return 0;
}
