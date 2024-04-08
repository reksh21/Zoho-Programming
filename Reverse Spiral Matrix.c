// Reverse Spiral Matrix
#include <stdio.h>

int main() 
{
    int n;
    printf("Enter the size of an array: ");
    scanf("%d",&n);
    int arr[10][10],square,i,j,k;
    square = n*n;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            arr[i][j] = 0;
        }
    }
    i=0;
    j=n-1;
    for(k=0;k<n/2;k++)
    {
        //Loop for right to left
        for(i=i,j=n-k-1;j>=k;j--)
        {
            arr[i][j]= square--;
        }
        //Loop for top to bottom
        for(i=i+1,j=j+1;i<=(n-k-1);i++)
        {
            arr[i][j]= square--;
        }
        //Loop for left to right
        for(i=i-1,j=j+1;j<=n-k-1;j++)
        {
            arr[i][j]= square--;
        }
        //Loop for bottom to top
        for(i=i-1,j=j-1;i>=k+1;i--)
        {
            arr[i][j]= square--;
        }
        i++;
    }
    arr[n/2][n/2]=1;
    //print the matrix
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}

Scn 1: 
Enter the size of an array: 5
21 22 23 24 25 
20 7 8 9 10 
19 6 1 2 11 
18 5 4 3 12 
17 16 15 14 13 