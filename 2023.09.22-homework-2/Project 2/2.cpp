#include<iostream>
int main(int argc, char *argv[])
{
    int answer = 0;
    int systemanswer = 0;
    std::cin >> answer;
    std::cin >> systemanswer;
    if (answer == 1 && systemanswer == 1)
    {
        std::cout << "YES";
    }
    else if (answer != 1 && systemanswer != 1)
    {
        std::cout << "YES";
    }
    else
    {
        std::cout << "NO";
    }
    return EXIT_SUCCESS;
}