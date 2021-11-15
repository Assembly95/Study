//
//  main.c
//  1546.average
//
//  Created by 김용환 on 2021/11/15.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
 
    int num = 0;
    int max = 0;
    double sum = 0;
    double score[1000]={0,};
    double avg = 0;
    scanf("%d", &num);
    for(int i = 0;i<num;i++){
        scanf("%lf",&score[i]);
        if(score[i] > max){
            max = score[i];
        }
    }
    
    for(int j = 0;j<num;j++){
        score[j] = score[j]/max*100;
    }
    
    for(int k = 0;k<num;k++){
        sum = sum + score[k];
    }
   /* printf("변한 값  : ");
    for(int l = 0; l<num;l++){
        printf("%f ",score[l]);
    }*/
    avg = sum/num;
    
    printf("%lf",avg);
}
