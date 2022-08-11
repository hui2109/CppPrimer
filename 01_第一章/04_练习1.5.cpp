//
// Created by 酷酷的辉 on 2022/5/18.
//
# include <iostream>
int main()
{
    std::cout << "Enter two numbers:" << std ::endl ;
    int v1=0,v2=0;
    std::cin>>v1>>v2;
    std::cout <<"The deviation of ";
    std::cout<<v1;
    std::cout<<" and ";
    std::cout<<v2;
    std::cout<<" is ";
    std::cout<<v1/v2;
    std::cout<< std::endl;
    return 0;
}