//
//  main.c
//  2798. 블랙잭
//
//  Created by 김용환 on 2022/06/01.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int N = 0;
    int M = 0;
    int temp = 0;
    int total = 0;
    int max = 0;
    int card[100]= {};
    
    
    scanf("%d %d", &N, &M);
    
    for(int i=0;i<N;i++){
        scanf("%d",&card[i]);
    }
    
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            if(card[j]<card[j+1]){
            temp = card[j];
            card[j] = card[j+1];
            card[j+1] = temp;
            }
        }
    }
//        for(int i=0;i<N;i++){
//            printf("%d ",card[i]);
//        }
//    printf("\n");

    for(int i=0;i<N-2;i++){
        for(int j=i+1;j<N-1;j++){
            for(int k=j+1;k<N;k++){
                total = card[i]+card[j]+card[k];
                if(total<=M && total >= max){
                    max = total;
//                printf("%d %d %d max : %d\n",card[i],card[j],card[k],max);
                }
            }
        }
    }
    printf("%d",max);
}
