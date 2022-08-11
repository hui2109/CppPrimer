//
// Created by 酷酷的辉 on 2022/5/24.
//
#include <iostream>
int main()
{
    int i=512;
    const int &r=i;
//    r=23;
//    const int e;
//    i=512;
    extern const int u;

    const int &y=i;

    int t=42;
    const int &r1=t;
    const int &r2=r1*2;
    std::cout<<r2<<std::endl;
    return 0;
}