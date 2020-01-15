#include <stdio.h>

/* We want to write 2/3, not 4/6,200/300
 finding the greates common divisor(GCD)*/

int gcd(int u, int v);
struct fraction
{
   int numerator;
   int denominator;
};

int main()
{

    
    int x, y;
    puts("Type 2 integers exit with ctrl c");
    while (scanf("%d %d", &x, &y) != EOF)
        if (x > 0 && y > 0)
            printf(" %d %d %d\n", x, y, gcd(x, y));

    return 0;
}
int gcd(int u, int v)
{
    int t;
    while (u > 0)
    {
        if (u < v)
        {
            t = u;
            u = v;
            v = t;
        }
        u = u - v;
        /* code */
    }
    return v;
}
