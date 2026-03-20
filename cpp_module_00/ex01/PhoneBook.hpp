#pragma once
#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include "Contact.hpp"

class PhoneBook
{
private:
    Contact contacts[8];
    int index;
    int count;
public:
    PhoneBook();
    bool add_contact();
    void search_contact();
    ~PhoneBook();
};

#endif
