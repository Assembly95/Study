//
//  main.c
//  9020. 골드바흐의 추측
//
//  Created by 김용환 on 2022/02/14.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
  
    int T = 0;
    int gold = 0;
    int half = 0;
    int era[10001]={0,};
    
    for(int a = 2;a<5000;a++){
        for(int b = 2; a*b<10000;b++){
            era[a*b] = 1;
        }
    }
    
    
    
    scanf("%d",&T);
    for(int i=0;i<T;i++){
        scanf("%d",&gold);
        
        half = gold / 2;
        //printf("%d\n",half);
        for(int j = half;j>=2;j--){
            if(era[j] == 0){
                if(era[gold-j] == 0){
                    printf("%d %d\n",j,gold-j);
                    break;
                }
            }
        }
    }
}
