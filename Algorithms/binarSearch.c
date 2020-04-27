#include<stdio.h>
int binary_search(int A[],int n,int x){

int left,right,mid;
left=0;
right=n-1;

while(left<=right){
    mid=(left+right)/2;

    if(A[mid]==x){

        return mid;
    }
    if(A[mid]<x){
        left=mid+1;
    }
    else
    {
        right=mid-1;
    }

}

return -1;

}


int main(){

int A[100];
int n,x;
scanf("%d",&n);
//ofcourse you have to give sorted value;i have assumed it is sorted in ascending order
for(int i=0;i<n;i++){
    scanf("%d",&A[i]);
}

printf("please enter your seacrhed number: \n");

scanf("%d",&x);

int result=binary_search(A,n,x);

printf("hello %d",result);

if(result!=-1){

    printf("you can find your number at %d th place",result);
}

else{
    printf(" Sorry could not find");
}





}
