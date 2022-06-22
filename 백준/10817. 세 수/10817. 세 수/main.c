//
//  main.c
//  10817. 세 수
//
//  Created by 김용환 on 2022/06/16.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int arr[3] = {0,};
    int temp = 0;
    for(int i = 0; i<3;i++){
        scanf("%d",&arr[i]);
    }
    
    for(int j = 0;j<3;j++){
        for(int k = 0;k<3;k++){
            if(arr[k]<=arr[k+1]){
                temp = arr[k];
                arr[k] = arr[k+1];
                arr[k+1] = temp;
            }
        }
    }
    printf("%d",arr[1]);
}
