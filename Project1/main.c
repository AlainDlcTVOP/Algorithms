#include <stdio.h>
#include <stdlib.h>


int main(){

int a[10], *iptr;
iptr = a;
*iptr = 5;

printf(" Adress: %d value: %d", iptr, *iptr);

return 0;
}

