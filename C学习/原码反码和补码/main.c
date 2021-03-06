//
//  main.c
//  原码反码和补码
//
//  Created by udc on 2021/7/19.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    /*
     1. 正数：3码合一
     
     2. 二进制的最高位称之为 符号位， 如果是0，代表正数，如果是1，代表负数
     
     3.负数：
     反码就是最高位不变，其余位按位取反，也就是1变0，0变1
     补码就是反码+1
     
     4.计算机为什么要有原码/反码/补码
     因为计算机只能做加法
     1 + 1 =
     1 - 1 = 1 + (-1)
     3 * 3 = 3 + 3 + 3
     9 / 3 = 9 + (-3) + (-3) + (-3)
     
     那么这样就用到原码/反码/补码了
     比如1 + 1 -->
     用 1的原码 和 -1的原码 计算
     0000 0000 0000 0000 0000 0000 0000 0001 => 1的原码
     1000 0000 0000 0000 0000 0000 0000 0001 => -1的原码
     --------------------------------------------------
     1000 0000 0000 0000 0000 0000 0000 0010 => -2
     
     用 1的反码 和 -1的反码 计算
     0000 0000 0000 0000 0000 0000 0000 0001 => 1的反码
     1111 1111 1111 1111 1111 1111 1111 1110 => -1的反码
     --------------------------------------------------
     1111 1111 1111 1111 1111 1111 1111 1111 =>  反码
     1000 0000 0000 0000 0000 0000 0000 0000 =>  得到原码 也就是十进制-0
     
     用 1的补码 和 -1的补码 计算
     0000 0000 0000 0000 0000 0000 0000 0001 => 1的补码
     1111 1111 1111 1111 1111 1111 1111 1111 => -1的补码
     --------------------------------------------------
    10000 0000 0000 0000 0000 0000 0000 0000 => 一个33位的二进制
     0000 0000 0000 0000 0000 0000 0000 0000 => 最高位被丢弃
     
     
     5. 计算机中存储 和 参与计算的都是补码
     计算结果是正数时，直接将计算结果转换为十进制
     计算结果是一个负数时，需要先将计算结果转为原码，再转为十进制
     
     */
    
    
    
    
    
    
    
    
    
    return 0;
}
