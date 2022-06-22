//
//  main.c
//  4948. 베르트랑 공준
//
//  Created by 김용환 on 2022/02/09.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
  
    int num = 0;
    int cnt = 0;
    int arr[246913] ={0,};
    
    for(int i = 2;i<=246913;i++){
        for(int j = 2;i*j<=246913;j++){
            arr[i*j] = 1;
        }
    }
    
//    for(int a = 0;a<10;a++){
//        printf("%d ",arr[a]);
//    }
    while(1){
        scanf("%d",&num);
        if(num == 0){
            break;
        }
        cnt = 0;
        
        for(int k = num+1;k<=2*num;k++){
            if(arr[k] == 0){
                cnt++;
            }
        }
        printf("%d\n",cnt);
    }
}
