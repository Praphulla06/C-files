#include <iostream>

int main()
{
    // NUll value = a special value that means something has no value.
    // When a pointer is holding a null value,
    // that pointer is not pointing at anything (null pointer)

    // nullptr = keyword represents a null pointer literal

    // nullptrs are helpful when determining if an address
    // was successfully assigned to a pointer.

    int *pointer = nullptr;
    int x = 120;

    pointer = &x;

    if (pointer == nullptr)
    {
        std::cout << "Address was not assigned!" << std::endl;
    }
    else
    {
        std::cout << "Address was assigned!" << std::endl;
        std::cout << *pointer << std::endl; 
    }

    return 0;
}