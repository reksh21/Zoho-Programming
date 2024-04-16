// Merge two sorted array without duplicates
#include <stdio.h>

int main() 
{
    int arr1[50],arr2[50],len1,len2,i;
    printf("Length of Array 1: ");
    scanf("%d",&len1);
    printf("Enter elements of Array 1: ");
    for(i=0;i<len1;i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("Length of Array 2: ");
    scanf("%d",&len2);
    printf("Enter elements of Array 2: ");
    for(i=0;i<len2;i++)
    {
        scanf("%d",&arr2[i]);
    }
    mergedarray(arr1,len1,arr2,len2);
    return 0;
}

int mergedarray(int arr1[],int len1,int arr2[],int len2 )
{
    int i = 0,j = 0,k = 0,arr3[50];
    while (i < len1 && j < len2) 
    {
        if (arr1[i] < arr2[j]) 
        {
            arr3[k++] = arr1[i++];
        }
        else if(arr1[i] == arr2[j])
        {
            arr3[k++] = arr1[i++];
            j++;
        }
        else 
        {
            arr3[k++] = arr2[j++];
        }
    }

    // Copy remaining elements of arr1, if there are any
    while (i < len1) 
    {
        arr3[k++] = arr1[i++];
    }

    // Copy remaining elements of arr2, if there are any
    while (j < len2) 
    {
        arr3[k++] = arr2[j++];
    }
    
    printf("Merged Array: ");
    for(i=0;i<k;i++)
    {
        printf("%d ",arr3[i]);
    }
}

Scn 1:
Length of Array 1: 8
Enter elements of Array 1: 2
4
5
6
7
9
10
13
Length of Array 2: 10
Enter elements of Array 2: 2
3
4
5
6
7
8
9
11
15
Merged Array: 2 3 4 5 6 7 8 9 10 11 13 15