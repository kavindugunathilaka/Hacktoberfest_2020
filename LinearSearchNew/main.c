#include <stdio.h>
#include <stdlib.h>
//#define size=100
int main()
{
    int i,n,key,arr[100];

    printf("Enter the size of array: ");
    scanf("%d",&n);

    printf("Enter elements to the array: ");
    for(i=0;i<=n-1;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d",&key);
    linear_search(arr,n,key);



    return 0;
}

void linear_search(int array[],int size,int element)
{
    int j,flag;
    for(j=0;j<=size-1;j++)
    {
        if(array[j]==element)
        {
            flag=1;
            break; //come out of if
        }
    }

    if(flag==1)
        printf("Element is found on %d position",j+1);
    else
        printf("Element not found");

}
