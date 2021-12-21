//
//  main.c
//  2811. 소수와 합성수
//
//  Created by 김용환 on 2021/11/29.
//

#include <stdio.h>
#include <math.h>

int isPrime(int val);
int main(int argc, const char * argv[]) {
    
    int num = 0;
    for(int i = 0;i<5;i++){
        scanf("%d",&num);
        isPrime(num);
    }
}
    
int isPrime(int val){
    if(val<2){
        printf("number one\n");
        return 0;
    }
        for(int j = 2;j<=(int)sqrt(val);j++){
            if(val%j==0){
                printf("composite number\n");
                return 0;
            }
        }
            printf("prime number\n");
    return 0;
}
