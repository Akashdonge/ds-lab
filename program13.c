#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
};
struct node* crete(int data){
    struct node* newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->next=NULL;
    return newnode;
}
struct node* push(struct node* head,int data){
    if(head==NULL){
        return crete(data);
    }
    struct node* newnode=crete(data);
    newnode->next=head;
    return newnode;
}
struct node* pop(struct node* head){
    if(head==NULL){
        printf("stack is empty");
        return NULL;
    }
    if(head->next==NULL){
        printf("%d is poped \n",head->data);
        free(head);
        return NULL;
    }
    struct node* temp=head->next;
     printf("%d is poped \n",head->data);
     free(head);
     return temp;
}
void main(){
    struct node* top=NULL;
   top= push(top,34);
   top= push(top,35);
   top= push(top,36);
   top= push(top,37);
    top=pop(top);
    top=pop(top);
    top=pop(top);
    top=pop(top);
    top=pop(top);
}