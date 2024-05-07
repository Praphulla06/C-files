#include <iostream>
#include <queue>


void print_queue(std::queue<int> q)
{
    while(!q.empty())
    {
        std::cout << q.front() << " ";
        q.pop();
    }
}
int main()
{
    std::queue<int> q1;

    q1.push(11);
    q1.push(124);
    q1.push(1312);
    q1.push(14);

    std::cout << "This is q1" << std::endl;
    print_queue(q1);

    std::queue<int> q2;

    q2.push(121);
    q2.push(322);
    q2.push(232);
    q2.push(924);
    q2.push(19224);

    std::cout << "\nThis is q2" << std::endl;
    print_queue(q2);

    q1.swap(q2);
    std::cout << "\nThis is q1" << std::endl;
    print_queue(q1);

    std::cout << "\nThis is q2" << std::endl;
    print_queue(q2);
    
    return 0;
}