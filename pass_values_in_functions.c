/*
In this file we are going to try passing values
- By value (makes a copy)
- By pointer 
- By reference
*/

#include <stdio.h>
#include <stdlib.h>

void print_num(int num){
    printf("%d\n", num);
    printf("Changing to 8\n");
    num = 8;

}

void print_num_at_ptr(int * num){
    printf("%d\n", *num);
    printf("Changing value to 10\n");
    *num = 10;
}

void pass_in_array(int num_array[], int index){
    printf("%d\n", num_array[index]);
    printf("Changing value to 3\n");
    num_array[index] = 3;
}

int main(){
    int * ptr = (int *) malloc(1 * sizeof(int));
    *ptr = 5;
    
    //Pass in value
    print_num(*ptr);
    printf("Print num did not update int = %d \n", *ptr);
    //Pass in Pointer
    print_num_at_ptr(ptr);
    printf("Pass by pointer did update int = %d, was 5\n", *ptr);

    //Pass in reference 
    int integer = 7;
    print_num_at_ptr(&integer);
    printf("Pass by pointer did update int = %d, was 7\n", integer);

    //Pass in an array
    int int_array[5] = {1, 2, 3, 4, 5};
    int index = 1;
    pass_in_array(int_array, index);
    printf("Pass in array was updated in function, %d\n", int_array[index]);
    free(ptr);
}