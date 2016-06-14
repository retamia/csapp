#include <stdio.h>

int equal(int a, int b)
{
    return !(a ^ b);
}

int main()
{
    printf("%d", equal(1, 1));
    return 0;    
}