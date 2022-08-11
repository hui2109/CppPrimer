//
// Created by 酷酷的辉 on 2022/5/23.
//
#include <iostream>
#include <cstdlib>
int main()
{
//    double dval=4.2;
//    double *pd=&dval;
//    double *pd2=pd;
//    *pd=5.5;
//    std::cout<<*pd<<std::endl;
//    std::cout<<*pd2<<std::endl;
//
//    int *p1=nullptr;
//    int *p2=0;
//    int *p3=NULL;

    double obj=3.14;
    double *p=&obj;
    void *pv=&p;
//    void *pv=*p;
    std::cout<<p<<std::endl;
    std::cout<<pv<<std::endl;

    return 0;
}