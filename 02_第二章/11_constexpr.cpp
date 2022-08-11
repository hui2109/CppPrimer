//
// Created by 酷酷的辉 on 2022/5/26.
//
#include <iostream>
int a=90;
int main()
{
    constexpr int mf = 20;
//    constexpr int *p1 = &mf;
    constexpr const int *p = &a;
    std::cout << p << std::endl;
    return 0;
}