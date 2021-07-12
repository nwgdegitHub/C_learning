//
//  main.c
//  结构体
//
//  Created by udc on 2021/7/12.
/*
 1. 什么是结构体？
 结构体和数组很像，都是用于存储一组数据的
 但是数组存储的是一组相同类型的数据
 结构体存储的是一组不通过类型的数据
 
 2. 如何定义结构体
 struct 结构体名称{
    数据类型 属性名称;
    数据类型 属性名称;
    ...
 };
 
3. 如何定义结构体变量
 3.1. struct 结构体名称 结构体变量名称;
 3.2. 直接在定义结构体后面定义结构体变量
 3.3. 直接在定义结构体后面定义结构体变量，不要结构体名称
 
 
4. 初始化
 4.1. 定义变量时初始化, 注意对应
 4.2. 指定属性，一一赋值
 
 */

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    struct Person{
        char *name;
        int age;
        float score;
    };
    
    struct Person per;
    per.name = "疾风剑豪";
    
    printf("per 名字 = %s \n",per.name);
    
    
    struct Man{
        char *name;
        int age;
        float score;
    } man;
    printf("man 名字 = %s \n",man.name);
    
    
    struct{
        char *name;
        int age;
        float score;
    } wonman;
    printf("wonman 名字 = %s \n",wonman.name);
    
    
    struct Person per2 = {"压缩", 12, 59.0};
    printf("per2 名字 = %s \n",per2.name);
    
    
    struct Person per3 = {.name = "盲僧", 12, 59.0};
    printf("per3 名字 = %s \n",per3.name);
    
    
    
    
    
    
    
    return 0;
}
