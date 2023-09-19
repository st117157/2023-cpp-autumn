#include<iostream>
int main(int argc, char* argv[])
{
    int n = 0;
    int b = 0;
    std::cin >> n;
    std::cin >> b;
    int c = ( ( n * b ) % 109 + 109 ) % 109 + 1;
    std::cout << c << std::endl;
    return EXIT_SUCCESS;
}
