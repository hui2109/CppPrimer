//
// Created by 酷酷的辉 on 2022/5/20.
//
#include <iostream>
int main()
{
    int v1=0,v2=0,sum=0;
    std::cout<<"请输入两个整数，用空格分开"<<std::endl;
    std::cin>>v1>>v2;
    if (v1>=v2) {
        while (v2<=v1) {
            std::cout<<v2<<" ";
            ++v2;
        }
    }
    else {
        while (v1<=v2) {
            std::cout<<v1<<" ";
            ++v1;
        }
    }
    std::cout<<std::endl;
    return 0;
}