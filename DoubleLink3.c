#include<stdio.h>
struct Student{
int rollno;
char name[10];
struct Student *next,*prev;
}*start,*end;
struct Student *CreateNode(){
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
}
return ptr;
};
void AddEnd(){
    struct Student *ptr=CreateNode();
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
void AddMiddle(){
    int no;
    printf("\nEnter Student Rollno After Witch You Wanna Add Nodes");
    scanf("\n%d",&no);
if(start==NULL){
    printf("\nAdd Some Nodes First");
}
else{
    struct Student *p,*ptr=CreateNode();
    for(p=start;(p);p=p->next){
        if(p->rollno==no){
            ptr->next=p->next;
            ptr->prev=p;
            ptr->next->prev=ptr;
            p->next=ptr;
        }
    }
}
}
void AddBeg(){
if(start==NULL){
    printf("\nAdd Some Nodes First");
}
else{
        struct Student *ptr=CreateNode();
    ptr->prev=NULL;
    ptr->next=start;
    start->prev=ptr;
    start=ptr;
}
}
void  DeleteNodes(){
struct Student *p;
int no;
printf("\nEnter Student Rollno To Delete");
scanf("%d",&no);
p=start;
while(p!=NULL){
        if(p->rollno==no){
            if(p==start){
               // p->next->prev=NULL;
                start=p->next;
                start->prev=NULL;
            }
            else if(p==end){
                p->prev->next=NULL;
                end=p;
            }
            else{
                p->prev->next=p->next;
                p->next->prev=p->prev;
            }
        }
    p=p->next;
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
    printf("\n1.Add Nodes At Beginning");
    printf("\n2.Add Nodes At Middel");
    printf("\n3.Add Nodes At End");
    printf("\n4.Delete Students");
    printf("\n5.Show Students");
    printf("\n6.Exit");
    printf("\nEnter Your Choice");
    scanf("%d",&c);
    if(c==1)
     AddBeg();
      else if(c==2)
       AddMiddle();
        else if(c==3)
         AddEnd();
          else if(c==4)
           DeleteNodes();
            else if(c==5)
             ShowNodes();
 }while(c!=6);
}

