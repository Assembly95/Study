//
//  main.c
//  TOSC_2급
//
//  Created by 김용환 on 2022/04/22.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    char arr[6][6]={0,};
    char order[70] ={0,};
    int pos = 2;
    int move = 2;
    int row = 0;
    int cnt = 0;
    int temp = 0;
    int star_a = 4;
    int star_b = 2;
    int g = 0;
    for(int a = 0;a<6;a++){
        for(int b = 0;b<6;b++){
            arr[a][b] = 'a';
        }
    }
    
    for(int i = 0;i<3;i++){
        move = pos;
        for(int j = 0;j<=i;j++){
            scanf(" %c",&arr[row][move]);
            move += 2;
        }
        pos--;
        row++;
    }
    pos = 1;
    move = pos;
        for(int j = 0;j<=1;j++){
            scanf(" %c",&arr[row][move]);
            move += 2;
        }
    arr[4][2] = '*';
    
    
    scanf(" %[^\n]s",order);

    for(int a = 0;a<5;a++){
        for(int b = 0;b<5;b++){
            if(arr[a][b]=='a'){
                printf(" ");
            }
            else{
                printf("%c",arr[a][b]);
            }
        }
        printf("\n");
    }
    printf("\n");
    
    for(int g = 0;g<60;g+=3){
        if(order[g]!=0){
            cnt++;
        }
    }
    //printf("cnt 개수 : %d\n",cnt);
    
    for(int n = 0;n<cnt;n++){
        //printf("g : %d\n",g);
        if(order[g]=='t'){
            if(order[g+1]=='r'){
                //printf("tr\n");
                if(arr[star_a+1][star_b-1]=='a'){
                    printf("error\n\n");
                    g = g + 3;
                    continue;
                }
                temp = arr[star_a][star_b];
                arr[star_a][star_b] = arr[star_a+1][star_b-1];
                arr[star_a+1][star_b-1] = temp;
                star_a++;
                star_b--;
            }
            else{
                //printf("tl\n");
                if(arr[star_a+1][star_b+1]=='a'){
                    printf("error\n\n");
                    g = g + 3;
                    continue;
                }
                temp = arr[star_a][star_b];
                arr[star_a][star_b] = arr[star_a+1][star_b+1];
                arr[star_a+1][star_b+1] = temp;
                star_a++;
                star_b++;
            }
            g = g + 3;
        }
        else{
            if(order[g+1]=='r'){
                //printf("br\n");
                if(arr[star_a-1][star_b-1]=='a'){
                    printf("error\n\n");
                    g = g + 3;
                    continue;
                }
                //
                temp = arr[star_a][star_b];
                arr[star_a][star_b] = arr[star_a-1][star_b-1];
                arr[star_a-1][star_b-1] = temp;
                star_a--;
                star_b--;
            }
            else{
                //printf("bl\n");
                if(arr[star_a-1][star_b+1]=='a'){
                    g = g + 3;
                    printf("error\n\n");
                    continue;
                }
                //
                temp = arr[star_a][star_b];
                arr[star_a][star_b] = arr[star_a-1][star_b+1];
                arr[star_a-1][star_b+1] = temp;
                star_a--;
                star_b++;
            }
            g = g + 3;
        }
        for(int a = 0;a<5;a++){
            for(int b = 0;b<5;b++){
                if(arr[a][b]=='a'){
                    printf(" ");
                }
                else{
                    printf("%c",arr[a][b]);
                }
            }
            printf("\n");
        }
        printf("\n");
    }
}
