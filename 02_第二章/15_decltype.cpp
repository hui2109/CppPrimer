//
// Created by 酷酷的辉 on 2022/5/27.
//
#include <iostream>
int main()
{
    const int ci = 0,&cj=ci;
    decltype(ci) x=0;
    decltype(cj) y=x;

    int i=42,*p=&i,&r=i;
    decltype(r+0) b;
    decltype(*p) c=i;

    decltype((i)) d=i;
    decltype(i) e;

    return 0;
}




