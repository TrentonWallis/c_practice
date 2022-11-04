//Play with structures here
#include <string.h>
#include <stdio.h>
struct myData
{
    int a;
    int b;
    char str[20];
};

typedef struct myDataAlone
{
    int c;
    int d;
    int * l;
}DA;


int main(){
    struct myData data1;
    data1.a = 5;
    data1.b = 6;
    strcpy(data1.str,"Hello world!");
    printf(data1.str);

    DA data2; //this is nice
    data2.c = 3;
    data2.d = 7;
    data2.l = &data2.d;
}