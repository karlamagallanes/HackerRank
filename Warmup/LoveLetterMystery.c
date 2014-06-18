#include <stdio.h>
#include <string.h>

int main()
{
    int T;        
    scanf("%d",&T);
    int res[T];
    char words[T][10000];    
    for(int i=0;i<T; i++)
    {
        scanf("%s",words[i]);   
    } 
    
    for(int i=0;i<T; i++)
    {   
        int contador=0;        
        int len=0;
        while(words[i][len]!='\0')
            len++;   
       
        int middle=len/2;        
        //printf("%d",middle);
        len--;  
        for(int j=0;j<middle;j++)
        {
            int pivot=len-j;
            while (words[i][j]!=words[i][pivot])
            {   
                if(words[i][j]<words[i][pivot]){
                    if(words[i][pivot]!='a')
                        words[i][pivot]--;
                }                    
                else{
                     if(words[i][j]!='a')
                        words[i][j]--;
                    
                }                
                  contador++;                
            }              
        }
        res[i]=contador;
    }
    for(int i=0;i<T; i++)
    {
        printf("%d\n",res[i]);
    }    
}
