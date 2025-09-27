// main.cpp
// 功能：调用 printWelcome 函数，输出欢迎信息

#include <iostream>
#include "welcome.h" // 注意：用双引号包含自定义头文件

using namespace std;

// 函数定义P
void printWelcome()
{
    cout << "欢迎加入IBM大家庭" << endl;
}

// 主函数
int main()
{
    printWelcome(); // 调用函数
    return 0;
}