#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=10;
    int *mem_a=NULL;

    mem_a = &a;

    printf("%d", *mem_a);
    printf("\n%p",mem_a);
    printf("\n%d",a);
    printf("\n%p",&a);
    printf("\n%p",&mem_a);
    return 0;
}
