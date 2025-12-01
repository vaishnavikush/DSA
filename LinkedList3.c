#include<stdio.h>
struct Employee{
int empno;
char name[10];
struct Employee *next;
}*start;
struct Employee *createnode(){
struct Employee *ptr,*p,*last;
ptr=(struct Employee *)malloc(sizeof(struct Employee));
if(ptr==NULL){
    printf("Does Not Allocate Memory");
}
else{
    printf("\nEnter Employee No.");
    scanf("%d",&ptr->empno);
    printf("\nEnter Employee Name");
    scanf("%s",&ptr->name);
}
  return ptr;
};
void  AddBeg(){
    struct Employee *ptr=createnode();
    if(ptr==NULL){
        printf("\nAdd Some Nodes First");
    }
    else{
        ptr->next=start;
        start=ptr;
    }
}

void  AddMid(){
struct Employee *ptr,*p;
int rno;
ptr=createnode();
p=start;
printf("\nEnter Rollno To Add");
scanf("\n%d",&rno);
while(p!=NULL){
        if(p->empno==rno){
            ptr->next=p->next;
            p->next=ptr;
        }
    p=p->next;
}

}
void AddEnd(){
    struct Employee *ptr,*last,*p;
    ptr=createnode();
if(start==NULL){
        start=ptr;
        ptr->next=NULL;
    }
    else{
            for(p=start;(p);p=p->next){
                last=p;
            }
            last->next=ptr;
            ptr->next=NULL;
    }
}
void ShowEmployees(){
    struct Employee *p;
    p=start;
    while(p!=NULL){
            printf("\nEmployee No. %d",p->empno);
            printf("\nEmployee Name. %s",p->name);
            printf("\n-----------");
        p=p->next;
    }
}

void main(){
start=NULL;
int c;
do{
    printf("\n1.Add Employees At Begining");
    printf("\n2.Add Employees At Middle");
    printf("\n3.Add Employees At End");
    printf("\n4.Show Employees");
    printf("\n5.Exit");
    printf("\nEnter Your Choice");
    scanf("\n%d",&c);
    if(c==1)
        AddBeg();
    else if(c==2)
        AddMid();
        else if(c==3)
            AddEnd();
        else if(c==4)
            ShowEmployees();
}while(c!=5);

}

