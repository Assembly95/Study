#include <stdio.h>

int main(){
    
    int n = 0;
    int num[20]={0,};
    int temp = 0;
    scanf("%d",&n);
    
    for(int i = 0; i<n;i++){
        scanf("%d",&num[i]);
    }
    
    for(int j = 0;j<n;j++){
        for(int k = 0;k<n;k++){
            if(num[k]<num[k+1]){
                temp = num[k];
                num[k] = num[k+1];
                num[k+1] = temp;
            }
        }
    }
    for(int l=0;l<n;l++){
        printf("%d\n",num[l]);
    }
}
