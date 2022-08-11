//
// Created by 酷酷的辉 on 2022/5/20.
//
#include <iostream>
#include "17_Sales_item.h"
int main()
{
    Sales_item total;
    if (std::cin>>total) {
        Sales_item trans;
        while (std::cin>>trans) {
            if (total.isbn()==trans.isbn())
                total+=trans;
            else {
                std::cout<<total<<std::endl;
                total=trans;
            }
        }
        std::cout<<total<<std::endl;
    }
    else {
        std::cerr<<"No data?!"<<std::endl;
        return -1;
    }

    return 0;
}