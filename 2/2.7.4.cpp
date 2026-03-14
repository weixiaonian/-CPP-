#include <iostream>

using std::cout;
using std::cin;

void yearTomon();

int main()
{
    yearTomon();
    return 0;
}

void yearTomon(){
    int years{0};
    cout<<"Enter your age:";
    cin>>years;
    cout<<"Your age in months is "<<
    years*12<<std::endl;

}