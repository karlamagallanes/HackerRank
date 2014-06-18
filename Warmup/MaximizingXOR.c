#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>
/*
 * Complete the function below.
 */
int maxXor(int l, int r) {
    int res=0;
    for(int i=l;i<=r;i++)
    {
        for(int j=l;j<=r;j++)
        {
            if((i^j)>res)
                res=i^j;
        }
    }
    return res;
}
int main() {
    int res;
    int _l;
    scanf("%d", &_l);
    
    int _r;
    scanf("%d", &_r);
    
    res = maxXor(_l, _r);
    printf("%d", res);
    
    return 0;
}
