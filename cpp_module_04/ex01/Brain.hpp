#pragma once
#ifndef BRAIN_HPP
#define BRAIN_HPP
#include <iostream>
#include <string>
#include <sstream>

class Brain
{
protected:
    std::string *ideas;
public:
    Brain();
    Brain(const Brain& obj);
    Brain& operator=(const Brain& obj);
    void set_ideas();
    void revil_ideas();
    ~Brain();
};




#endif