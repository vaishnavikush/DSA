#include<stdio.h>
int LinerSearch(int arr[],int val,int arrsize){
for(int i=1;i<arrsize;i++){
    if(arr[i]==val){
        return i;
    }
}
return -1;
}
void main(){
int arr[]={2,3,65,8,98,2};
int size=sizeof (arr)/sizeof (int);
printf("Size of array is: %d",size);
int  value;
printf("\nEnter Value To Search");
scanf("%d",&value);
int search=LinerSearch(arr,value,size);
if(search==-1){
    printf("\nValue is not present in array");
}
else
printf("\nValue is present at index %d",search);
printf("\nAnd the Value is %d",value);
}

