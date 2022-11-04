#include <stdio.h>


void reverse(char * s, int Ssize){

    for (int i = 0; i < Ssize/2; i++){
        char temp = s[i];
        s[i] = s[Ssize - i - 1];
        s[Ssize - i - 1] = temp;
    }
}

int get_length_of_string(char * s){
    int length = 0;
    while(s[length++]!='\0');
    return length-1;

}

void main(){
    char str[20]; //For my complier need to use the str[] instead of char * str
    printf("Input a string: ");
    scanf("%s", str);
    printf("Size of str: %d \n", get_length_of_string(str));
    reverse(str, get_length_of_string(str));
    printf("Reversed String: %s", str); 
}