//Minimum path to travel from Node 1 to Node 2
#include <stdio.h>

int main() 
{
    int Start_node, End_node,Path=0;
    printf("Enter Start node: ");
    scanf("%d",&Start_node);
    printf("Enter End node: ");
    scanf("%d",&End_node);
    printf("Minimum path to travel from %d to %d is ",Start_node,End_node);
    while(Start_node!=End_node)
    {
        if(Start_node>End_node)
        {
            Start_node = Start_node/2;
            Path++;
        }
        else if(Start_node<End_node)
        {
            End_node = End_node/2;
            Path++;
        }
    }
    printf("%d",Path);
    return 0;
}

Scn 1:
Enter Start node: 15
Enter End node: 4
Minimum path to travel from 15 to 4 is 5

Scn 2:
Enter Start node: 2
Enter End node: 3
Minimum path to travel from 2 to 3 is 2

Scn 3:
Enter Start node: 4
Enter End node: 15
Minimum path to travel from 4 to 15 is 5