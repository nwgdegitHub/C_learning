//
//  main.c
//  函数和指针
//
//  Created by udc on 2021/7/12.
//

#include <stdio.h>

void test(void);

int main()
{
    /**
     1.函数和指针
     数组名保存的就是数组的地址，所以可以将数组名赋值给一个指针变量
     同样，函数名保存的也是函数地址，那么也可以将函数名赋值给一个指针变量
     
     2.定义一个指向函数的指针
        2.1. 将函数声明拷贝过来
        2.2. 在返回值和函数名中间加一颗星
        2.3. 修改函数名称
        2.4. 用（）将星和新的函数名括起来
        2.5. 将函数名赋值给指针变量
     
     3. 调用函数
     
     
     */
    
    printf("&test = %p\n",&test);
    printf("test = %p\n",test);
    
    
    void (*p)(void);
    p = test;
    
    printf("p = %p\n",p);
    
    test();
    p();
    
    return 0;
}

void test(){
    printf("123\n");
}

