//Print the character based on following number
#include <stdio.h>
#include <string.h>
#include <ctype.h>
	
int main()
{
    char str[100];
    printf("Enter the String: ");
    scanf("%s",str);
    int n;
    n = strlen(str);
    printCharacter(str,n);
}

//Function to print the character
int printCharacter(char s[],int len)
{
    int i,j,count=0;
    char character;
    for(i=0;i<len;i++)
    {
        if(isalpha(s[i]))
        {
            character = s[i];
        }
        else if((isdigit(s[i]))&&(isdigit(s[i+1])))
        {
            count = ((s[i]-'0')*10)+(s[i+1]-'0');
            i++;
        }
        else if(isdigit(s[i]))
        {
            count = s[i]-'0';
        }
        for(j=1;j<=count;j++)
        {
            printf("%c",character);
        }
        count=0;
    }
}

Scn 1:
Enter the String: a1b10
abbbbbbbbbb

Scn 2:
Enter the String: b3c6d15
bbbccccccddddddddddddddd