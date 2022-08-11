//
// Created by 酷酷的辉 on 2022/5/27.
//
#include <iostream>
#include <typeinfo>
int main()
{
    const int i=42;

    auto j=i;
    const auto &k=i;
    auto *p=&i;
    const auto j2=i,&k2=i;
    auto &k3=i;

    auto *k4=&i;

    const auto *k5=&i;
    const auto k6=&i;
    auto *k7=&i;
    auto k8=&i;

    std::cout<<typeid(i).name()<<std::endl;
    std::cout<<typeid(j).name()<<std::endl;
    std::cout<<typeid(k).name()<<std::endl;
    std::cout<<typeid(p).name()<<std::endl;
    std::cout<<typeid(j2).name()<<std::endl;
    std::cout<<typeid(k2).name()<<std::endl;

    return 0;
}