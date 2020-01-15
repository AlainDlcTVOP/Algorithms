#include <stdio.h>
#include <stdint.h>

/*Pointer : Demonstrate the use of & and * operator :                                                          
--------------------------------------------------------                                                      
 m = 300                                                                                                      
 fx = 300.600006                                                                                              
 cht = z                                                                                                      
                                                                                                              
 Using & operator :                                                                                           
-----------------------                                                                                       
 address of m = 0x7fff71cd0b38                                                                                
 address of fx = 0x7fff71cd0b3c                                                                               
 address of cht = 0x7fff71cd0b37                                                                              
                                                                                                              
 Using & and * operator :                                                                                     
-----------------------------                                                                                 
 value at address of m = 300                                                                                  
 value at address of fx = 300.600006                                                                          
 value at address of cht = z              

 Using only pointer variable :                                                                                
----------------------------------                                                                            
 address of m = 0x7fff71cd0b38                                                                                
 address of fx = 0x7fff71cd0b3c                                                                               
 address of cht = 0x7fff71cd0b37                                                                              
                                                                                                              
 Using only pointer operator :                                                                                
----------------------------------                                                                            
 value at address of m = 300                                                                                  
 value at address of fx= 300.600006                                                                           
 value at address of cht= z */
int main()
{

    int m = 300;
    float fx = 300.60;
    char cht = 'z';

    int *ptri = &m;
    float *ptrf = &fx;
    char *ptrc = &cht;

    printf("Pointer : Demonstrate the use of & and * operator :  \n");
    printf("-------------------------------------------------------- \n");
    /*Using & operator : */
    puts("Using & operator");
    printf("Address of m =%p\n", &m);
    printf("Address of fx =%p\n", &fx);
    printf("Address of cht =%p\n", &cht);
    /*Using & and * operator : */
    puts("Using & and * operator");
    printf("Address of m =%p\n", *(&m));
    printf("Address of fx =%p\n", *(&fx));
    printf("Address of cht =%p\n", *(&cht));
    /*Using only pointer variable : */
    puts("Using only pointer variable");
    printf("Address of m =%p\n", ptri);
    printf("Address of fx =%p\n", ptrf);
    printf("Address of cht =%p\n", ptrc);
    /*Using only pointer operator*/
    puts("Using only pointer operator");
     printf("Address of m =%p\n", *ptri);
    printf("Address of fx =%p\n", *ptrf);
    printf("Address of cht =%p\n", *ptrc);
    return 0;
}
