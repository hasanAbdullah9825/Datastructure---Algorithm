#include<stdio.h>
#include<string.h>

int main()
{
    char arr[5][8];
    for(int i=0; i<5; i++)
    {
        scanf("%s",&arr[i]);

    }
    char temp[8];
    for(int i=0; i<5-1; i++)
    {
        for(int j=0; j<5-i-1; j++)
        {
            if(strcmp(arr[j],arr[j+1])>0)
            {
                strcpy(temp,arr[j]);
                strcpy(arr[j],arr[j+1]);
                strcpy(arr[j+1],temp);

            }
        }
    }

    printf("______________\n");

    for(int i=0;i<5;i++){
        printf("%s\n",arr[i]);
    }

}

