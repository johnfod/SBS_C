#include <stdio.h>


// 1. 반환 값 x, 매개변수x
void func1(void) {
    printf("반환값 x, 매개변수 x\n");
}

// 2. 반환값 o, 매개변수 x
int func2(void) {
    // 반환값이 있을 때,
    // 반드시 return 작성
    printf("반환값 o, 매개변수 x\n");
    return 100;
}

// 3. 반환값x, 매개변수 o
void func3(int a, int b) {
    printf("반환값 x, 매개변수 o\n");
    printf("a + b = %d\n", a + b);
}
//4. 반환값o, 매개변수 o
int func4(int a, int b) {
    int sum = a + b;
    printf("반환값 o, 매개변수 o\n");
    return sum;
}

int main(void) {
    // 함수 호출
    // : 함수를 실행하도록 용청하는 명령
    // 1. 
    func1();

    // 2. 
    int result1 = func2();

    // 3. 
    func3(10, 20);

    // 4. 
    int result2 = func4(10, 20);

    printf("result1 : %d\n", result1);
    printf("result2 : %d\n", result2);
}