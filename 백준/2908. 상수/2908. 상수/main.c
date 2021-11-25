//
//  main.c
//  2908. 상수
//
//  Created by 김용환 on 2021/11/25.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    char num1[4]={0,};
    char num2[4]={0,};
    int sum1 = 0;
    int sum2 = 0;
    int mul = 100;
    
    scanf("%s",num1);
    scanf("%s",num2);
    
    for(int i = 2;i>=0;i--){
        sum1 = sum1 + (num1[i]-48)*mul;
        mul = mul / 10;
    }
    
    mul = 100;
    for(int j = 2;j>=0;j--){
        sum2 = sum2 + (num2[j]-48)*mul;
        mul = mul / 10;
    }
    
    if(sum1>sum2){
        printf("%d",sum1);
    }
    if(sum1<sum2){
        printf("%d",sum2);
    }
}
