//
//  main.c
//  1436. 영화감독 숌
//
//  Created by 김용환 on 2022/06/20.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int num = 666;
    int temp = 0;
    int div_val = 100;
    int cnt = 3;
    int N = 0;
    int six_cnt = 0;
    int N_cnt = 0;
    int result = 0;
    int arr[10]={0,};
    
    
    scanf("%d",&N); // 개수 입력
    while(N_cnt<N){
        temp = num;
        //printf("temp : %d\n",temp);
        div_val = 100;
        while(temp/div_val!=0){ // 정수의 크기 찾기
            div_val *= 10;
            cnt++;
        }
        div_val = div_val / 10;
        cnt--;
        //printf("div_val : %d\n",div_val);
        //printf("cnt : %d\n",cnt);
        for(int i = 0;i<cnt;i++){
            arr[i] = temp / div_val;
            temp = temp - ((temp/div_val) * div_val);
            div_val = div_val / 10;
        }
        
        for(int i = 0;i<cnt;i++){
            //printf("%d",arr[i]);
            if(arr[i] == 6){
                six_cnt++;
                if(six_cnt==3){
                    break;
                }
            }
            else{
                six_cnt = 0;
            }
        }
        //printf("\n");
        if(six_cnt>=3){
            result = num;
            N_cnt++;
        }
        num++;
        six_cnt = 0;
        cnt = 3;
    }
    printf("%d",result);
}
