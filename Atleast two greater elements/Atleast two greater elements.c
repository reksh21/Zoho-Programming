//Find No of elements in an array which have atleast two greater elements
#include <stdio.h>

int main() 
{
    int n,arr[100],i;
    printf("Enter the Number of Integer:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    atleasttwo(arr,n);
    return 0;
}
//Function to Eliminate duplicate elements, sort in an array
int atleasttwo(int a[],int n)
{
    int i,j,k,temp;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                for(k=j;k<n;k++)
                {
                    a[k]=a[k+1];
                }
                j--;
                n--;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("No of Elements:%d\n",n-2);
    for(i=0;i<n-2;i++)
    {
        printf("%d,",a[i]);
    }
    printf(" element have atleast two element greater than them");
}

Scn 1:
Enter the Number of Integer:5
1
5
6
3
6
No of Elements:2
1,3, element have atleast two element greater than them
