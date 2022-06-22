//
//  main.c
//  1002. 터렛
//
//  Created by 김용환 on 2022/04/28.
//

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, const char * argv[]) {
    
    int test_case = 0;
    int x1 = 0;
    int y1 = 0;
    int r1 = 0;
    int x2 = 0;
    int y2 = 0;
    int r2 = 0;
    
    int pos = 0;
    int c_dist = 0;
    int temp = 0;
    
    scanf("%d",&test_case);
    for(int i = 0;i<test_case;i++){
        scanf("%d %d %d %d %d %d",&x1, &y1, &r1, &x2, &y2, &r2);
        
        if(r1 > r2){
            temp = x1;
            x1 = x2;
            x2 = temp;
            
            temp = y1;
            y1 = y2;
            y2 = temp;
            
            temp = r1;
            r1 = r2;
            r2 = temp;
        }
//        printf("%d %d %d %d %d %d",x1, y1, r1, x2, y2, r2);
        
        r1 = abs(r1);
        r2 = abs(r2);
        
        c_dist = ((x2-x1)*(x2-x1)) + ((y2-y1)*(y2-y1));

        
//      printf("두 점 사이의 거리 : %d\n",c_dist);
        if(x1==x2 && y1==y2){
            if(r1 == r2){
                pos = -1;
            }
            else{
                pos = 0;
            }
        }
        
        else{
            if(c_dist == (r1+r2) * (r1+r2)){
                pos = 1;
            }
            if(c_dist < (r1+r2) * (r1+r2)){
                pos = 2;
            }
            if(c_dist > (r1+r2) * (r1+r2)){
                pos = 0;
            }
            if((r2-r1) * (r2-r1) == c_dist){
                pos = 1;
            }
            if((r2-r1) * (r2-r1)>c_dist){
                pos = 0;
            }
        }
        printf("%d\n",pos);
    }
}
