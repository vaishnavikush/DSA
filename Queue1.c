#include<stdio.h>
struct queue{
int qno;
struct queue *next;
}*rare,*front;
void push(){
struct queue *ptr;
ptr=(struct queue *)malloc(sizeof(struct queue));
if(ptr==NULL){
    printf("\nDoes Not Allocate Memory");
}
else{
    printf("\nEnter queue no");
    scanf("%d",&ptr->qno);
    if(front==NULL){
        front=rare=ptr;
        ptr->next=NULL;
    }
    else{
        rare->next=ptr;
        ptr->next=NULL;
        rare=ptr;
    }
}
}
void Show(){
    struct queue *p;
    if(front==NULL){
        printf("\nQueue is empty");
    }
    else{
for(p=front;(p);p=p->next){
    printf("\nQueue no is %d",p->qno);
    printf("\n--------");
}
}
}
void Pop(){
struct queue *ptr;
if(front==NULL){
        printf("\nQueue is empty");
    }
    else{
ptr=front;
front=ptr->next;
free(ptr);
}
}
void main(){
    rare=front=NULL;
int c;
do{
printf("\n1.Add Nodes");
printf("\n2.Show Nodes");
printf("\n3.Delete Nodes");
printf("\n4.Exit");
printf("\nEnter Your Choice");
scanf("%d",&c);
if(c==1)
    push();
else if(c==2)
    Show();
else if(c==3)
    Pop();
}while(c!=4);
}




