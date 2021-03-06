#include <iostream>
using namespace std;
// 变量其实只是程序可操作的存储区的名称。
// C++ 中每个变量都有指定的类型，类型决定了变量存储大小和布局，该范围内的值都可以存在内存中，运算符可应用在变量上。
//
// char 通常是一个字符（8位），这是一个整数类型
// float 单精度浮点数，1位符号，8位指数，23位小数
// double 双精度浮点数，1位符号，11位指数，52位小数
// void 表示类型缺失
// wchar_t 宽字符类型

// 变量定义
// 语法：type variable_list;
// type 必须是一个有效的 C++ 数据类型
// variable_list 可以由一个或多个标识符组成，多个标识符之间用逗号隔开


// 使用 extern 关键字声明变量
// 变量只可以被声明 1 次，但是可以被多次定义
// 声明与定义的区别：
// 声明(declaration) 不占用内存
// 定义：定义是在变量声明后，给它分配内存，可以看成 “定义=声明+内存分配”
extern int a,b;
extern int c1;
extern float f1;

// 函数声明
int func();

int main() {
    // 定义遍历
    int i,j,k;
    char c,ch;
    float f,salary;
    double d;
    // 定义变量时初始化
    int d1=3,f1=5;

     i = func();
}



// 在 C++ 中，声明和定义是分开的。
// 比如在函数声明时，提供一个函数名，而函数的实际定义则可以在任何地方进行。

int func(){
    return 0;
}

// C++ 中的左值和右值
// C++ 中有两种类型的表达式：
// 左值(lvalue): 指向内存地址的表达式被称为左值。左值可以出现在赋值符号的左边或右边。
// 右值(rvalue): 存储在内存中某些地址的数值。右值是不能对齐进行赋值的表达式。也就是说右值只能出现在赋值号的右边，但是不能出现在左边。
//
// 变量是左值，因此可以出现在赋值号的左边。
// 数值型的字面量是右值，因此不能被赋值，不能出现在赋值的左边。
