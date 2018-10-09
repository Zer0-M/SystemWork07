#include <stdio.h>
#include <stdlib.h>
#include "linkedlist.h"

void print_list(struct node *ll){
    printf("{");
    while (ll!=NULL){
        if(ll->next==NULL){
            printf("%d",ll->i);
        }
        else{
            printf("%d,",ll->i);
        }
        ll=ll->next;   
    }
    printf("}\n");
}
struct node * insert_front(struct node * front, int val){
    struct node *new = malloc(sizeof(int)+sizeof(struct node*));
    new->i=val;
    new->next=front;
    return new;
}
struct node * free_list(struct node * ll){
    struct node *first=ll;
    while(ll!=NULL){
        free(ll);
        ll->i=0;
        ll=ll->next; 
    }
    return first;
}