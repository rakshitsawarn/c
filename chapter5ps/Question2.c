// Question - 2 - Write a function to convert ftemperature degree celsius to farenheit

#include <stdio.h>
// Function Prototype
float Convertor(float);
//Function Definition
float Convertor(float temperature_in_degree_celcius){
    printf("The Temperature in Degree Farenheit is: %f",(temperature_in_degree_celcius * 9/5) + 32);
}

int main(){
    Convertor(30.00);
    return 0;
}