//Replace the position element by color
#include <stdio.h>
int main() 
{
    int a[10][10],r,c,i,j,p1,p2,color,position;
    printf("Enter dimensions of an input array: ");
    scanf("%d %d",&r,&c);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the position within %d X %d dimension: ",r,c);
    scanf("%d %d",&p1,&p2);
    printf("Enter the color code: ");
    scanf("%d",&color);
    position = a[p1][p2];
    printf("Position: %d\n",position);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(a[i][j]==position)
            {
                
                if(i==(p1-1) && j==(p2-1)) {
                    printf("%d ",a[i][j]);
                    continue;
                }
                
                if(i==(p1-1) && j==(p2+1)) {
                    printf("%d ",a[i][j]);
                    continue;
                }
                
                if(i==(p1+1) && j==(p2-1)) {
                    printf("%d ",a[i][j]);
                    continue;
                }
                
                if (i==(p1+1) && j==(p2+1)) {
                    printf("%d ",a[i][j]);
                    continue;
                }
                
                a[i][j]=color;
                printf("%d ",a[i][j]);
            }
            else
            {
                printf("%d ",a[i][j]);
            }
        }
        printf("\n");
    }
    return 0;
}


Scn 1:
Enter dimensions of an input array: 4 4
1 2 3 4
1 2 3 4
1 2 3 4
1 3 2 4
Enter the position within 4 X 4 dimension: 2 2
Enter the color code: 5
Position: 3
1 2 5 4 
1 2 5 4 
1 2 5 4 
1 3 2 4