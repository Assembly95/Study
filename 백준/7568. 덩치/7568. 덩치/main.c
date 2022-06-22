//
//  main.c
//  7568. 덩치
//
//  Created by 김용환 on 2022/06/14.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int x[50] = {0,};
    int y[50] = {0,};
    int test = 0;
    int cnt = 0;
    
    scanf("%d",&test);
    
    for(int i = 0;i<test;i++){
        scanf("%d %d",&x[i], &y[i]);
    }
    
    for(int j = 0;j<test;j++){
        cnt = 1;
        for(int k = 0; k<test ;k++){
            if(x[j]<x[k] && y[j]<y[k]){
                cnt++;
            }
        }
        printf("%d ",cnt);
    }
}
