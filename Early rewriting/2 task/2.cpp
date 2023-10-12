#include<iostream>


int main(int argc, char* argv[])
{
    int a = 0;
    std::cin >> a;
    int b = a;

    if (a >= 0)
    {
        for(int i = 0; i < a; ++i)
        {
             std::cout << b << " ";
             b = b - 1;
        }
    }
    
    else 
    {
        for(int g = 0; g < (a * -1); ++g)
        {
            std::cout << b << " ";
            b = b + 1;
        }
    }

    return EXIT_SUCCESS;
}
