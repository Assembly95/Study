#include <stdio.h>
#include <string.h>
int main(int argc, const char * argv[]) {
    
    int word = 0;
    char alpha[100]={0,};
    int alpha_pos[100]={0,};
    int cnt = 0;
    int group_cnt = 0;
    int judge = 1;
    scanf("%d",&word);
    
    for(int i = 0; i<word;i++){
        scanf("%s",alpha);
        int j = 0;
        while(j<strlen(alpha)){
            cnt = 0;
            for(int k = j;k<strlen(alpha);k++){
                if(alpha[j]==alpha[k]){
                    alpha_pos[cnt] = k;
                    cnt++;
                }
            }
            if(cnt == 1){
                judge = 1;
            }
            else{
                for(int l = 0;l<cnt-1;l++){
                    if(alpha_pos[l] - alpha_pos[l+1] == -1){
                        judge = 1;
                    }
                    else{
                        judge = 0;
                        break;
                    }
                }
            }
            //printf("j : %d cnt : %d judge : %d\n",j, cnt, judge);
            if(judge == 0){
                break;
            }
            else{
                j = j + cnt;
            }
        }
        if(judge == 0){
            continue;
        }
        else{
            group_cnt++;
        }
    }
    printf("%d",group_cnt);
}
