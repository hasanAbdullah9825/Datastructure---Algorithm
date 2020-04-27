#include<stdio.h>
void counting_sort(int A[],int mx,int n){
int count[mx+1];

for(int i=0;i<=mx;i++){

    count[i]=0;
}

for(int i=0;i<n;i++){
    int x=A[i];
    count[x]=count[x]+1;

}


for(int i=0;i<=mx;i++){
    for(int j=0;j<count[i];j++){
        printf("%d",i);
    }
}

}

int main(){
int A[]={3,4,1,6,2,4,9,7,8,4,2,1};

counting_sort(A,9,12);// maximum number is 9 and total number is 12


}
