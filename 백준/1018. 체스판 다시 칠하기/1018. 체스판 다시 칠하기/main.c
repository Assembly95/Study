//
//  main.c
//  1018. 체스판 다시 칠하기
//
//  Created by 김용환 on 2022/06/17.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
   
    char black_start_arr[8][8] = {
        {'B','W','B','W','B','W','B','W'},
        {'W','B','W','B','W','B','W','B'},
        {'B','W','B','W','B','W','B','W'},
        {'W','B','W','B','W','B','W','B'},
        {'B','W','B','W','B','W','B','W'},
        {'W','B','W','B','W','B','W','B'},
        {'B','W','B','W','B','W','B','W'},
        {'W','B','W','B','W','B','W','B'}
    };
    char white_start_arr[8][8] = {
        {'W','B','W','B','W','B','W','B'},
        {'B','W','B','W','B','W','B','W'},
        {'W','B','W','B','W','B','W','B'},
        {'B','W','B','W','B','W','B','W'},
        {'W','B','W','B','W','B','W','B'},
        {'B','W','B','W','B','W','B','W'},
        {'W','B','W','B','W','B','W','B'},
        {'B','W','B','W','B','W','B','W'}
    };
    
    char chess[50][50] = {0,};
    int N = 0;
    int M = 0;
    
    int min = 64;
    int cnt = 0;
    int origin_row = 0;
    int origin_col = 0;
    
    int start_row = 0;
    int start_col = 0;
    
    scanf("%d %d",&N, &M);
    for(int i = 0;i<N;i++){
        for(int j = 0;j<M;j++){
            scanf(" %c",&chess[i][j]);
        }
    }
    
    /*for(int i = 0;i<N;i++){
        for(int j = 0;j<M;j++){
            printf("%c ",chess[i][j]);
        }
        printf("\n");
    }*/
    
    for(int i =0;i<=N-8;i++){
        for(int j = 0;j<=M-8;j++){
            start_row = i;
            start_col = j;
            
            cnt = 0;
            
                for(int a = 0;a<8;a++){
                    for(int b = 0;b<8;b++){
                        if(white_start_arr[origin_row+a][origin_col+b] != chess[start_row+a][start_col+b]){
                            cnt++;
                        }
                    }
                }
            if(min>cnt){
                min = cnt;
            }
            cnt = 0;
                for(int a = 0;a<8;a++){
                    for(int b = 0;b<8;b++){
                        if(black_start_arr[origin_row+a][origin_col+b] != chess[start_row+a][start_col+b]){
                            cnt++;
                        }
                    }
                }
            if(min>cnt){
                min = cnt;
            }
        }
    }
    printf("%d",min);
}
