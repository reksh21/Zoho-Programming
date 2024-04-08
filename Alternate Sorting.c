//Alternate Sorting
#include <stdio.h>

int main() 
{
    int a[100],b[100],i,j,k,n,temp;
    printf("Enter the size of an array:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    //Sorting Array
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp = a[j];
                a[j] = a[i];
                a[i] = temp;
            }
        }
    }
    //Alternate Sorting Array
    j=0,k=n-1;
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
            b[i]=a[k];
            k--;
        }
        else {
            b[i]=a[j];
            j++;
        }
    }
    printf("Sorted Array:");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    printf("Alternate Sorted Array:");
    for(i=0;i<n;i++)
    {
        printf("%d ",b[i]);
    }
    return 0;
}

Scn 1:
Enter the size of an array:7
4
2
6
7
5
1
3
Sorted Array:1 2 3 4 5 6 7 
Alternate Sorted Array:7 1 6 2 5 3 4