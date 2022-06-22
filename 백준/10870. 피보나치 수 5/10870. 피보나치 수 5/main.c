//
//  main.c
//  10870. 피보나치 수 5
//
//  Created by 김용환 on 2022/05/09.
//

#include <stdio.h>

int Fibonacci(int first, int second,int cnt,int limit);


int main(int argc, const char * argv[]) {
    int first = 0;
    int second = 1;
    int num = 0;
    int result = 0;
    scanf("%d", &num);
    
    //#######################
    //printf("%d",num);
    if(num!=0){
        result = Fibonacci(first,second,3,num);
    }
    printf("%d", result);
}

int Fibonacci(int first, int second,int cnt,int limit){
    int third = first + second;
    //printf("%d ",third);
    if(cnt>limit){
        return third;
    }
    return Fibonacci(second,third,cnt+1,limit);
}


