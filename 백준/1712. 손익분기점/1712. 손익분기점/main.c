//
//  main.c
//  1712. 손익분기점
//
//  Created by 김용환 on 2021/12/27.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int A = 0; // 고정금액
    int B = 0; // 가변금액
    int C = 0; // 노트북 금액
    
    scanf("%d %d %d",&A, &B, &C);
    
    if(B>=C){
        printf("-1");
    }
    else{
        printf("%d",A/(C-B)+1);
    }
}
