//(3)通过如下的问题理解递归函数的定义与调用（递归未讲，可以后做）
//
////#include “stdio.h”
//void f(char* st, int i)
//{
//    st[i] = ’\0’;
//    cout << st;   // printf(“%s\n”,st);
//    if (i > 1) f(st, i - 1);
//}
//void main()
//{
//    char st[] = ”abcd”;
//    f(st, 4);
//}
//补充完整，运行时输出为________
#include<iostream>
using namespace std;

void f(char* st, int i)
{
    st[i] = '\0';
    cout << st;   // printf(¡°%s\n¡±,st);
    if (i > 1) f(st, i - 1);
}
void main()
{
    char st[] = "abcd";
    f(st, 4);
}
