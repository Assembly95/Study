//
//  main.c
//  4344. 평균은 넘겠지
//
//  Created by 김용환 on 2021/11/15.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int C  = 0;
    int score[1000] = {0,};
    int student = 0;
    int sum = 0;
    int cnt = 0;
    double result = 0;
    int avg = 0;
    scanf("%d", &C);

    for(int i = 0; i<C;i++){
        
        scanf("%d", &student);
        
        sum = 0;
        avg = 0;
        cnt = 0;
        for(int j = 0; j<student;j++){
            scanf("%d", &score[j]);
            sum = sum + score[j];
        }
        avg = sum / student;
        
        for(int l = 0; l<student;l++){
            if(score[l]>avg){
                cnt++;
            }
            result = (double)cnt / student * 100;
        }
        printf("%.3lf%%\n",result);
    }
}
