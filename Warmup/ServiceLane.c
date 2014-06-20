#include <stdio.h>

int main()
{
    int N,T,i,j,a=0;
    scanf("%d %d",&N,&T);
    int Highway[N];
    int Res[T];    
    while (a < N && scanf("%d", &Highway[a]) == 1)
        a++;
    for (a=0;a<T;a++)
    {
        scanf("%d %d",&i,&j);
        int size=Highway[i];
        for(int x=i+1;x<=j;x++)
        {
            if(Highway[x]<size)
                size=Highway[x];            
        }
        Res[a]=size;
    }
    for(a=0;a<T;a++)
        printf("%d\n",Res[a]);
}
