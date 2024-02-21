#include <stdio.h>
#include <math.h>
int I[100],W[100];
int main() 
{
    int i, N, sum=0;
    //Get Size of an Array
    printf("Enter the size of the array: ");
    scanf("%d", &N);
    printf("Enter the numbers: ");
    for (i = 0; i < N; i++) {
        scanf("%d", &I[i]);
        W[i] = getWeight(I[i]);
        sum = sum + W[i];
    }
    printf("Sum of Weights are: %d\n",sum);
    sortByWeights(I,W,N);
    return 0;
}
int getWeight(int i) 
{
    if(ceil((double)sqrt(i)) == floor((double)sqrt(i)))
        return 5;
    // 4 if the number is multiple of 4 and Divisible by 6
    if(i%4==0 && i%6==0)
        return 4;
    // 2 if the number is Even
    if(i%2==0)
        return 3;
    // 0 if nothing
    return 0;
}
// Sorting the Array based on Weights
void sortByWeights(int Inputs[],int Weights[],int n)
{
    int t1,t2;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(Weights[i] > Weights[j])
            {
                t1 = Weights[i];
                Weights[i] = Weights[j];
                Weights[j] = t1;
                
                t2 = Inputs[i];
                Inputs[i] =Inputs[j];
                Inputs[j] = t2;
            }
            else if(Weights[i] == Weights[j] && Inputs[i] > Inputs[j])
            {
                t2 = Inputs[i];
                Inputs[i] =Inputs[j];
                Inputs[j] = t2;
            }
        }
        printf("<%d,%d>\n",Inputs[i],Weights[i]);
    }
}