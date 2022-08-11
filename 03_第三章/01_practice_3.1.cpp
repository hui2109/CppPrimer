//
// Created by 酷酷的辉 on 2022/5/29.
//
#include <iostream>
#include <string>
#include "/Users/hui99563/Documents/01. 编程学习/C++/c++_code/01_C++_Primer/02_第二章/19_head_Sales_data.h"
using std::cin;
using std::cout;
using std::string;
using std::endl;
using std::cerr;
int main()
{
    Sales_data data1,data2;
    double price=0;
    cin>>data1.bookNo>>data1.units_sold>>price;
    data1.revenue=data1.units_sold*price;
    cin>>data2.bookNo>>data2.units_sold>>price;
    data2.revenue=data2.units_sold*price;

    if (data1.bookNo==data2.bookNo){
        unsigned totalCnt = data1.units_sold+data2.units_sold;
        double totalRevenue=data1.revenue+data2.revenue;

        cout<<data1.bookNo<<" "<<totalCnt
                 <<" "<<totalRevenue<<" ";
        if (totalCnt!=0)
            cout<<totalRevenue/totalCnt<<endl;
        else
            cout<<"(no sales)"<<endl;
        return 0;  //标识成功
    }
    else {
        cerr<<"Data must refer to the same ISBN"
                 <<endl;
        return -1;  //标识失败
    }
}