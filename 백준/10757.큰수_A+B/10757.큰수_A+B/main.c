//
//  main.c
//  10757.큰수_A+B
//
//  Created by 김용환 on 2022/01/25.
//

#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[]) {
   
    char A[10002] = {0,};
    char B[10002] = {0,};
    
    char Re_A[10002] = {0,};
    char Re_B[10002] = {0,};
    char Re_result[10003] ={0,};
    char result_arr[10003] = {0,};
    
    int i_cnt = 0;
    int j_cnt = 0;
    int l_cnt = 0;

    int A_len = 0;
    int B_len = 0;
    int the_long = 0;
    
    int carry = 0;
    int sum = 0;
    int plus = 0;
    int k = 0;
    
    scanf("%s", A);
    scanf("%s", B);
    
    A_len = (int)strlen(A);
    B_len = (int)strlen(B);
    
    if(A_len>=B_len){
        the_long = A_len;
    }
    else{
        the_long = B_len;
    }
//    printf("더 긴것 : %d\n",the_long);
//    printf("A : %d / B : %d\n",A_len,B_len);
    for(int a= 0; a<the_long;a++){
        if(Re_B[a]=='\0'){
            Re_B[a] = 48;
        }
    }
    for(int a= 0; a<the_long;a++){
        if(Re_A[a]=='\0'){
            Re_A[a] = 48;
        }
    }
    
    for(int i = A_len-1;i>=0;i--){
        Re_A[i_cnt] = A[i];
        i_cnt++;
    }

    for(int j = B_len-1;j>=0;j--){
        Re_B[j_cnt] = B[j];
        j_cnt++;
    }
//    printf("%s\n",Re_A);
//    printf("%s\n",Re_B);
    
    for(k = 0; k<the_long;k++){
        plus = (Re_A[k]-48) + (Re_B[k]-48) + carry;
        if(plus>=10){
            carry = plus / 10;
            sum = plus % 10;
        }
        else{
            carry = 0;
            sum = plus;
        }
        result_arr[k] = sum + 48;
    }
//    printf("long : %d carry : %d k : %d\n",the_long,carry,k);
    if(carry == 1){
        result_arr[k] = 49;
        k = k + 1;
    }
//    printf("\n");
//    printf("%s\n",result_arr);
    
    for(int l = k-1;l>=0;l--){
        Re_result[l_cnt] = result_arr[l];
        l_cnt++;
    }
        Re_result[k]='\0';
    
    printf("%s\n",Re_result);
}
