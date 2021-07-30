#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *link;
};      //making a box or structure of linked list

int main(){
    struct node *head = malloc(sizeof(struct node));         //Issuing the size to the linked list

       
    head-> data=45;
    head ->link = NULL;

    printf("%d",head->data);

    return 0;

}
