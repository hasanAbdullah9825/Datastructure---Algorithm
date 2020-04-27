#include<stdio.h>
void insertion_sort(int A[],int n)
{

    int i,j,item;

    for(int i=1; i<n; i++)
    {

        item=A[i];
        j=i-1;


        while(j>=0 && A[j]>item)
        {
            A[j+1]=A[j];
            j=j-1;

        }
        A[j+1]=item;
    }

}







int main()
{
    int A[100];
    int n;
    scanf("%d",&n);

    for(int i=0; i<n; i++)
    {
        scanf("%d",&A[i]);
    }

    insertion_sort(A,n);

    for(int i=0; i<n; i++)
    {
        printf("%d",A[i]);
    }

}
