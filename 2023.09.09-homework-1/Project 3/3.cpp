#include<iostream>
int main(int argc, char* argv[])
{
    int n = 0;
    std::cin >> n;
    int d = ( n - 5 ) / 10;
    int c = d * ( d + 1 ) * 100 + 25;
    std::cout << c << std::endl;
    return EXIT_SUCCESS;
}