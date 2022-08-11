//
// Created by 酷酷的辉 on 2022/5/24.
//
#include <iostream>
int main()
{
    double val=3.22;
    double *p;
    std::cout<<p<<std::endl;
    p=&val;
    std::cout<<p<<std::endl;
    *p=2.45;
    std::cout<<val<<std::endl;
    return 0;
}