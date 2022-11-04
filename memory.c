#include <stdlib.h>
#include <stdio.h>
#include <string.h>
char* mem_stays_func(char str[], int size){
    char * mem = (char *) malloc(size * sizeof(char));
    strcpy(mem, str);
    return mem;
}

char * mem_does_not_stay(char str[], int size){
    char mem[size];
    strcpy(mem, str);
    return mem;

}

int main(){
    char stack_buff[500]; //will be deallocated automaticaly at end of main scope
    printf("Stack value = `%d`\n", stack_buff[3]);
    char * heap_buff = (char *) malloc(500 * sizeof(char)); //How to use malloc 
    printf("Malloc value = `%d`\n", heap_buff[3]);
    free(heap_buff); //Must pass in the pointer
    //How to use calloc
    char * heap_buff_2 = (char * ) calloc(500, sizeof(char));
    printf("Calloc value = `%d`\n", heap_buff_2[3]);
    free(heap_buff_2); //Must pass in the pointer
    /* calloc will initialize all of memory to zero while malloc will not*/

    //There is also realloc
    int * heap_int_array = (int * ) malloc(10 * sizeof(int));
    printf("int array address = %u\n", &heap_int_array);
    heap_int_array = realloc(heap_int_array, 15);
    printf("int array address after resize = %u\n", &heap_int_array);

    //See if we can still print the string
    char * no_mem = mem_does_not_stay("no_mem", 7);
    printf("No mem = '%s'\n", no_mem);

    char * has_mem = mem_stays_func("has_mem", 8);
    printf("has mem = '%s'\n", has_mem);
    free(has_mem); //If this was not here then it would exist outside this scope :) 

 
}