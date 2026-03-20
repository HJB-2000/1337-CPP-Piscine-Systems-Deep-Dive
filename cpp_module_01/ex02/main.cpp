#include <iostream>
#include <string>

int main()
{
    std::string var = "HI THIS IS BRAIN";
    std::string *stringPTR = &var;
    std::string &stringREF = var;
    
    std::cout << "string var         address: " << &var << std::endl;
    std::cout << "pointer to string  address: " << stringPTR << std::endl;
    std::cout << "refrence to string address: " << &stringREF << std::endl;
    
    std::cout << "string             value: " << var << std::endl;
    std::cout << "pointer to string  value: " << *stringPTR << std::endl;
    std::cout << "refrence to string value: " << stringREF << std::endl;
   
}