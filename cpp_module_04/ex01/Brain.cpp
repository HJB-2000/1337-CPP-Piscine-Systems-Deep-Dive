#include "Brain.hpp"


Brain::Brain() : ideas(new std::string[100]) {
    std::cout << "Brain default constructor is called!!!" << std::endl;
}

Brain::Brain(const Brain& obj){
    std::cout << "Brain copy constructor is called!!!" << std::endl;
    this->ideas = new std::string[100];
    for (int i = 0; i < 100; i++)
        this->ideas[i] = obj.ideas[i];
}

Brain& Brain::operator=(const Brain& obj) {
    if (this != &obj)
    {
        delete[] this->ideas;
        this->ideas = new std::string[100];
        for (int i = 0; i < 100; i++)
            this->ideas[i] = obj.ideas[i];
    }
    return *this;
}

Brain::~Brain()
{
    std::cout << "Brain deconstructor is called!!!" << std::endl;
    if (ideas)
        delete[] ideas;
}

static std::string toString(int value) {
    std::ostringstream oss;
    oss << value;
    return oss.str();
}

void Brain::set_ideas(){
    for (int k = 0; k < 100; k++)
        ideas[k] = "idea_" + toString(k);
}

void Brain::revil_ideas(){
    if (this->ideas[0].empty())
    {
        std::cout << "Nothing to say !!!" << std::endl;
        return ;
    }
    for (int k = 0; k < 100; k++)
        std::cout << ideas[k] << std::endl;
}