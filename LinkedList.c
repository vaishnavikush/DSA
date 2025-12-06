#include<stdio.h>
struct Student{
int rollno;
char name[10];
struct Student *next;
}*start;
void AddStudent(){
struct Student *ptr,*p,*last;
ptr=(struct Student *)malloc(sizeof(struct Student));
if(ptr==NULL){
    printf("Does Not Allocate Memory");
}
else{
        printf("Student Rollno");
        scanf("%d",&ptr->rollno);
        printf("Student Name");
        scanf("%s",&ptr->name);
    if(start==NULL){
        start=ptr;
        ptr->next=NULL;
    }
    else{
        for(p=start;p!=NULL;p=p->next){
            last=p;
        }
        last->next=ptr;
        ptr->next=NULL;
    }
}
}

void ShowStudent(){
struct Student *p;
for(p=start;p!=NULL;p=p->next){
    printf("Student Rollno = %d\n",p->rollno);
    printf("Student Name = %s\n",p->name);
    printf("----------\n");
}
}
void main(){
start=NULL;
int c;
do{
    printf("\n1.Add Students");
    printf("\n2.Show Students");
    printf("\n3.Exit");
    printf("\nEnter Your Choice");
    scanf("%d",&c);
    if(c==1)
        AddStudent();
    else if(c==2)
        ShowStudent();
}while(c!=3);
}

