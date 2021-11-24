//
//  main.c
//  10809. 알파벳_찾기
//
//  Created by 김용환 on 2021/11/23.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    char arr[100]={0,};
    scanf("%s",arr);
    for(char ch = 97; ch<=122;ch++){
        int i = 0;
        while(1){
            if(arr[i]=='\0'){
                i = -1;
                break;
            }
            if(arr[i]==ch){
                break;
            }
            else{
                i++;
            }
        }
        printf("%d ",i);
    }
}
