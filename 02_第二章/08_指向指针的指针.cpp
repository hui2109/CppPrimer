//
// Created by 酷酷的辉 on 2022/5/24.
//
#include <iostream>
int main()
{
    int ival=1024;
    int *p1=&ival;
    int **p2=&p1;
    std::cout<<p1<<std::endl;
    std::cout<<p2<<std::endl;
    std::cout<<*p1<<std::endl;
    std::cout<<**p2<<std::endl;
    std::cout<<"---------------------------"<<std::endl;

    int i=42;
    int *p;
    int *&r=p;

    r=&i;
    *r=0;
    std::cout<<i<<std::endl;
    std::cout<<u<<std::endl;

    return 0;
}