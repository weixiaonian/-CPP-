#include <iostream>

int main()
{
    const int ftToin = 12;
    int in{0};
    std::cout<<"enter your shengao:________\b\b\b\b\b\b\b\b";
    std::cin>>in;
    std::cout<<in/ftToin<<"ft"<<in%ftToin<<"in";

    return 0;
}