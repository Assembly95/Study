//
//  main.c
//  11720. 숫자의 합
//
//  Created by 김용환 on 2021/11/22.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    char arr[100] ={0,};
    int i = 0;
    int cnt = 0;
    int sum = 0;
    scanf("%d",&cnt);
    scanf("%s",arr);
    
    while(arr[i]!='\0'){
        sum = sum + arr[i]-48;
        //printf("%d ",arr[i]-48);
        i++;
    }
    printf("%d",sum);
}
