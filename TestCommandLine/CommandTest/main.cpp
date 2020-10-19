#include <stdio.h>

float giai_b1(float a, float b);

int main(int argc, char **argv)
{
    float m = *argv[0];
    float n = *argv[1];
    float result = giai_b1(m, n);
    printf("My result: %f", result);
    return 0;
}

float giai_b1(float a, float b)
{
    if(a==0)return 0;
    else return (-b/a);
}