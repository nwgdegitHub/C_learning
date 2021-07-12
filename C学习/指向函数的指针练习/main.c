
#include <stdio.h>


int minus(int a, int b);
int sum(int a, int b);
int calculate(int a, int b, int (*fn)(int a, int b));


int main(int argc, const char * argv[]) {
    // insert code here...
    
    int (*fn)(int a, int b);
    fn = minus;
    int res = fn(1, 2);
    printf("res = %i \n", res);
    
    fn = sum;
    int res2 = fn(1, 2);
    printf("res2 = %i \n", res2);
    
    int res3 = calculate(1, 2, minus);
    printf("res3 = %i \n", res3);
    
    return 0;
}

int minus(int a, int b){
    return a - b;
}
int sum(int a, int b){
    return a + b;
}
int calculate(int a, int b, int (*fn)(int a, int b)){
    return fn(a, b);
}
