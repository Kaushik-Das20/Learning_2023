#include<stdio.h>


int main()
{             
    int arr[5]={10,20,30,40,50};
    int sum=0;
    for(int i=0; i<5 ;i++)
    {
        if(i%2 == 0)
        {
            sum+=arr[i];
        }
    }
    printf("Sum %d\n",sum);
    return 0;
}