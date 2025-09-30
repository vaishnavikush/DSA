#include<stdio.h>
struct Student{
int rollno;
char name[10];
struct Student *next;
}*start;
struct Student *CreateNode(){
struct Student *ptr,*p;
ptr=(struct Student *)malloc(sizeof(struct Student));
if(ptr==NULL){
    printf("Does Not Allocate Memory");
}
else{
        printf("\nEnter student Rollno");
        scanf("\n%d",&ptr->rollno);
        printf("\nEnter student Name");
        scanf("\n%s",&ptr->name);
}
return ptr;
};
void AddEnd(){
 struct Student *p,*ptr=CreateNode();
    if(start==NULL){
        start=ptr;
        ptr->next=start;
    }
    else{
        p=start;
        while(p->next!=start){
            p=p->next;
        }
        ptr->next=start;
            p->next=ptr;
    }
}

void  AddBeg(){
struct Student *p=start;
if(start==NULL){
       printf("\nAdd Some Nodes First");
   }
else{
        struct Student *ptr=CreateNode();
    if(p==start){
         while(p->next!=start){
            p=p->next;
         }
       ptr->next=start;
       start=ptr;
       p->next=start;
    }
}
}
void AddMiddle(){
    struct Student *p=start;
    int no;
if(start==NULL){
    printf("\nAdd Some Nodes First");
}
else{
    printf("\nEnter Student Roll no. After Which you Wanna Add Nodes");
    scanf("%d",&no);
    struct Student *ptr=CreateNode();
    while(p->rollno!=no){
        p=p->next;
    }
      ptr->next=p->next;
        p->next=ptr;
}

}
void ShowNode(){
struct Student *p;
p=start;
do{
        printf("\nStudent Rollno %d",p->rollno);
        printf("\nStudent Name %s",p->name);
        printf("\n-----------------");
    p=p->next;
}while(p!=start);
}
void main(){
start=NULL;
int c;
do{
    printf("\n1.Add Nodes At Begining");
     printf("\n2.Add Nodes At Middle");
     printf("\n3.Add Nodes At End");
     printf("\n4.Show Nodes");
      printf("\n5.Exit");
      printf("\nEnter Your Choice");
      scanf("\n%d",&c);
      if(c==1)
      AddBeg();
      else if(c==2)
        AddMiddle();
        else if(c==3)
            AddEnd();
        else if(c==4)
            ShowNode();
}while(c!=5);
}
