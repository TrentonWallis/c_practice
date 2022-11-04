#include <stdio.h>
int main(){

    //for an integer
    int * int_ptr;
    *int_ptr = 5;
    printf("%d\n", *int_ptr); //need to deref here for ints 
    
    //for a character
    char char_ptr[] = "c";
    printf("%c\n", *char_ptr); //deference is grabbing the first value in the "string"
    //or
    printf("%c\n", char_ptr[0]);

    //for a modifiable string
    char str_mod_ptr[] = "cat";
    printf("%s\n", str_mod_ptr);

    //for a non modifiable string
    char * str_ptr = "dog";
    printf("%s\n", str_ptr);

    //creating a list of ints
    // THIS DOES NOT WORK //int * int_array = {1, 2, 3, 4};
    //Need to do it this way
    int int_array[] = {1, 2, 3, 4};
    int x = 2;
    printf("%d\n", int_array[x]);
    //Then can do this
    int * ptr_to_int_array = &int_array[0];
    printf("%d\n", *ptr_to_int_array); //to grab first element
    //then can increment
    printf("%d\n", *(++ptr_to_int_array)); //increments befor line execution    
}