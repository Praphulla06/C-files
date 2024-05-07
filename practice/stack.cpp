#include <iostream>
#include <stack>
int main()
{
    std::stack<int> stack;

    stack.push(190);
    stack.push(132);
    stack.push(4391);
    stack.push(3936);
    stack.push(11);

    std::cout << stack.size() << std::endl;
    
    while (!stack.empty())
    {
        std::cout << stack.top() << " ";
        stack.pop();
    }

    return 0;
}