//Check whether a given mathematical expression is valid
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char s[100];
    printf("Enter the String: ");
    scanf("%s",s);
    int len = strlen(s),balanced = 0,i,flag=0;
    //Forward traversal
    for(i = 0; i < len; ++i)
    {
        if(s[i] == '(')
        {
            balanced++;
        }
        else if(s[i] == ')')
        {
            if(balanced!=0)
                balanced--;
        }
    }
    //Validates the correctness of operators
    if(balanced==0)
    {
        for(i=0;i<len;i++)
        {
            if(s[i]=='+'||s[i]=='-'||s[i]=='*'||s[i]=='/')
            {
                if((isalpha(s[i-1]) && isalpha(s[i+1])) ||
                   (s[i-1]==')' && s[i+1]=='(') ||
                   (s[i-1]==')' && isalpha(s[i+1])) ||
                   (isalpha(s[i-1]) && s[i+1]=='('))
                   {
                       flag = 1;
                   }
                   else
                   {
                       flag=0;
                       break;
                   }
            }
        }
        if(flag==1)
        {
            printf("Given Expression is valid");
        }
        else
        {
            printf("Given Expression is invalid");
        }
    }
    else
    {
        printf("Given Expression is invalid");
    }
}

Scn 1:
Enter the String: (ab(+(c)
Given Expression is invalid

Scn 2:
Enter the String: (a*b)***d
Given Expression is invalid

Scn 3:
Enter the String: ((a+b-c*d))
Given Expression is valid

Scn 4:
Enter the String: ((a*b)*a)
Given Expression is valid

Scn 5:
Enter the String: (ab)(ab+)
Given Expression is invalid

Scn 6:
Enter the String: ((a+b)
Given Expression is invalid

Scn 7:
Enter the String: (a+b)(a*b)
Given Expression is valid