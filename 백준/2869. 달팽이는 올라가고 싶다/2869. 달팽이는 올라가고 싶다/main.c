//
//  main.c
//  2869. 달팽이는 올라가고 싶다
//
//  Created by 김용환 on 2022/01/11.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int A = 0;
    int B = 0;
    int V = 0;
    int day = 0;
    int length = 0;
    
    scanf("%d %d %d",&A, &B, &V);
    
    length = A - B;
    V = V - A;
    day = V / length;
    if(V % length == 0){
    day++;
    }
    else{
        day = day + 2;
    }
    printf("%d",day);
}
