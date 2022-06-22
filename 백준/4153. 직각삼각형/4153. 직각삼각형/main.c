//
//  main.c
//  4153. 직각삼각형
//
//  Created by 김용환 on 2022/03/25.
//

#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[]) {
    
    int point[3] = {0,};
    int temp = 0;
    
    while(1){
        for(int i = 0;i<3;i++){
            scanf("%d",&point[i]);
        }
        
        if(point[0] == 0){
            break;
        }
        for(int j = 0;j<2;j++){
            for(int k = 0;k<2;k++){
                if(point[k]<point[k+1]){
                    temp = point[k];
                    point[k] = point[k+1];
                    point[k+1] = temp;
                }
            }
        }
        
        /*for(int i = 0;i<3;i++){
            printf("%d ",point[i]);
        }
        printf("\n");*/
        
        if(point[0]*point[0] == point[1]*point[1] + point[2]*point[2]){
            printf("right\n");
        }
        else{
            printf("wrong\n");
        }
    }
}
