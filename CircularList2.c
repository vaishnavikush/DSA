#include<stdio.h>
struct Student{
int rollno;
char name[10];
struct Student *next;
}*start;
void AddStudent(){
struct Student *ptr,*last;
ptr=(struct Student *)malloc(sizeof(struct Student));
if(ptr==NULL){
    printf("\nDoes No Allocate Memory");
}
else{
    printf("\nEnter Student Rollno");
    scanf("%d",&ptr->rollno);
    printf("\nEnter Student Name");
    scanf("%s",&ptr->name);
    if(start==NULL){
        start=ptr;
        ptr->next=start;
    }
    else{
        last=start;
        while(last->next!=start){
            last=last->next;
        }
        ptr->next=start;
        last->next=ptr;
    }
}
}

void  DeleteStudent(){
    int no;
    printf("\nEnter Rollno To Delete");
    scanf("%d",&no);
    struct Student *p,*last,*t;
    //
    p=start;
    if(start==NULL){
        printf("Add Some Nodes First");
    }
    else{
do{
if(no==p->rollno){
    if(p==start){
          t=start;
          while(t->next!=start){
            t=t->next;
          }
          start=p->next;
          //p->next=NULL;
          t->next=start;
    }
    else if(p->next==start){
        t=start;
        while(t->next!=start){
            last=t;
            t=t->next;
        }
        last->next=start;
    }
    else{
            t=start;
        while(t->rollno!=no){
            last=t;
            t=t->next;
        }
        last->next=t->next;
    }
   free(p);
}
p=p->next;
}while(p!=start);
}
}
void  ShowStudent(){
struct Student *p;
p=start;
do{
        printf("\nStudent Rollno Is %d",p->rollno);
        printf("\nStudent Name Is %s",p->next);
        printf("\n--------------");
    p=p->next;
}while(p!=start);
}
void main(){
    start=NULL;
    int c;
    do{
            printf("\n1.Add Student");
            printf("\n2.Delete Student");
            printf("\n3.Show Student");
            printf("\n4.Exit");
            printf("\nEnter Your Choice");
            scanf("%d",&c);
            if(c==1)
                AddStudent();
            else if(c==2)
                    DeleteStudent();
                else if(c==3)
                        ShowStudent();
    }while(c!=4);
}

