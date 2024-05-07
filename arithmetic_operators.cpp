#include <iostream>

int main()
{
    int students;
    students = 20;
    //Addition
    students += 1;
    students += 2;
    students++;

    //Subtraction
    students -= 1;
    students -= 2;
    students--;

    //Multiplication
    students = students * 2;
    students *= 2;

    //Division
    students = students / 2;
    students /= 2;

    //Remainder
    int remainder = students % 2;

    
    return 0;
}