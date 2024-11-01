#include <float.h>
#include <limits.h>
#include <stdio.h>

int main(void)
{
    printf("float型の最大値:%g\n", DBL_MAX);
    printf("float型の最小値:%g\n", DBL_MIN);
    printf("float型の精度:%d\n", DBL_DIG);
    printf("char型の最大値:%d\n", CHAR_MAX);
    printf("char型の最小値:%d\n", CHAR_MIN);
    
    return 0;
}