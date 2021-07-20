//
//  main.c
//  进制
//
//  Created by udc on 2021/7/19.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    /*
     1.默认，所有编写的数值都是十进制，格式化输出控制：%i或者%d
     2.八进制，在数值前加0，格式化输出控制：%o
     3.十六进制，在数值前加0x，格式化输出控制：%x
     4.二进制，在数值前加0b，格式化输出控制：没有提供
     
     */
//    int num1 = 12;
//    printf("num1 = %i\n",num1);
//
//    int num2 = 014;
//    printf("num2 = %i\n",num2);
//
//
//    int num3 = 0xc;
//    printf("num3 = %i\n",num3);
    
//    int num = 12;
//    printf("num = %i\n",num);
//    printf("num = %d\n",num);
//    printf("num = %o\n",num);
//    printf("num = %x\n",num);
//    printf("num = %p\n",&num);
//
//
    /*
     十进制转二进制: 除2倒序取余
     十进制转八进制: 除8倒序取余
     十进制转十六进制: 除16倒序取余
     
     反过来：
     其他进制转十进制, 去掉0b,0x,0
     逐位*基数的次方， 基数就是进制
     
     
     */
    
    /*
     
     二进制转八进制：3个二进制位就是一个八进制位
     001 101 101
     1   5   5
     
     二进制转十六进制：4个二进制位就是一个十六进制位
     0110 1101
     6    d
     */
    
    int num = 0b001101101;
    printf("num = %o\n",num); //155
    printf("num = %x\n",num); //6d
    return 0;
}
