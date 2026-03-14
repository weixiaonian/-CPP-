#include <iostream>

int longToma();

int main()
{
    std::cout<<longToma();
    return 0;
}

int longToma(){
    int L = 0;
    std::cout << "shuru:";
    std::cin>>L;
    return L*220;
}