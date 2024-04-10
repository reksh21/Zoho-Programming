//Remove unbalanced parenthesis in a given expression
#include <stdio.h>
#include <string.h>

int main()
{
    char s[100];
    printf("Enter the String: ");
    scanf("%s",s);
    int len = strlen(s),bracket = 0,i,j;
    char c = '*';
    //Forward traversal
    for(i = 0; i < len; ++i)
    {
        if(s[i] == '(')
        {
            bracket++;
        }
        else if(s[i] == ')')
        {
            if(bracket == 0)
            {
                s[i] = '*';
            }
            else
            {
                bracket--;
            }
        }
    }

    //Backward traversal
    bracket = 0;
    for(i = len - 1; i >= 0; --i)
    {
        if(s[i] == ')')
        {
            bracket++;
        }
        else if(s[i] == '(')
        {
            if(bracket == 0)
            {
                s[i] = '*';
            }
            else
            {
                bracket--;
            }
        }
    }
    //Removes the character which has '*''
    j = 0;
    for (i = 0; s[i] != '\0'; ++i) 
    {
        if (s[i] != c) 
        {
            s[j++] = s[i];
        }
    }
    s[j] = '\0';
    printf("Balanced Parenthesis String: %s",s);
}

scn 1:
Enter the String: (z(abc)((de))(
Balanced Parenthesis String: z(abc)((de))

Scn 2:
Enter the String: (a(b(c)d)
Balanced Parenthesis String: a(b(c)d)

Scn 3:
Enter the String: ))((
Balanced Parenthesis String:

Scn 4:
Enter the String: a)b(c)d
Balanced Parenthesis String: ab(c)d