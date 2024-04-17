//Arrange the numbers in descending orders depending on the no of factors available for each number
#include <stdio.h>
int main () 
{
    int a[100],i,j,n,number=1,fact=0,factor[100],temp1,temp2;
    printf("Enter no of Elements in an array: ");
    scanf("%d",&n);
    //Get array elements from user and calculating no of factors for each element
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        for(number=1;number<=a[i];number++)
        {
           if(a[i] % number== 0)
            fact++;
        }
        factor[i]=fact;
        fact=0;
    }
    // Sorting the original array in descending order based on no of factors
    printf("Sorted array based on factors: ");
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(factor[i]<factor[j])
            {
                temp1=factor[i];
                factor[i] = factor[j];
                factor[j] = temp1;
                temp2=a[i];
                a[i] = a[j];
                a[j] = temp2;
            }
        }
        printf("%d ",a[i]);
    }
    return 0;
}

Scn 1:
Enter no of Elements in an array: 5
12
15
36
10
25
Sorted array based on factors: 36 12 15 10 25 

Scn 2:
Enter no of Elements in an array: 3
6
8
9
Sorted array based on factors: 6 8 9 