#include<iostream>
int main(int argc, char *argv[])
{
    long int t = 1;
    long int s = 0;
    long int j = 0;
    long int i = 1;
    std::cin >> s;
    while (t <= s )
    {
        while (j < i && t <= s)
        {
            std::cout << i << ' ' ; j++; t++;
        }
        i++;
        j=0;
    }
    return EXIT_SUCCESS;
}
