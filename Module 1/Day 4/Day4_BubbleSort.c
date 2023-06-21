#include <stdio.h>

void bubbleSort(int arr[] , int size )
{
    int flag;
    for(int i=0; i<size-1 ; i++)
    {
        flag=0;     
        for(int j=0 ; j<size-i-1 ; j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                flag=1;
            }
        }
        if(flag == 0)
            break;
    }
    
}

int main()
{
    int arr[]={8,5,7,3,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    
    printf("Array elements before sorting \n");
    for(int i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    bubbleSort(arr,n);
    printf("\nArray elements after sorting\n");
    for(int i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    
    return 0;   
}
