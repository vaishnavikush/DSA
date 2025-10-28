#include<stdio.h>
struct Tree{
int data;
struct Tree *left ,*right;
}*root;
struct Tree *Search(struct Tree *r,int d){
struct Tree *parent;
while(r!=NULL){
    if(r->data==d){
        return NULL;
    }
    else if(r->data>d){
        parent=r;
        r=r->left;
    }
    else{
        parent=r;
        r=r->right;
    }
}
 return parent;
};
void Addnodes(){
struct Tree *t,*parent;
t=(struct Tree *)malloc(sizeof(struct Tree));
    printf("\nEnter Data");
    scanf("%d",&t->data);
if(t==NULL){
    printf("\nDoes not allocate Memory");
}
else{
    if(root==NULL){
        root=t;
        t->left=NULL;
        t->right=NULL;
    }
    else{
    parent=Search(root,t->data);
    if(parent==NULL){
        printf("\nNode is already exist");
    }
    else{
        if(parent->data>t->data){
            parent->left=t;
        }
        else{
            parent->right=t;
        }
        t->left=NULL;
        t->right=NULL;
    }
}
}
}
void main(){
root==NULL;
int c;
do{
    printf("\n1.Add nodes");
    printf("\n1.Exit");
    printf("\nEnter Your Choice");
    scanf("%d",&c);
    if(c==1)
        Addnodes();
}while(c!=2);
}
