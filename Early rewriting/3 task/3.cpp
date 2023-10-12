#include<iostream>
int main(int argc, char* argv[])
{
    int f = 1;
    int a = 0;
    std::cin >> a;

    while (a > 0)
    {
        f = f * (a % 10);
        a = a / 10;
    }

    std::cout << f;
    return EXIT_SUCCESS;
}
