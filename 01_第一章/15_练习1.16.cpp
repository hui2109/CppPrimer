//
// Created by 酷酷的辉 on 2022/5/20.
//
#include <iostream>
int main()
{
    int val=0,sum=0;
    while (std::cin>>val)
        sum+=val;
    std::cout<<"和是："<<sum<<std::endl;
    return 0;
}