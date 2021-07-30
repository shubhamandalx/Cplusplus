#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *link; 
};

void printing_the_nodes(struct node *head){

    if(head==NULL){
        printf("Linked List is Empty\n");
    }
    struct node *ptr = NULL;
    ptr = head;

    while(ptr!=NULL){
        printf(" %d ",ptr->data);
        ptr = ptr->link;

    }
    


}

int main(){
    struct node *head = malloc(sizeof(struct node));
    head ->data= 1;
    head ->link = NULL;

    struct node *current = malloc(sizeof(struct node));
    current->data =2;
    current->link = NULL;
    head->link= current;

    current = malloc(sizeof(struct node));
    current->data= 3;
    current->link= NULL;
    head->link->link = current;

    printing_the_nodes(head);

    return 0;

}