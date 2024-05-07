#include <iostream>

int main()
{
    std::string name;
    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    if (name.empty()) // Checks if name is empty or not
    {
        std::cout << "You did not enter your name!" << std::endl;
        return 1;
    }

    if (name.length() > 12) // name.length() gives the number of chracter in a string
    {
        std::cout << "Your name can't be over 12 characters!" << std::endl;
    }
    else
    {
        std::cout << "Welcome" << std::endl;
    }

    std::cout << name.at(1) << std::endl; // Gives the character at index 1


    name.append("@gmail.com"); // adds a string to the back of the string
    std::cout << name << std::endl;

    name.insert(0, "#"); // Inserts '#' at index 0
    std::cout << name << std::endl;

    std::cout << name.find(' ') << std::endl; // Finds a certain character in a string

    name.erase(0,3); // Erases characters from starting index 0 to closing index 3
    std::cout << name << std::endl;
    
    name.clear(); // Clears the string

    return 0;
}