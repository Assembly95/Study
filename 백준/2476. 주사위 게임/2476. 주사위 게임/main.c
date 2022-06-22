//
//  main.c
//  2476. 주사위 게임
//
//  Created by 김용환 on 2022/06/22.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int N = 0;
    int max = 0;
    int cnt = 0;
    int dice[3] = {0,};
    scanf("%d", &N);
    
    for(int i = 0;i<N;i++){
        for(int j = 0;j<3;j++){
            scanf("%d", &dice[j]);
            if(max<=dice[j]){
                max = dice[j];
            }
        }
        for(int k = 1;k<=6;k++){
            for(int l = 0;l<3;l++){
                
            }
        }
    }
}
