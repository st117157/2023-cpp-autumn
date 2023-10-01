#include<iostream>
int main(int argc, char *argv[])
{
    long int n = 0;
    long int o = 0;
    std::cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (i * i >= n)
        {
            if (i * i == n)
            o++;
            break;
        }
        if (n % i == 0)
        {
            o = o + 2;
        }
    }
    std::cout << o;
    return EXIT_SUCCESS;
}