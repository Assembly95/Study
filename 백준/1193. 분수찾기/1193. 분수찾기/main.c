//
//  main.c
//  1193. 분수찾기
//
//  Created by 김용환 on 2022/01/11.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int X = 0;
    int minus = 1;
    int level = 0;
    int pos = 1;
    int cnt = 1;
    int front = 0;
    int back = 0;
    int val = 0;
    int temp = 0;
    scanf("%d",&X);
    temp = X;
    while(1){
        level = level + minus;
        X = X - minus;
        if(X<=0){
            break;
        }
        minus++;
        cnt++;
        pos = pos * -1;
        
    }
    
    level = level - minus;
    val = temp-level-1;
    //printf("minus : %d level : %d\n",minus,level);
    if(pos == 1){
        front = cnt - val;
        back = cnt - (cnt-1) + val;
    }
    else{
        front = cnt - (cnt-1) + val;
        back = cnt - val;
    }
    //printf("cnt : %d pos : %d\n",cnt,pos);
    printf("%d/%d",front,back);
}
