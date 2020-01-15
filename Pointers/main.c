#include <stdio.h>
#include <stdint.h>
/* Expected output Here is m=10, n and o are two integer variable and *z is an integer */
int main()
{
    uint8_t m = 10, n, o;
    uint8_t *z = &m;

    printf("\n\n Pointer : Show the basic declaration of pointer :\n");
    printf("-------------------------------------------------------\n");
    printf("Value m=%i\n", *z);
    printf("Address of m= %p\n", z);
    printf("Address of m= %p\n", &m); // &m gives the address of the integer variable m 
    printf("Adrress of n= %p\n", &n);
    printf("Adrress of o= %p\n", &o);
    printf("Adrress of z= %p\n", &z);
    return 0;
}
