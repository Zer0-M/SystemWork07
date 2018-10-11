#include <stdio.h>
#include <stdlib.h>
#include "linkedlist.h"

int main(){
    struct node *first;
    printf("the linked list when first initialized:");
    print_list(first);
    for(int i=10;i>=0;i--){
        first=insert_front(first,i);
        printf("After %d inserted to the front of the linked list:",i);
        print_list(first);
    }
    printf("Result from free_list:%p\n",free_list(first));
     printf("Linked list after freed:");
    print_list(first);
    return 0;
}