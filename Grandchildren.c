#include <stdio.h>
#include <string.h>

int main() {
  char arr[10][2][10];
  int n,i,j;
  printf("Enter No of Relationship: ");
  scanf("%d",&n);
  for (i = 0; i < n; i++) 
  {
      for (j = 0; j < 2; j++) 
      {
          printf("%d %d ",i,j);
          scanf("%s", arr[i][j]);
      }
  }
  printrelation(arr,n);        // Print the Relationship
  find_grandchildren(arr,n);   //Find and Print No of Grand Children
  return 0;
}
// Print the Relationship
int printrelation(char arr1[10][2][10],int N)
{
    int i,j;
    printf("Given Input is:\n");
    for (i = 0; i < N; i++) 
    {
        for (j = 0; j < 2; j++)
        {
            printf("<%s> ", arr1[i][j]);
        }
        printf("\n");
    }
    return 0;
}
//Find and Print No of Grand Children
int find_grandchildren(char arr2[10][2][10],int N1)
{
    char Person[10],father[10];
    int i,j,Grandchild=0;
    printf("Enter a person to whom u want to find his no of grand children:");
    scanf("%s",Person);
    for(i=0;i<N1;i++)
    {
        if(strcmp(arr2[i][1],Person) == 0)
        {
            strcpy(father,arr2[i][0]);
            for(j=0;j<N1;j++)
            {
                if(strcmp(arr2[j][1],father)==0)
                {
                    Grandchild++;
                }
            }
        }
    }
    printf("No of Grandchildren for %s:%d",Person,Grandchild);
    return 0;
}

Scn 1:
Enter No of Relationship: 4
0 0 luke
0 1 shaw
1 0 wayne
1 1 rooney
2 0 rooney
2 1 ronaldo
3 0 shaw
3 1 rooney
Given Input is:
<luke> <shaw> 
<wayne> <rooney> 
<rooney> <ronaldo> 
<shaw> <rooney> 
Enter a person to whom u want to find his no of grand children:ronaldo
No of Grandchildren for ronaldo:2

Scn 2:
Enter No of Relationship: 6
0 0 luke
0 1 shaw
1 0 wayne
1 1 rooney
2 0 rooney
2 1 ronaldo
3 0 shaw
3 1 rooney
4 0 michel
4 1 ronaldo
5 0 gill
5 1 michel
Given Input is:
<luke> <shaw> 
<wayne> <rooney> 
<rooney> <ronaldo> 
<shaw> <rooney> 
<michel> <ronaldo> 
<gill> <michel> 
Enter a person to whom u want to find his no of grand children:ronaldo
No of Grandchildren for ronaldo:3