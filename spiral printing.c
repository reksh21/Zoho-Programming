//Spiral Printing
#include <stdio.h>

int main() 
{
    int N;
    printf("Enter number to start the spiral matrix: ");
    scanf("%d",&N);
    spiralPrinting(N);
    return 0;
}
int spiralPrinting(int n)
{
    int d,k,i=0,j,times;
    d=(n*2)-1;
    int a[d][d];
    times=(n-1);
    //loop for each spiral
    for(k=0;k<times;k++,n--)
    {
        //traverse from left to right
        for(i=i,j=i;j<=(d-k-1);j++)
        {
            a[i][j]=n;
        }
        //traverse from top to bottom
        for(i=i+1,j=j-1;i<=j;i++)
        {
            a[i][j]=n;
        }
        //traverse from right to left
        for(i=i-1,j=j-1;j>=k;j--)
        {
            a[i][j]=n;
        }
        //traverse from bottom to top
        for(i=i-1,j=j+1;i>=(k+1);i--)
        {
            a[i][j]=n;
        }
        i++;
    }
    //prints the center element '1'
    a[i][j+1]= n;
    
    //prints each element of an array
    for(i=0;i<d;i++)
    {
        for(j=0;j<d;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}

Scn 1:
Enter number to start the spiral matrix: 4
4 4 4 4 4 4 4 
4 3 3 3 3 3 4 
4 3 2 2 2 3 4 
4 3 2 1 2 3 4 
4 3 2 2 2 3 4 
4 3 3 3 3 3 4 
4 4 4 4 4 4 4

Scn 2:
Enter number to start the spiral matrix: 3
3 3 3 3 3 
3 2 2 2 3 
3 2 1 2 3 
3 2 2 2 3 
3 3 3 3 3 