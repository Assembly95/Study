//
//  main.c
//  2581. 소수
//
//  Created by 김용환 on 2022/01/28.
//

#include <stdio.h>
#include <math.h>

int isPrime(int val);

int main(int argc, const char * argv[]) {
    
    int M = 0;
    int N = 0;
    int cnt = 0;
    int min = 10000;
    int prime = 0;
    scanf("%d %d", &M, &N);
    
    for(int num =M; num<=N; num++){
        
        if(num == 2){
            cnt = cnt + 2;
            prime =  num;
        }
        else if(num == 3){
            cnt = cnt + 3;
            prime = num;
        }
        else{
            if(num % 2 == 0 || num == 1){
                continue;
            }
            else{
                cnt = cnt + isPrime(num);
                prime = isPrime(num);
            }
        }
//        printf("%d\n",prime);
        if(prime == 0){
            continue;
        }
        else{
            if(prime<min){
                min = prime;
            }
        }
    }
    if(cnt == 0){
        printf("-1");
    }
    else{
        printf("%d\n",cnt);
        printf("%d",min);
    }
}

int isPrime(int val){
    for(int i = 2;i<=sqrt(val);i++){
        if(val % i == 0){
            return 0;
        }
    }
    return val;
}
