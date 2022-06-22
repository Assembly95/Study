//
//  main.c
//  tosc_2
//
//  Created by 김용환 on 2022/06/01.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int bridge = 0;
    int jump = 0;
    int bridge_cnt[10] = {0,};
    int people = 0;
    
    scanf("%d",&bridge);
    scanf("%d",&jump);
    
    for(int i=0;i<bridge;i++){
        scanf("%d",&bridge_cnt[i]);
    }
}
