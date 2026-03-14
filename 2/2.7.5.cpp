#include <iostream>

double celsiusTofahrenheit(double);

int main()
{
    double c_value{0.0};
    std::cout << "Please enter a Celsius value:";
    std::cin >> c_value;

    std::cout<<c_value<<
    " degrees Celsius is " <<celsiusTofahrenheit(c_value)<<
    " degrees Fahrenheit.";
}

double celsiusTofahrenheit(double c_value){
    return 1.8 * c_value + 32.0;
}