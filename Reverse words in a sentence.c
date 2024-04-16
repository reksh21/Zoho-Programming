// Reverse words in a sentence
#include <stdio.h>
# include<string.h>

int main() 
{
    char str[100],a[100];
    int i,j,len,start,end;
    printf("Enter the String: ");
    scanf("%[^\n]%*c", str);
    printf("mystring: %s\n", str);
    len = strlen(str);
    end = len-1;
    j=0;
    for(i=len-1;i>=0;i--)
    {
        if(str[i]==' ')
        {
            start =i+1;
            while(start<=end)
            {
                a[j++]=str[start++];
            }
            end = i-1;
            a[j++]=' ';
        }
        else if(i==0)
        {
            a[j]=str[i];
        }
    }
    printf("Reversed String: %s\n", a);
    return 0;
}

Scn 1:
Enter the String: i like this program very much
mystring: i like this program very much
Reversed String: much very program this like i

Scn 2:
Enter the String: one two three
mystring: one two three
Reversed String: three two one

Scn 3:
Enter the String: I love India
mystring: I love India
Reversed String: India love I