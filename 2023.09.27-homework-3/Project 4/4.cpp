#include<iostream>
int main(int argc,char *argv[])
{
    long int a = 0;
    long int b = 0;
    long int c = 0;
    long int d = 0;
    std::cin >> a;
    std::cin >> b;
    std::cin >> c;
    std::cin >> d;
    long int x = 0;
    while (x <= 1000)
    if (a*x*x*x + b*x*x + c*x + d == 0)
    {
        std::cout << x << " "; x++;

    }
    else x++;
    return EXIT_SUCCESS;
}