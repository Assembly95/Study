//
//  main.c
//  1011. Fly me to the Alpha Centauri
//
//  Created by 김용환 on 2022/01/28.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int t_case = 0;
    int x = 0, y = 0;
    int dist = 0;
    int cnt = 0;
    int move = 1;
    int judge = 0;
    scanf("%d",&t_case);
    for(int t = 0;t<t_case;t++){
        scanf("%d %d",&x, &y);
        dist = y - x;
        judge = dist;
        while (1) {
            move++;
            cnt++;
            
            if(judge % 2 == 1){
                if(move == dist/2 + 1){
                    break;
                }
            }
            else{
                if(move == dist/2 + 2){
                    break;
                }
            }
        }
        if(judge % 2 == 1){
            printf("%d\n",cnt*2+1);
        }
        else{
            printf("%d\n",cnt*2-1);
        }
        move = 0;
        cnt = 0;
    }
}
