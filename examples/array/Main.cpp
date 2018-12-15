#include <string>
#include <iostream>
#include <iterator>
#include <algorithm>
#include <array>

int main()
{
    std::array<int, 3> a1{{1,2,3}};
    // std::array<int, 3> a2 = {4, 5, 6};
    // std::array<std::string, 2> a3 = {std::string("a"), "b"};
    std::sort(a1.begin(), a1.end());
    for (auto& s: a1)
    {
        std::cout << s << ' ';
    }
    std::cout << '\n';

    return 0;
}