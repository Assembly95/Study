//
//  main.c
//  2675. 문자열_반복
//
//  Created by 김용환 on 2021/11/24.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    
    char S[20]={0,};
    int testCase = 0;
    int R = 0;
    scanf("%d",&testCase);
    
    for(int i = 0 ; i<testCase;i++){
        
        int cnt = 0;
        scanf("%d ",&R);
        scanf("%s",S);
        
        while(S[cnt]!='\0'){
            for(int j = 0 ; j<R;j++){
                printf("%c",S[cnt]);
            }
            cnt++;
        }
        printf("\n");
    }
}
