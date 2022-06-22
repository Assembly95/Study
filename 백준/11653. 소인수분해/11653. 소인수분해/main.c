//
//  main.c
//  11653. 소인수분해
//
//  Created by 김용환 on 2022/01/28.
//

#include <stdio.h>
#include <math.h>

int select_Prime(int val);
int main(int argc, const char * argv[]) {
    
    int div = 2;
    int N = 0;
    scanf("%d", &N);
    
    while(N != 1){
        div = 2;
        while(1){
            if(N%div == 0){
                printf("%d\n",div);
                N = N / div;
                break;
            }
            else{
                div++;
            }
        }
//        else{
//            div = select_Prime(div);
//        }
    }
    
}

int select_Prime(int val){
    
    if(val == 2){
        return 3;
    }
    else if(val == 3){
        return 5;
    }
    else{
        val +=2;
        for(int i = 2;i<=sqrt(val);i++){
            if(val % i == 0){
                break;
            }
        }
        return val;
    }
}
