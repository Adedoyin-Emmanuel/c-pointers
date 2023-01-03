#include <stdio.h>

/**
 * main - prints a pointer that points to a pointer that points to a pointer
 * so I can dereference a dereference a dereference
*/

int main(void)
{
    int x = 5;

    /*create a pointer that points to x*/
    int *x_pointer_1 = &x;

    /*create another pointer that points to the first pointer*/ 
    int **x_pointer_2 = &x_pointer_1;

    /*create another pointer that points to the second pointer*/
    int ***x_pointer_3 = &x_pointer_2;


    /*Time to dereference a dereference a dereference :)*/

    //first dereference

    printf("Dereference value of the first pointer %d\n",*x_pointer_1);

    //second dereference
    printf("Dereference value of the second pointer is %d\n",**x_pointer_2);

    //third dereference 
    printf("Dereference value of the third pointer is %d\n",***x_pointer_3);

}