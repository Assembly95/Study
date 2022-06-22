//
//  main.c
//  2669. 직사각형 네개의 합집합의 면적 구하기
//
//  Created by 김용환 on 2022/04/08.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int square[101][101] = {0,};
    int x1 = 0, y1 = 0, x2 = 0, y2 = 0;
    int cnt = 0;
    for(int i = 0;i<4;i++){
        scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
        
        for(int j = x1;j<x2;j++){
            for(int k = y1;k<y2;k++){
                square[j][k] = 1;
            }
        }
    }
    for(int a = 100;a>=0;a--){
        for(int b = 100; b>=0;b--){
            if(square[a][b] == 1){
                cnt++;
            }
        }
        //printf("\n");
    }
    printf("%d",cnt);
}
