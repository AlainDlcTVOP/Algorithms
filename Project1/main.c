#include <stdio.h>
#include <stdlib.h>


int main(){

int a[10], *iptr;
iptr = a;

*iptr = 45;
 

printf(" Adress: %p value: %d", iptr, *iptr);

return 0;
}

