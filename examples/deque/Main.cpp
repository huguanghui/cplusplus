#include <iostream>
#include <deque>

int main()
{
    std::deque<int> d = {1, 2, 3, 4, 5, 6};

    d.push_front(13);
    d.push_back(25);

    for (int n: d)
    {
        std::cout << n << ' ';
    }
    std::cout << '\n';

    return 0;
}