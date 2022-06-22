//
//  main.c
//  TOSC_1급
//
//  Created by 김용환 on 2022/04/26.

// 7 5 0 2 1 2 4 6 2 8 2 4 4 2 4 6
// (1 4) (3 2)
#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int arr[4][4] = {0,};
    int num_input = 0;
    int num_cnt[10] ={0,};
    char order[12]={0,};
    int arrow_sum = 0;
    int one = 0;
    int two = 0;
    
    for(int i = 0;i<4;i++){ // 숫자 입력
        for(int j = 0; j<4;j++){
            scanf("%d",&num_input);
            arr[i][j] = num_input;
            num_cnt[num_input]++;
        }
    }
    
    scanf(" %[^\n]s",order); // 명령어 입력
    
    printf("입력된 숫자 배열 출력\n");
    for(int i = 0;i<4;i++){ // 배열 출력
        for(int j = 0; j<4;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    // printf("%s",order); // 명령어 출력
    one = arr[order[1]-49][order[3]-49]; // 입력한 명령어의 좌표값 저장 - 첫번째
    two = arr[order[7]-49][order[9]-49]; // 입력한 명령어의 좌표값 저장 - 두번째
    
    arr[order[1]-49][order[3]-49] = two; // 좌표값 교환
    arr[order[7]-49][order[9]-49] = one; // 좌표값 교환
    
    /*for(int q = 0;q<10;q++){ // 입력한 숫자들이 몇 개 입력되었는지 확인
        printf("%d:%d ",q,num_cnt[q]);
    }*/
    
    
    printf("바뀐 숫자 배열 출력\n");
    for(int i = 0;i<4;i++){ // 배열 출력
        for(int j = 0; j<4;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    
    for(int i = 0;i<10;i++){ // num_cnt에서 2개 이상인 숫자들 확인
        if(num_cnt[i]>=2){
//            printf("%d pass\n",i);
            
            for(int j = 0;j<5;j++){
                for(int k = 0;k<5;k++){
                    if(arr[j][k] == i){
                        int left = 1;
                        int top = 1;
                        int bot = 1;
                        int right = 1;
                        if(arr[j][k-1] == i){
                            while (arr[j][k-left]==i) {
                                arr[j][k-left] = '*';
                                left++;
                                printf("LEFT\n");
                            }
                        }
                        if(arr[j-1][k] == i){
                            while (arr[j-top][k]==i) {
                                arr[j-top][k] = '*';
                                top++;
                                printf("TOP\n");
                            }
                        }
                        if(arr[j+1][k] == i){
                            while (arr[j+bot][k]==i) {
                                arr[j+bot][k] = '*';
                                bot++;
                                printf("BOT\n");
                            }
                        }
                        if(arr[j][k+1] == i){
                            while (arr[j][k+right]==i) {
                                arr[j][k+right] = '*';
                                right++;
                                printf("RIGHT\n");
                            }
                        }
                        
                        printf("\n");
                        for(int i = 0;i<4;i++){ // 배열 출력
                            for(int j = 0; j<4;j++){
                                printf("%d ",arr[i][j]);
                            }
                            printf("\n");
                        }
                        
                        /*
                         for(int l = 0;l<4;l++){
                            printf("%d ",arrow[l]);
                            arrow_sum += arrow[l];
                        }
                        printf("\n");
                        printf("arrow_sum : %d",arrow_sum);
                        return 0;
                         */
                    }
                }
            }
        }
    }
}
