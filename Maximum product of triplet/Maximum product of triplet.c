/* Maximum product of triplet (Subsequent of size 3) in array. Given an integer array, find a maximum product of a triplet in array. A triplet is three numbers. */
#include <stdio.h>
#include <limits.h>
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
    triplets(arr,n);
}

//Function to print products of Maximum 3 Numbers
int triplets(int a[],int n)
{
    int product=1,i,j,k,maxprod =INT_MIN;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            for(k=j+1;k<n;k++)
            {
                product = a[i]*a[j]*a[k];
                if(product>maxprod)
                {
                    maxprod = product;
                }
            }
        }
    }
    printf("\nMaximum product of Triplet:%d", maxprod);
}

Scn 1:
Enter the No of Integer:5
10
3
5
6
20
Given array: 10 3 5 6 20 

Maximum product of Triplet:1200

Scn 2:
Enter the No of Integer:5
-10
-3
-5
-6
-20
Given array: -10 -3 -5 -6 -20 

Maximum product of Triplet:-90

Scn 3:
Enter the No of Integer:6
1
-4
3
-6
7
0
Given array: 1 -4 3 -6 7 0 

Maximum product of Triplet:168
