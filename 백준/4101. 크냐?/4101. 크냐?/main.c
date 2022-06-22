//
//  main.c
//  4101. 크냐?
//
//  Created by 김용환 on 2022/06/15.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a = 0;
    int b = 0;
    
    while(1){
        scanf("%d %d",&a, &b);
        if(a == 0 && b == 0){
            break;
        }
        if(a>b){
            printf("Yes\n");
        }
        else{
            printf("No\n");
        }
        
    }
    
}
