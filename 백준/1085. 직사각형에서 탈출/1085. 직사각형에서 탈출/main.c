//
//  main.c
//  1085. 직사각형에서 탈출
//
//  Created by 김용환 on 2022/03/21.
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {

    int x = 0;
    int y = 0;
    int w = 0;
    int h = 0;
    
    int transverse = 0;
    int length = 0;
    
    scanf("%d %d %d %d",&x, &y, &w, &h);
    
    if(x>w/2){
        transverse = w - x;
    }
    else{
        transverse = x;
    }
    if(y>h/2){
        length = h - y;
    }
    else{
        length = y;
    }
    if(abs(transverse)<abs(length)){
        printf("%d",abs(transverse));
    }
    else{
        printf("%d",abs(length));
    }
}
