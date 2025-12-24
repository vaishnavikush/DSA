#include<stdio.h>
struct Student {
int rollno;
struct Student *next,*prev;
}*start,*end;
void AddNodes(){
struct Student *ptr,*p=start,*last;
ptr=(struct Student *)malloc(sizeof(struct Student));
if(ptr==NULL){
    printf("\nMemory not allocate");
}
else{
        printf("\nEnter Student Rollno");
        scanf("\n%d",&ptr->rollno);
    if(start==NULL){
        start=ptr;
        start->prev=ptr;
        start->next=ptr;
    }
    else{
        do{
                last=p;
            p=p->next;
        }while(p!=start);
        ptr->prev=last;
        last->next=ptr;
        ptr->next=start;
        start->prev=ptr;
    }
}
}
void ShowNodes(){
struct Student *p=start;
do{
        printf("\nStudent Rollno : %d",p->rollno);
        printf("\n-----------------");
    p=p->next;
}while(p!=start);
}
void main(){
start=end=NULL;
int c;
do{
    printf("\n1.Add Nodes");
    printf("\n2.Show All Nodes");
    printf("\n3.Exit");
    printf("\n3.Enter Your Choice");
    scanf("\n%d",&c);
    if(c==1)
        AddNodes();
    else if(c==2)
        ShowNodes();
}while(c!=3);
}
