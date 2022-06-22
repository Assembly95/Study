//
//  main.c
//  2525. 오븐시계
//
//  Created by 김용환 on 2022/04/01.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int hour = 0;
    int minute = 0;
    
    int cook = 0;
    
    int after_hour = 0;
    int after_minute = 0;
    
    scanf("%d %d",&hour, &minute);
    scanf("%d",&cook);
    
    after_minute = minute + cook;
    after_hour = (after_minute/60) + hour;
    after_minute %= 60;
    after_hour %= 24;
    
    printf("%d %d",after_hour, after_minute);
}
