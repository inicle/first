#include <iostream>
#include "add.h" // 引用数学模块的头文件

int main() {
    int result = add(3, 4);
    std::cout << "3 + 4 = " << result << std::endl;
    return 0;
}