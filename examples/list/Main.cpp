#include <iostream>
#include <list>

int main()
{
    std::list<int> l = {1, 2, 3};

    l.push_front(22);
    l.push_back(55);

    auto it = std::find(l.begin(), l.end(), 2);
    if (it != l.end())
    {
        l.insert(it, 42);
    }

    for (int n: l)
    {
        std::cout << n << ' ';
    }
    std::cout << '\n';

    return 0;
}