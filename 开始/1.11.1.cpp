#include <iostream>

int main()
{
    int small = 0, big = 0;
    std::cout << "please input two integers:";
    std::cin >> small >> big;

    if (small > big) {
        int tmp = small;
        small = big;
        big = tmp;
    }

    for (int i = small; i <= big; ++i)
        std::cout << i << " ";
    std::cout << std::endl;

    return 0;
}