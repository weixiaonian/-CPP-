#include <iostream>

void printTbm();
void printSHTR();

int main()
{
    printTbm();
    printTbm();
    printSHTR();
    printSHTR();

    return 0;
}

void printTbm(){
    std::cout<<"Three blind mice"<<std::endl;
}

void printSHTR(){
    std::cout<<"See how they run"<<std::endl;
}