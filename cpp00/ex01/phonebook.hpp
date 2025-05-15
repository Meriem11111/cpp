#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "contact.hpp"

class phonebook{
private:
    contact contacts[8];
    int count;
    int old_index;

public :
    phonebook();
    ~phonebook();
    void add();
    void search() const;
    void welcome();
};

# endif