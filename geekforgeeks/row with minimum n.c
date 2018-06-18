#include <stdio.h>

int main() {
    
    int i,j,k,n,l,a[1000][1000],b[100],m=0,o,p=0,q=0,r=0,small,w=0,ls;
    scanf("%d",&n);
    while(n>0)
    {
        p=0;
        p=0;
        w=0;
        r=0;
        scanf("%d %d",&i,&j);
        for(k=0;k<i;k++)
        {
            m=0;
            
            for(l=0;l<j;l++)
            {
                scanf("%d",&a[i][j]);
                if(a[i][j]==1)
                {   w++;
                    m++;
                }
            }
            b[r]=m;
            r++;
        }
        if(w==0)
        {
            printf("-1\n");
            p=2;
            
        }
        else if(p!=2)
        {
            small=i+j;
            ls=0;
            for(o=0;o<r;o++)
            {
                if(b[o]<small && b[o]!=0)
                {
                    small=b[o];
                    ls=o;
                }
                
                
            }
            
            printf("%d\n",ls);
        }
        
        
        n--;
        
    }
    
    
    return 0;
}
