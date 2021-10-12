//
//  main.c
//  ReverseHex
//
//  Created by michaelleong on 12/10/2021.
//

#include <stdio.h>
#include <stdint.h>
#include <math.h>

int main(int argc, const char * argv[]) {
    uint16_t num;
    
    printf("Please enter an unsigned  16-bits number: ");
    scanf("%u", &num);
    
    printf("Before Flip:\n");
    printf("%u_10 = %x_16\n", num, num);
    
    uint8_t hex1, hex2, hex3, hex4 = 0;
    
    hex1 = num % 16;
    num /= 16;
    hex2 = num % 16;
    num /= 16;
    hex3 = num % 16;
    num /= 16;
    hex4 = num % 16;
    num /= 16;
    
    uint16_t flipNum = hex1*pow(16, 3)+hex2*pow(16, 2)+hex3*pow(16, 1)+hex4*pow(16, 0);
    
    printf("After Flip:\n");
    printf("%u_10 = %x_16\n", flipNum, flipNum);
    

    return 0;
}
