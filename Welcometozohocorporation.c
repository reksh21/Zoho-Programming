#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int flag1,flag2;

int main() 
{
    char String[100],Substring[100];
    int StrLen,Dim,flag;
    scanf("%s\n%s", String,Substring);
    StrLen = strlen(String);
    printf("String: %s\nSubstring: %s\nStringLength: %d\n",String,Substring,StrLen);
    Dim = ceil(sqrt(StrLen));
    printf("Matrix Dimension: %d\n",Dim);
    printmatrix(String,Substring, StrLen, Dim);
    if(flag1!=1 && flag2!=1)
        printf("Substring not Found");
    return 0;
}

//Function to print string in Matrix
void printmatrix(char String1[],char Substring1[], int StrLen1, int Dim1)
{
    int i,j,k=0;
    char StringMatrix[Dim1][Dim1];
    for (i=0;i<Dim1;i++)
    {
        for(j=0;j<Dim1;j++)
        {
            StringMatrix[i][j] = String1[k];
            k++;
            printf("%c\t",StringMatrix[i][j]);
        }
        printf("\n");
    }
    horizontalparsing(Dim1,StringMatrix,Substring1,StrLen1,Dim1);
    verticalparsing(Dim1,StringMatrix,Substring1,StrLen1,Dim1);
    return 0;
}

//Function for Horizontal Parsing
int horizontalparsing(int Dim2, char StringMatrix1[Dim2][Dim2],char Substring2[], int StrLen2 )
{
    int i,j,k;
    for (i=0;i<Dim2;i++)
    {
        for(j=0;j<Dim2;j++)
        {
            if(StringMatrix1[i][j]==Substring2[0])
            {
                for(k=0;k<strlen(Substring2);k++)
                {
                    if(StringMatrix1[i][j+k]!=Substring2[k])
                    break;
                }
                if(k==strlen(Substring2))
                    printf("Starting Index: <%d,%d>\nEnding Index: <%d,%d>",i,j,i,j+k-1);
                    flag1=1;
            }
        }
    }
    return flag1;
}

//Function for Vertical Parsing
int verticalparsing(int Dim2, char StringMatrix1[Dim2][Dim2],char Substring2[], int StrLen2 )
{
    int i,j,k;
    for (j=0;j<Dim2;j++)
    {
        for(i=0;i<Dim2;i++)
        {
            if(StringMatrix1[i][j]==Substring2[0])
            {
                for(k=0;k<strlen(Substring2);k++)
                {
                    if(StringMatrix1[i+k][j]!=Substring2[k]) 
                        break;   
                }
                if(k==strlen(Substring2))
                    printf("Starting Index: <%d,%d>\nEnding Index: <%d,%d>",i,j,i+k-1,j);
                    flag2=1;
            }
        }
    }
    return flag2;
}
  
Scn 1:
welcometozohocorporation
hello
String: welcometozohocorporation
Substring: hello
StringLength: 24
Matrix Dimension: 5
w	e	l	c	o	
m	e	t	o	z	
o	h	o	c	o	
r	p	o	r	a	
t	i	o	n	
Substring not Found

Scn 2:
welcometozohocorporation
welc
String: welcometozohocorporation
Substring: welc
StringLength: 24
Matrix Dimension: 5
w	e	l	c	o	
m	e	t	o	z	
o	h	o	c	o	
r	p	o	r	a	
t	i	o	n	
Starting Index: <0,0>
Ending Index: <0,3>

Scn 3:
welcometozohocorporation
too
String: welcometozohocorporation
Substring: too
StringLength: 24
Matrix Dimension: 5
w	e	l	c	o	
m	e	t	o	z	
o	h	o	c	o	
r	p	o	r	a	
t	i	o	n	
Starting Index: <1,2>
Ending Index: <3,2>

