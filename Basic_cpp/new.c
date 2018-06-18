//
//  new.c
//  cplus plus
//
//  Created by Pankaj Devrath on 29/03/18.
//  Copyright © 2018 Pankaj Devrath. All rights reserved.
//

#include <stdio.h>
int main(){
    int **p;
    p=(int**)calloc(3,sizeof(int*));
    for(int i=0;i<3;i++){
        p[i]=(int*)calloc(3,sizeof(int));
        
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&p[i][j]);
        }
    }
    printf("%d",p[0][0]);
    return 0;
}
