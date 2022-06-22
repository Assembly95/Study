//
//  main.c
//  10872. 팩토리얼
//
//  Created by 김용환 on 2022/05/03.
//

#include <stdio.h>


int factorial(int num);

int main(int argc, const char * argv[]) {
    
    int N = 0;
    int result = 0;
    
    scanf("%d",&N);
    result = factorial(N);
    printf("%d",result);
    
}

int factorial(int num){
    
    if(num == 0){
        return 1;
    }
    if(num<=1){
        return num;
    }
    return num * factorial(num-1);
}
