//
//  main.c
//  2839.설탕배달
//
//  Created by 김용환 on 2022/01/24.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {

    int sugar = 0;
    int cnt = 0;
    
    for(int a = 3;a<=5000;a++){
        sugar = a;
        cnt = 0;
        
        if(sugar % 5 == 0){
            cnt = sugar / 5;
        }
        else{
            while(sugar != 0){
                sugar = sugar - 3;
                if(sugar<0){
                    cnt = -1;
                }
                cnt++;
                
                if(sugar % 5 == 0){
                    cnt = cnt + sugar / 5;
                    break;
                }
            }
        }
        printf("kg : %d 봉다리 개수 : %d\n",a,cnt);
    }
}
