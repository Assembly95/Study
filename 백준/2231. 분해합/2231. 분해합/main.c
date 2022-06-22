//
//  main.c
//  2231. 분해합
//
//  Created by 김용환 on 2022/06/07.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int num = 0;
    int cnt = 0;
    int div = 1;
    int total = 0;
    int orient = 0;
    int judge = 0;
    int value = 0;
    scanf("%d",&num);
    
    judge = num;
    
    while(num>0){
        orient = num;
//        printf("%d\n",orient);
        while(orient / div != 0){
            div = div * 10;
            cnt++;
        }
        div = div / 10;
    
//    printf("%d",div);
        for(int i = 0;i<cnt;i++){
            total = total + (orient / div);
            orient = orient - div *(orient / div);
            div = div / 10;

//            printf("div : %d total : %d\n",div, total);
        }
        total = total + num;
//        printf("total : %d\n", total);
        if(total == judge){
            value = num;
            }
        num--;
        total = 0;
        div = 1;
        cnt = 0;
        }
    printf("%d\n",value);
}
