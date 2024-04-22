//Pattern Printing
#include <stdio.h>
int main() 
{
    int k=0,i,j,M,N;
    printf("Enter the value for M and N: ");
    scanf("%d %d",&M,&N);
    char arr[M][N],value;
    for(i=0;i<N;i++) 
    {
        for(j=0;j<M;j++)
        {
            arr[i][j] = '*'; // Initialize each element with a '*'
        }
    }
    i=0,j=0;
    for(k=0;k<M/2;k++)
    {
        if(k%2==0)
        {
            value = 'X';
        }
        else
        {
            value ='O';
        }
        for(i=i,j=j;j<(M-k);j++)
        {
            arr[i][j]=value;
            //printf("%c ",arr[i][j]);
            
        }
        //printf("\n");
        for(i=i+1,j=j-1;i<(N-k);i++)
        {
            arr[i][j]=value;
            //printf("%c ",arr[i][j]);
            
        }
        //printf("\n");
        for(i=i-1,j=j-1;j>=k;j--)
        {
            arr[i][j]=value;
            //printf("%c ",arr[i][j]);
            
        }
        //printf("\n");
        for(i=i-1,j=j+1;i>k;i--)
        {
            arr[i][j]=value;
            //printf("%c ",arr[i][j]);
            
        }
        //printf("\n");
        
        i=i+1;
        j=j+1;
    }
    //Logic for center element
    if(M==N && M%2!=0 && N%2!=0)
    {
        if(value=='O')
        {
            arr[M/2][N/2]='X';
        }
        else
        {
            arr[M/2][N/2]='O';
        }
    }
    //Display thr Array
    for(i=0;i<N;i++)
    {
      for(j=0;j<M;j++)
      {
        printf("%c ",arr[i][j]);
      }
      printf("\n");
    }
    return 0;
}

Scn 1:
Enter the value for M and N: 6 7
X X X X X X 
X O O O O X 
X O X X O X 
X O X X O X 
X O X X O X 
X O O O O X 
X X X X X X

Scn 2:
Enter the value for M and N: 3 3
X X X 
X O X 
X X X

Scn 3:
Enter the value for M and N: 4 5
X X X X 
X O O X 
X O O X 
X O O X 
X X X X 