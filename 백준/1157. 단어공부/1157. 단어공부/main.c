//
//  main.c
//  1157. 단어공부
//
//  Created by 김용환 on 2021/11/24.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
   
    char ch[1000000] ={0,};
    int alpha[26]={0,};
    int max_pos = 0;
    int cnt = 1;
    int judge = 0;
    scanf("%s",ch);
    
    for(int i = 0;i<1000000;i++){
        if(ch[i]=='\0'){
            break;
        }
        if(ch[i]>=97){
            ch[i] = ch[i] - 32;
        }
        alpha[ch[i]-65]++;
    }
    
    /*for(int j = 0 ; j<26;j++){
        printf("%c : %d\n",j+65,alpha[j]);
    }*/
   
    for(int j = 0 ; j<25;j++){
        if(alpha[max_pos]<alpha[j+1]){
            max_pos = j+1;
        }
    }
    //printf("제일 많은 문자 : %c\n",max_pos+65);
    for(int j = 0 ; j<26;j++){
        if(alpha[max_pos]==alpha[j]){
            cnt++;
            if(cnt>2){
                judge = 1;
                break;
            }
        }
        else{
            judge = 0;
        }
    }
    
    if(judge==1){
        printf("?");
    }
    else{
        printf("%c",max_pos+65);
    }
}
