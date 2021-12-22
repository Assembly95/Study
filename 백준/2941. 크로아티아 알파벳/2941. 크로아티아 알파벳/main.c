#include <stdio.h>
#include <string.h>
int main(){
    char arr[200]={0,};
    int cnt = 0;
    int pos = 0;
    char temp = 0;
    scanf("%s",arr);
    
    while(pos<strlen(arr)){
        temp = arr[pos];
        switch(temp){
            case 'c':
                if(arr[pos+1]=='='||arr[pos+1]=='-'){
                    pos+=2;
                    break;
                }
            case 'd':
                if(arr[pos+1]=='-'){
                    pos+=2;
                    break;
                }
                if(arr[pos+1]=='z'&&arr[pos+2]=='='){
                    pos+=3;
                    break;
                }

            case 'l':
            case 'n':
                if(arr[pos+1]=='j'){
                    pos+=2;
                    break;
                }
            case 's':
            case 'z':
                if(arr[pos+1]=='='){
                    pos+=2;
                    break;
                }
            default:
                if(arr[pos]=='-' || arr[pos]=='='){
                    cnt--;
                }
                pos++;
            }
            cnt++;
        }
    printf("%d",cnt);
}
