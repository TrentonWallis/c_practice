
#include <stdio.h>
typedef struct block{
 int data;
 struct block * next;
}block;

typedef struct{
    block * head;
}linked_list;

void printList(linked_list l)
{
    block * n = l.head;
    while (n != NULL) {
        printf(" %d ", n->data);
        n = n->next;
    }
}

int main(){
    block c = {14, NULL};
    block b = {13, &c};
    block a = {10, &b};
    linked_list ll = {&a};
    printf("%d\n", (ll.head+1)->data);
    printList(ll);

}