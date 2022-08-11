//
// Created by 酷酷的辉 on 2022/5/27.
//
#include <iostream>
int main()
{
    auto i=0, *p=&i;
//    auto sz=0, pi= 3.14;

    int i1=0,&r=i;
    auto a=r;

    int i2=23;
    const int ci=i2,&cr=ci;
    auto b=ci;
    auto c=cr;
    auto d = &i2;
    auto e= &ci;
    const auto f = ci;
    auto &g=ci;

//    auto k=&ci,&k2=ci;
    auto *k1 =&ci,&k2=ci;

//    auto &h=43;
    const auto &j=42;

    auto &m=ci,*p1=&ci;

    return 0;
}