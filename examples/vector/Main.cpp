#include <iostream>
#include <vector>

int main()
{
    // create a vector containing int
    std::vector<int> v = {1, 2, 3, 4};

    v.push_back(6);
    v.push_back(7);

    for (int n:v) {
        std::cout << n << '\n';
    }

    return 0;
}