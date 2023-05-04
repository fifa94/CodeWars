#include <string>
#include <vector>
#include <iostream>
#include <cmath>

bool narcissistic(int value)
{
    int sum = 0;
    std::vector <int> separated_values;
    std::string string_value = std::to_string(value);

    int number_of_values = string_value.length();

    for (int i = 0; i < number_of_values; i++)
    {
        separated_values.push_back((value / (int)pow(10, i) % 10));
        sum += round(pow(separated_values[i], number_of_values));
    }
    
    return (value == sum) ? true : false;
}

int main()
{
    narcissistic(153);
    return 0;
}