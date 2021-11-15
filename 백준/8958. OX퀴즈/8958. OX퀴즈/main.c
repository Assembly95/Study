//
//  main.c
//  8958. OX퀴즈
//
//  Created by 김용환 on 2021/11/15.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int cnt = 0;
    int pos = 0;
    int score = 0;
    int sum = 0;
    char OX[80] ={0,};
    
    
    scanf("%d", &cnt);
    
    for(int i = 0;i<cnt;i++){
        scanf("%s",OX);
        pos = 0;
        sum = 0;
        score = 0;
        while(OX[pos]!=0){
            if(OX[pos]=='O'){
                score++;
                sum = sum + score;
            }
            else{
                score = 0;
            }
            pos++;
        }
        printf("%d\n",sum);
    }
}
