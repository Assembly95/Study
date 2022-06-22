//
//  main.c
//  asdfghj
//
//  Created by 김용환 on 2022/04/12.
//

#include <stdio.h>

int func(int i, int j);


int main(int argc, const char * argv[]) {
    
    int a = 3, b = 12;
    a = func(a,b);
    printf("%d, %d\n",a,b);
}

int func(i,j)

int i,j;
{
    i*=3;
    j/=3;
    printf("%d, %d\n",i, j);
    return i;
}
