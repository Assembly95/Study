//
//  main.c
//  3053. 택시 기하학
//
//  Created by 김용환 on 2022/05/02.
//

#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>

int main(int argc, const char * argv[]) {
    
    int R = 0;
    double U_circle = 0;
    double T_circle = 0;
    
    scanf("%d",&R);
    
    U_circle = M_PI* R * R;
    T_circle = ((R*2) * (R*2)) / 2;
    printf("%lf\n",U_circle);
    printf("%lf",T_circle);
    
}
