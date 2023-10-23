#include<iostream>
int main(int argc, char *argv[])
{
    int answer = 0;
    int systemanswer = 0;
    std::cin >> answer;
    std::cin >> systemanswer;
    std::cout << ((answer == 1) == (systemanswer == 1) ? "YES" : "NO");
    return EXIT_SUCCESS;
}