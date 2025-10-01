#include<stdio.h>
struct Student{
int rollno;
char name[10];
struct Student *next,*prev;
}*start,*end;
void AddNodes(){
struct Student *ptr;
ptr=(struct Student *)malloc(sizeof(struct Student));
if(ptr==NULL){
    printf("Does Not Allocate Memory");
}
else{
    printf("\nEnter Student Rollno");
    scanf("%d",&ptr->rollno);
    printf("\nEnter Student Name");
    scanf("%s",&ptr->name);
    if(start==NULL){
        ptr->prev=NULL;
        ptr->next=NULL;
        start=ptr;
        end=ptr;
    }
    else{
        ptr->prev=end;
        ptr->prev->next=ptr;
        ptr->next=NULL;
        end=ptr;
    }
}
}
void  ShowNodes(){
struct Student *p;
p=start;
do{
        printf("\nStudent Rollno %d",p->rollno);
        printf("\nStudent Name %s",p->name);
        printf("\n--------------");
   p=p->next;
}while(p!=NULL);
}
void main(){
 end=start=NULL;
 int c;
 do{
    printf("\n1.Add Students");
    printf("\n2.Show Students");
    printf("\n3.Exit");
    printf("\nEnter Your Choice");
    scanf("%d",&c);
    if(c==1)
        AddNodes();
    else if(c==2)
        ShowNodes();
 }while(c!=3);
}
