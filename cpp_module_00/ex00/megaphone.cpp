#include <iostream>
#include <cctype>

int main(int ac, char **av)
{
    if (ac <= 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
        return 0;

    }
    std::string argument;
    for(int i = 1; i < ac; i++)
    {
        argument = av[i];
        for(int j = 0; j < argument.length(); j++)
        {
            std::cout << (char)toupper(argument.at(j));
        }
        if(i == (ac-1))
            std::cout << std::endl;
    }
}