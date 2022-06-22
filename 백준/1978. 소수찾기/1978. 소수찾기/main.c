//
//  main.c
//  1978. 소수찾기
//
//  Created by 김용환 on 2022/01/28.
//

#include <stdio.h>
#include <math.h>

int isPrime(int val);

int main(int argc, const char * argv[]) {

    int N = 0;
    int num = 0;
    int cnt = 0;
    scanf("%d", &N);
    
    for(int i = 0;i<N;i++){
        scanf("%d", &num);
        
        if(num == 2 || num == 3){
            cnt++;
        }
        else{
            if(num % 2 == 0 || num == 1){
                continue;
            }
            else{
                cnt = cnt + isPrime(num);
            }
        }
    }
    printf("%d",cnt);
}

int isPrime(int val){
    for(int i = 2;i<=sqrt(val);i++){
        if(val % i == 0){
            return 0;
        }
    }
    return 1;
}
