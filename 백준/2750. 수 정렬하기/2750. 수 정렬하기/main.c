//
//  main.c
//  2750. 수 정렬하기
//
//  Created by 김용환 on 2022/06/21.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {

    int N = 0;
    int temp = 0;
    int arr[1000]= {0,};
    scanf("%d",&N);
    
    for(int i = 0;i<N;i++){
        scanf("%d", &arr[i]);
    }
    
    for(int j = 0;j<N;j++){
        for(int k = 0;k<N-1;k++){
            if(arr[k] > arr[k+1]){
                temp = arr[k+1];
                arr[k+1] = arr[k];
                arr[k] = temp;
            }
        }
    }
    for(int i = 0;i<N;i++){
        printf("%d\n", arr[i]);
    }
}
