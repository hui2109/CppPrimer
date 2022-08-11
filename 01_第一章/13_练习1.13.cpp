//
// Created by 酷酷的辉 on 2022/5/20.
//
#include <iostream>
int main()
{
    // 使用for循环重写练习1.9
    int sum_1=0;
    for (int val=50; val<=100; ++val)
        sum_1+=val;
    std::cout<<"从50加到100的和是"<<sum_1<<std::endl;

    // 使用for循环重写练习1.10
    for (int val=10;val>=0;--val)
        std::cout<<val<<" ";
    std::cout<<std::endl;

    // 使用for循环重写练习1.11
    int sum_2=0,v1=0,v2=0;
    std::cout<<"请输入两个数"<<std::endl;
    std::cin>>v1>>v2;
    if (v1>=v2) {
        for (;v2<=v1;++v2)
            std::cout<<v2<<" ";
    }
    else {
        for (;v1<=v2;++v1)
            std::cout<<v1<<" ";
    }
    std::cout<<std::endl;
    return 0;
}