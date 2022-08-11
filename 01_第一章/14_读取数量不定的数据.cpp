//
// Created by 酷酷的辉 on 2022/5/20.
//
#include <iostream>
int main()
{
    int sum=0,value=0;
    // 读取数据直至遇到文件尾，计算所有读入的值的和
    while (std::cin>>value)
        sum+=value;
    std::cout<<"Sum is: "<<sum<<std::endl;
    return 0;
}