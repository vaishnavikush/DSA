#include<stdio.h>
struct Student{
int id;
char name[10];
struct Student *next;
}*start;
void  Addnodes(){
struct Student *ptr,*p,*last;
ptr=(struct Student *)malloc(sizeof(struct Student));
if(ptr==NULL){
    printf("\nMemory not allocate");
}
else{
    printf("\nEnter Student id");
    scanf("\n%d",&ptr->id);
    printf("\nEnter Student Name");
    scanf("\n%s",&ptr->name);
    if(start==NULL){
        start=ptr;
        ptr->next=start;
    }
    else{
       p=start;
       while(p->next!=start){
        p=p->next;
       }
       p->next=ptr;
       ptr->next=start;
    }
}
}
void Shownodes(){
struct Student *p;
p=start;
do{
        printf("\nStudent Is %d",p->id);
        printf("\nStudent Name %s",p->name);
        printf("\n-------------");
    p=p->next;
}while(p!=start);
}
void main(){
start=NULL;
int c;
do{
    printf("\n1.Add Nodes");
    printf("\n2.Show Nodes");
    printf("\n3.Exit");
    printf("\nEnter Your Choice");
    scanf("\n%d",&c);
    if(c==1)
        Addnodes();
    else if(c==2)
        Shownodes();
}while(c!=3);
}
