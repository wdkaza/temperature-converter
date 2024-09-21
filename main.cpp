#include <iostream>


float convert(float tempC);

int main(){
    float tempC;
    float tempF;

    std::cout << "enter temperature in Celsius: ";
    std::cin >> tempC;

    tempF = convert(tempC);
    std::cout << "temperature in Fahrenheit: " << tempF;

    return 0;
}

float convert(float tempC){
    float tempF;
    tempF = tempC * (9.0f / 5.0f) + 32;
    return tempF;
}