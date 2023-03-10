#include<stdio.h>
void main()
{
    int i,n,key,j;
    printf("\nenter the size of array ");
    scanf("%d",&n);int arr[n];
    printf("enter the array ....");
    for(i=0;i<n;i++)
    {
        printf("\n enter the %d element =",i+1);
        scanf("%d",&arr[i]);
        
    }
    printf("\n sorted array is ....");
    for (i=0;i<n;i++)
    printf("%d ",arr[i]);
    //code for insertion sort 
    for (i=1;i<n;i++)
    {
        key=arr[i];
        j=i-1;
        while(key<arr[j]&&j>=0)
        {
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=key;
    }
    printf("\nAscending order "); 
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}


enter the size of array 5
enter the array ....
 enter the 1 element =1
 enter the 2 element =5
 enter the 3 element =8
 enter the 4 element =7
 enter the 5 element =4
 sorted array is ....1 5 8 7 4 
Ascending order 1 4 5 7 8 
