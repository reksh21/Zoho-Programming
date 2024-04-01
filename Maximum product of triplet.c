/* Maximum product of triplet (Subsequent of size 3) in array. Given an integer array, find a maximum product of a triplet in array. A triplet is three numbers. */
#include <stdio.h>
int main()
{
    int n,arr[100],i;
    printf("Enter the No of Integer:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Given array: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    sortarray(arr,n);
}
//Function to Sort array in Descending Order
int sortarray(int a1[],int n1)
{
    int i,j,temp;
    printf("Sorted Array in Descending: ");
    for(i=0;i<n1;i++)
    {
        for(j=i+1;j<n1;j++)
        {
            if(a1[i]<a1[j])
            {
                temp=a1[j];
                a1[j]=a1[i];
                a1[i]=temp;
            }
        }
        printf("%d ",a1[i]);
    }
    triplets(a1);
    return 0;
}
//Function to print products of Maximum 3 Numbers
int triplets(int a2[])
{
    int product=1,i;
    for(i=0;i<3;i++)
    {
        product = a2[i] * product;
    }
    printf("\nMaximum product of Triplet:%d", product);
}

Scn 1:
Enter the No of Integer:5
10
3
5
6
20
Given array: 10 3 5 6 20 
Sorted Array in Descending: 20 10 6 5 3 
Maximum product of Triplet:1200

Scn 2:
Enter the No of Integer:5
-10
-3
-5
-6
-20
Given array: -10 -3 -5 -6 -20 
Sorted Array in Descending: -3 -5 -6 -10 -20 
Maximum product of Triplet:-90

Scn 3:
Enter the No of Integer:5
-10
-3
-5
-6
-20
Given array: -10 -3 -5 -6 -20 
Sorted Array in Descending: -3 -5 -6 -10 -20 
Maximum product of Triplet:-90