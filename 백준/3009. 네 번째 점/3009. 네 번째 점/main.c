//
//  main.c
//  3009. 네 번째 점
//
//  Created by 김용환 on 2022/03/22.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int square[3][3] ={0,};
    int x[1001] = {0,};
    int y[1001] = {0,};
    
    for(int i = 0;i<3;i++){
        scanf("%d %d",&square[i][0],&square[i][1]);
    }
    
    for(int j = 0;j<3;j++){
        x[square[j][0]]++;
    }
    
    for(int k =1;k<1001;k++){
        if(x[k]==1){
            printf("%d ",k);
        }
    }
    
    for(int j = 0;j<3;j++){
        y[square[j][1]]++;
    }
    
    for(int k =1;k<1001;k++){
        if(y[k]==1){
            printf("%d",k);
        }
    }
}
