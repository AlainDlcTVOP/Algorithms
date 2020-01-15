#include <stdio.h>
#include <stdint.h>

/*Pointer : How to  handle the pointers in the program :                                                       
------------------------------------------------------------                                                  
 Here in the declaration ab = int pointer, int m= 29                                                                                                                                                                      
 Address of m : 0x7fff24a3f8bc                                                                                
 Value of m : 29                                                                                                                                                                                                           
 Now ab is assigned with the address of m.                                                                    
 Address of pointer ab : 0x7fff24a3f8bc                                                                       
 Content of pointer ab : 29                                                                                                                                                                                               
 The value of m assigned to 34 now.                                                                           
 Address of pointer ab : 0x7fff24a3f8bc                                                                       
 Content of pointer ab : 34                                                                                                                                                                                               
 The pointer variable ab is assigned the value 7 now.                                                         
 Address of m : 0x7fff24a3f8bc                                                                                
 Value of m : 7 */

int main()
{
    uint8_t *ab;
    uint8_t m = 29;

    printf("Address of m %p \n", &m);
    printf("Value of m %i \n", m);
    ab = &m;
    printf("Now ab is assigned with the address of m.\n");
    printf("Address of pointer ab : %p\n", ab);
    printf("Content of pointer ab : %d\n\n", *ab);

    m = 34;
    printf("Now ab is assigned withvalue 34\n");
    printf("Address of pointer ab : %p\n", ab);
    printf("Content of pointer ab : %d\n\n", *ab);
    *ab = 7;
    printf("The pointer variable ab is assigned the value 7 now\n");
    printf("Address of m : : %p\n", &m);
    printf("Value of m %d\n\n", m);

    return 0;
}
