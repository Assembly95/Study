//
//  main.c
//  1929. 소수구하기
//
//  Created by 김용환 on 2022/02/07.
//
int isPrime(int num);

#include <stdio.h>

int main(int argc, const char * argv[]) {

    int M = 0;
    int N = 0;
    int arr[1000001] = {0,};
    arr[1] = 1;
    scanf("%d %d",&M, &N);
    
    for(int i = 2; i<=N;i++){
        for(int j = 2; i*j<=N;j++){
            arr[i*j] = 1;
        }
    }
    for(int k=M; k<=N;k++){
        if(arr[k]==0){
            printf("%d\n",k);
        }
    }
}
