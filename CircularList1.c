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
            printf("\n2.Show Student");
            printf("\n3.Exit");
            printf("\nEnter Your Choice");
            scanf("%d",&c);
            if(c==1)
                AddStudent();
                else if(c==2)
                        ShowStudent();
    }while(c!=3);
}
