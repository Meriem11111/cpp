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
    void add(std::string &frstname, std::string &lstname, std::string &nname, std::string &phne_num, std::string &secret);
    void search() const;
    void exit();
    void welcome();
};

# endif