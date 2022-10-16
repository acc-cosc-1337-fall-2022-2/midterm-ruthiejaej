#include <stdio.h>
#include <iostream>
#include <stdlib.h>
bool test_config();

int main(){
    float c,fahrenheit;
    int get_fahrenheit = 1;
    
    while(get_fahrenheit)
    {

    std::cout << "Enter the value in celsius : ";
    std::cin >> c;

    fahrenheit = (9.*c/5.)+32;
    std::cout << fahrenheit;
    get_fahrenheit = 0;

}
 std::cout << "Restart? (y/n) ";
 std::cin >> get_fahrenheit;
return 0;

}