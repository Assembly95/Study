//
//  main.c
//  2292. 벌집
//
//  Created by 김용환 on 2021/12/27.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int N = 0; // 도착해야 할 방의 숫자
    int cnt = 1; // 시작 위치부터이므로 1부터 시작
    int val = 6; // 범위는 6씩 늘어남
    
    scanf("%d",&N);
    
    if(N == 1){
        cnt = 1;
    }
    else{
        while(N>1){
            N = N - val;
            cnt++;
            val = val + 6;
        }
    }
    printf("%d",cnt);
}
