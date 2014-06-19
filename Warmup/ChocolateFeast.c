#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int t, n, c, m;
    scanf("%d", &t);
    while ( t-- )
    {
        scanf("%d%d%d",&n,&c,&m);
        int answer = 0; 
        /** Write the code to compute the answer here. **/
        answer=n/c;
        int env=0, choc=answer;
        while(choc+env>=m)
        {
            int res=(choc+env)/m;
            env=(choc+env)%m;
            choc=res;
            answer+=res;
            
        }
        printf("%d\n",answer);
    }
    return 0;
}
