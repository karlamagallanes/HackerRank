#include <stdio.h>

int main()
{
    int T;
    scanf("%d",&T);
    for(int i=0;i<T;i++)
    {
        float a;
        scanf("%f",&a);
        printf("%.0f\n",((double)(a-(int)a/2)*(double)((int)a/2)));
    }
}
