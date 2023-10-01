#include<iostream>
int main(int argc, char *argv[])
{
    long int n = 0;
    long int r = 0;
    std::cin >> n;
    while (n != 0)
    { 
        r = r * 10 + n % 10;
        n = n / 10;
    }
    std::cout << r;
    return EXIT_SUCCESS;
}
