#include <iostream>
using namespace std;

int main() {
    enum color { // color 是枚举名
        red, // red 是标识符，[=整型常数], 如果省略的话则是从 0 开始
        green=5, // 也可以指定整型常数
        blue // 则 blue 为 6
    };

    cout << color::blue;

    return 0;
}
