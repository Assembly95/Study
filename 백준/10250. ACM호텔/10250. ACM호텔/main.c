//
//  main.c
//  10250. ACM호텔
//
//  Created by 김용환 on 2022/01/19.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int t_case = 0;
    int width = 0;
    int height  = 0;
    int guest = 0;
    int h_room = 0;
    int w_room = 0;
    scanf("%d", &t_case);
    for(int i = 0; i<t_case;i++){
        scanf("%d %d %d",&height,&width,&guest);
        
        if(height == guest){
            w_room = guest / height;
            h_room = guest;
            }
        
        else{
                w_room = guest / height + 1;
                h_room = guest % height;
                
            }
        
            printf("%d",h_room);
            if(w_room<10){
                printf("0");
                printf("%d",w_room);
            }
            else{
                printf("%d",w_room);
            }
            printf("\n");
    }
}
