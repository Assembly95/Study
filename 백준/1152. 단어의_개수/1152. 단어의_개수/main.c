//
//  main.c
//  1152. 단어의_개수
//
//  Created by 김용환 on 2021/11/25.
//

#include <stdio.h>
#include <string.h>
int main(int argc, const char * argv[]) {
      
    char ch[1000000]={0,};
    int len = 0;
    int cnt = 0;
    scanf("%[^\n]",ch);
    len = (int)strlen(ch);
    if(ch[0]==' ' || ch[len-1]==' '){
        for(int i = 0;i<len;i++){
            if(ch[i]==' '){
                cnt++;
            }
        }
        if(ch[0]==' ' && ch[len-1]==' '){
        printf("%d",cnt-1);
        }
        else{
            printf("%d",cnt);
        }
    }
    else{
        for(int i = 0;i<len;i++){
            if(ch[i]==' '){
                cnt++;
            }
        }
        printf("%d",cnt+1);
    }
}
