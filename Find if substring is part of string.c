//Find if substring is part of string
#include <stdio.h>
#include <string.h>
#include <ctype.h>
    
int main()
{
    char string[100], substring[100];
    printf("Enter the String: ");
    scanf("%s",string);
    printf("Enter the Substring: ");
    scanf("%s",substring);
    int len1=strlen(string), len2=strlen(substring);
    printCharacter(string,len1,substring,len2);
}

int printCharacter(char string[], int len1, char substring[], int len2)
{
    int i=0,j=0,start_index;
    while(i<len1)
    {
      if(string[i]==substring[j])
      {
        start_index=i;
        while(j<len2,string[i]==substring[j])
        {
          i++;
          j++;
        }
        if(j==len2)
        {
          break;
        }
        else
        {
          start_index=-1;
        }
      }
      else
      {
        start_index=-1;
        i++;
        j=0;
      }
    }
    printf("Starting Index: %d",start_index);
    return 0;
}

Scn 1:
Enter the String: testing12
Enter the Substring: 1234
Starting Index: -1

Scn 2:
Enter the String: test123string
Enter the Substring: 123
Starting Index: 4

Scn 3:
Enter the String: abc
Enter the Substring: abcd
Starting Index: -1

Scn 4:
Enter the String: 123
Enter the Substring: abcd
Starting Index: -1
