#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool exists(char *str, int n, char val)
{
     for (int i = 0; i < n; ++i)
        if (str[i] == val)
            return true;
     return false;
}

int main()
{     
    int T;
    scanf("%d",&T);
    char gems[T][100];    
    int count=0;
    for(int i=0;i<T;i++)
    {
        scanf("%s",gems[i]);
        
        int len=0;            
        while(gems[i][len]!='\0')
            len++;
        
        for(int j=0;j<len;j++)
        {
            for(int k=j+1;k<=len;k++){
                if(gems[i][j]==gems[i][k])
                    gems[i][k]='0';  
            }           
        }       
    }
    /*for(int i=0;i<T;i++)
    {       
        char * pch;
        pch = strpbrk (gems[i], gems[i+1]);
        while (pch != NULL)
        {
            printf ("%c" , *pch);
            pch = strpbrk (pch+1,gems[i+1]);
        }
        printf ("\n");
        
    }*/
    
    int i=0;     
    while(gems[0][i]!='\0')
    {
         if(gems[0][i]!='0')
         {
            int conteo=0;
            for(int j=1;j<T;j++)
            {   
               // printf("Renglon %d \n\n",j);
                int lon=0;
                while(gems[j][lon]!='\0')
                {
                    //printf("  Caracter Comparado gems[0][%d] %c==%c gems[%d][%d]\n",i,gems[0][i],gems[j][lon],j,lon);
                    if(gems[0][i]==gems[j][lon])
                    {
                        conteo++;                        
                       // printf("Conteo interno=%d\n",conteo);
                        break;
                    }
                    lon++;
                }
                
                if(conteo==T-1)
                {
                    count++;
                    //printf("Marcador global==%d\n",count);
                }
                //printf("conteo=%d; j=%d\n",conteo,j);
                if(conteo!=j)
                {
                     break;
                }
                    
                
                
            }
             
        }     
        i++;  
    }    
    printf("%d",count);
  
  return 0;
   
    
}
