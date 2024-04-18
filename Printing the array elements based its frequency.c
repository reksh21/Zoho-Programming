//Printing the array elements based on its frequency
#include <stdio.h>
#include <string.h>
int main () 
{
    int n,k,a[100],i,j,temp,arr[100][100],count=1;
    printf("Enter size of an input array: ");
    scanf("%d",&n);
    for(k=0;k<n;k++)
    {
        scanf("%d",&a[k]);
    }
    sort_asc(a,n);  //Sorting array in Ascending order
    return 0;
}

//Sorting array in Ascending order
int sort_asc(int a[], int n)
{
    int i,j,temp;
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
        //printf("%d ",a[i]);
    }
    //printf("\n");
    extract_freq(a,n);
}
//Extracting the number and its frequency
int extract_freq(int a[],int n)
{
    int i=0,k,arr[100][100],count=1;
    for(k=0;k<n;k++)
    {
        if(a[k]==a[k+1])
        {
            count++;
        }
        else
        {
            arr[i][0]=a[k];
            //printf("%d ",arr[i][0]);
            arr[i][1]=count;
            //printf("%d \n",arr[i][1]);
            count=1;
            i++;
        }
    }
    //printf("i: %d\n",i);
    sort_freq(arr,i);
}
//Sorting the 2d array in descending order based on frequency
int sort_freq(int arr[][100],int i)
{
    int k,j,temp;
    for(k=0;k<i;k++)
    {
        for(j=k+1;j<i;j++)
        {
            if(arr[k][1]<arr[j][1])
            {
                temp = arr[k][1];
                arr[k][1]=arr[j][1];
                arr[j][1]=temp;
                
                temp = arr[k][0];
                arr[k][0]=arr[j][0];
                arr[j][0]=temp;
            }
        }
        //printf("%d %d\n",arr[k][0],arr[k][1]);
    }
    print_array(arr,i);
}
//printing the array elements based on its frequency
int print_array(int arr[][100],int i)
{
    int k,j;
    printf("Sorted array based on its frequency: ");
    for(k=0;k<i;k++)
    {
        for(j=0;j<arr[k][1];j++)
        {
            printf("%d ",arr[k][0]);
        }
    }
}

Scn 1: 
Enter size of an input array: 8
2
5
2
8
5
6
8
8
Sorted array based on its frequency: 8 8 8 5 5 2 2 6