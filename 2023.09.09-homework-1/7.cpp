#include<iostream>
int main(int argc, char* argv[])
{
    int n=0;
    std::cin >>n;
    int c= n+1;
    int b= n-1;
    std::cout << "The next number for the number " << n << " is " << c << "." << std::endl;
    std::cout << "The previous number for the number " << n << " is " << b << "."<< std::endl;
    return EXIT_SUCCESS;
}