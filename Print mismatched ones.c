//Print mismatched ones
#include <stdio.h>
#include <string.h>
int main () 
{
    char s1[100],s2[200];
    printf("*Note: String 1 and String 2 should be in same length\nEnter String1: ");
    scanf("%s",s1);
    printf("Enter String2: ");
    scanf("%s",s2);
    mismatch(s1,s2);
    return 0;
}
int mismatch(char str1[],char str2[])
{
    int i;
    printf("Mismatched ones:\n");
    for(i=0;i<strlen(str1);i++)
    {
        if(str1[i]!=str2[i])
        {
            printf("%c %c",str1[i],str2[i]);
            printf("\n");
        }
    }
}

Scn 1:
*Note: String 1 and String 2 should be in same length
Enter String1: abcdefghi
Enter String2: abdeeggii
Mismatched ones:
c d
d e
f g
h i