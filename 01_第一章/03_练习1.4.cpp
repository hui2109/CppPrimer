//
// Created by 酷酷的辉 on 2022/5/18.
//
# include <iostream>
int main()
{
    std::cout << "Enter two numbers:" << std ::endl ;
    int v1=0,v2=0;
    std::cin>>v1>>v2;
    std::cout <<"The deviation of " <<v1<<" and " <<v2
              <<" is " <<v1/v2 << std::endl;
    return 0;
}