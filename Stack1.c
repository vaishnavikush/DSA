#include<stdio.h>
struct stack{
int stackno;
struct stack *next;
}*top;

void  push(){
struct stack *ptr;
ptr=(struct stack *)malloc(sizeof(struct stack));
if(ptr==NULL){
    printf("\nDoes not allocate memory");
}
else{
        printf("\nEnter Stack Number");
        scanf("%d",&ptr->stackno);
    if(top==NULL){
        ptr->next=NULL;
        top=ptr;
    }
    else{
        ptr->next=top;
        top=ptr;
    }
}
}

void Pop(){
    if(top==NULL){
        printf("\nAdd Some Nodes First");
    }
    else{
struct stack *ptr;
ptr=top;
top=top->next;
free(ptr);
}
}

void Show(){
    if(top==NULL){
        printf("\nStack is empty");
    }
    else{
struct stack *ptr;
ptr=top;
while(ptr!=NULL){
        printf("\nStack Number is %d",ptr->stackno);
        printf("\n-----------");
    ptr=ptr->next;
}
}
}

int peak(){
if(top==NULL){
    return -1;
}
else{
   return top->stackno;
}
}
void main(){
int c;
do{
    printf("\n1.Push Nodes-->Add");
    printf("\n2.Pop Nodes-->Delete");
    printf("\n3.Show Nodes");
    printf("\n4.Top Nodes");
    printf("\n5.Exit");
    printf("\nEnter Your Choice");
    scanf("%d",&c);
    if(c==1)
        push();
    else if(c==2)
            Pop();
    else if(c==3)
        Show();
    else if(c==4){
        int no;
        no=peak();
        if(no==-1){
            printf("\nStack is empty");
        }
        else{
             printf("\nStack Top value is %d",no);
        }
    }

}while(c!=5);
}
