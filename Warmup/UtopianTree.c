#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int ValueOfCase(int N)
{
    int L=1;
    for(int i=0;i<N;i++)
    {
        if(i%2) 
            L=L+1;
        else
            L=L*2;
    }
    return L;
}
int main()
{
    int T, N[10];
    scanf("%d", &T);
    for(int i=0;i<T;i++)
    {
        scanf("%d",&N[i]);
    } 
    for(int i=0;i<T;i++)
    {
        printf("%d \n",ValueOfCase(N[i]));    
    }
    return 0;        
}
