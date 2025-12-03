#include <stdio.h>



int main(){

    // Basic pointers and Basic addresses
    int a = 10;
    int *b = &a;

    printf("Address of a is %p\n", b);
    printf("Value of a: %d\n",*b);


    //-----------------------------
    // More advanced use of pointers
    // Arrays are just fancy pointers

    char array[5] = {'a','b','c','d','e'};
    char *sameArray = array;
    char **fancy_same_array = &sameArray;

    printf("Array[3]: %c Address: %p\n",array[3],&array[3]);
    printf("SameArray[3]: %c Address: %p\n",sameArray[3],&sameArray[3]);
    printf("**fancy_same_array[3] = %c, addr = %p\n", (*fancy_same_array)[3], &(*fancy_same_array)[3]);

    //------------------------------------
    //Array of Pointers

    char *ptr_array[2];
    char *ptr1 = NULL, *ptr2 = NULL;
    char char_elements[2] = {'a','b'};

    ptr1 = &char_elements[0];
    ptr2 = &char_elements[1];

    ptr_array[0] = ptr1;
    ptr_array[1] = ptr2;

    printf("Array[0]: %c Address: %p\n",*ptr_array[0],&ptr1);
    printf("Array[1]: %c Address: %p\n",*ptr_array[1],&ptr2);




}