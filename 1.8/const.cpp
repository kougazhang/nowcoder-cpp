#include <iostream>
using namespace std;

int main() {
    // 常量是固定值，在程序执行期间不会改变。这些固定的值，又叫做字面量。
    // 常量可以是任何基本数据类型，可分为整数类型、浮点数字、字符、字符串和布尔值。
    //
  
   // 整数常量
   // 212 // 合法
   // 2125u // 合法，u表示无符号整数 unsigned
   // 0xFeeL // L 表示长整数Long，0x 表示十六进制，0表示八进制，不带前缀表示十进制
   // 0x4b // 十六进制
   // 0213 // 八进制
  
  // 浮点数
  //  3.1415 // 合法的
  
  // 布尔常量
  //  true // 真
  //  false // 假
    
  // 字符常量
    // 字符常量括在单引号中
    // 字符常量以L开头时，表示它是宽字符常量(L'x'), 此时它必须存在 wchar_t 类型的变量中
    // 转义序列码
    // \ \ 字符
    // ' ' 字符
    // " " 字符
    // \a 警报铃声
    // \b 退格键
    // \f 换页符
    // \n 换行符
    // \r 回车
    // \t 水平制表符
    // \v 垂直制表符
    // \ooo 一到三位的八进制数
    // \xhh ... 一个到多个数字的十六进制数
    //
    // 字符串常量
    // ""

    // 定义常量
    // 在 C++ 中，有两种简单的定义常量的方式：
    // 使用 #define 预处理器
    // 使用 const 关键字
    // 使用 const 定义的优点：会进行类型安全检查
    // #define 宏定义不仅是定义常量，也可以是函数、变量定义符等
    
    // #define 预处理器
    // #define identifier value
    #define LENGTH 10
    #define WIDTH 5
    #define NEWLINE '\n'

    int area;

    area = LENGTH * WIDTH;
    cout << area;
    cout << NEWLINE;

    // const 关键字
    // const type variable = value;

    const int LENGTH_CON = 10;
    const int WIDTH_CON = 5;
    const char NEWLINE_CON = '\n';

    area = LENGTH_CON * WIDTH_CON;
    cout << area;
    cout << NEWLINE_CON;
    return 0;
}
