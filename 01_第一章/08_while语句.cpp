//
// Created by 酷酷的辉 on 2022/5/20.
//
#include <iostream>
int main()
{
    int sum=0,val=1;
    // 只要val的值小于等于10，while循环就会持续执行
    while (val<=10){
        sum += val; // 将sum+val赋予sum
        ++val;
    }
    std::cout<<"Sum of 1 to 10 inclusive is "
             <<sum<<std::endl;
    return 0;
}