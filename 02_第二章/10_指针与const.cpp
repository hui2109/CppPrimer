//
// Created by 酷酷的辉 on 2022/5/25.
//
#include <iostream>
int main()
{
    const double *cp;
    double val=1.2;
    cp=&val;
    val=2.3;

    int errNumb=0;
    int *const curErr=&errNumb;
    if (*curErr) {
//        errorHandler();
        *curErr=0;
    }

    const double pi=3.13;
    const double *const pip=&pi;
//    *pip=2.72;
    int rt= 90;
    const int *const p6=&rt;

    int i=0;
    int *const p1=&i;
    const int ci =42;
    int *p2=&i;
//    p2=&i;
    const int *const p3=p2;
    std::cout<<"p2 "<<p2<<std::endl;
    std::cout<<"p3 "<<p3<<std::endl;
    const int &r=ci;
    i=ci;
//    p2=p3;

    int e=9;
    int *re=&e;
    int *ree=re;
    std::cout<<re<<std::endl;
    std::cout<<ree<<std::endl;

    const double w=9.1;
    const double *wq=&w;
//    double *yu=&w;
    double er=w;

    const int *p9=&i,*const p7=&i;
    const int *const *rty=&p7;
    const int **yui=&p9;
    std::cout<<"-----------------------"<<std::endl;
    std::cout<<p7<<std::endl;
    std::cout<<rty<<std::endl;


    return 0;
}