
#include "contact.hpp"
#include "phonebook.hpp"

phonebook::phonebook()
{
    this->count = 0;
    this->old_index = 0;
}

void phonebook::welcome()
{
    std::cout << std::endl;
    std::cout << GREEN << " Welcome to your PhoneBook ☎️"  << RESET <<std::endl;
    std::cout << GREEN << " Enter ADD    : To Add a contact  " << RESET << std::endl;
    std::cout << GREEN <<" Enter SEARCH : To Search for a contact  " << RESET << std::endl;
    std::cout << GREEN <<" Enter EXIT   : To Quit thr PhoneBook  " << RESET << std::endl;
    std::cout << std::endl;
    
}

void contact::set_FirstName(std::string &firstname)
{
    FirstName = firstname;
}
void contact::set_LastName(std::string &lastname)
{
    LastName = lastname;
}
void contact::set_Nickname(std::string &nickname)
{
    Nickname = nickname;
}
void contact::set_DarkestSecret(std::string &darkestSecret)
{
    DarkestSecret = darkestSecret;
}
void contact::set_PhoneNumber(std::string &phoneNumber)
{
    PhoneNumber = phoneNumber;
}
 


int main(int ac, char **av)
{
    phonebook contact;
    std::string frstname;
    std::string lstname;
    std::string nname;
    std::string secret;
    std::string phone_num;
    std::string command;
    
    contact.welcome();
    while(1)
    {
        std::cout << GREEN "COMMAND : "  << RESET ;
        std::getline(std::cin, command);
        if(command.empty())
        {
            continue;
        }
        if(command.compare("ADD") == 0)
        { 
            std::cout << RED " First Name   : "  << RESET ;
            std::getline(std::cin,frstname) ;
            std::cout << RED " Last Name    : "  << RESET ;
            std::getline(std::cin,lstname );
            std::cout << RED " Nick Name    : "  << RESET ;
            std::getline(std::cin,nname );
            std::cout << RED " Darck Secret : "  << RESET ;
            std::getline(std::cin,secret );
            std::cout << RED " Phone Number : "  << RESET ;
            std::getline(std::cin,phone_num );
            contact.add(frstname, lstname, nname, phone_num, secret);
        }
        else if(command.compare("SEARCH") == 0)
            contact.search();
        else if(command.compare("EXIT") == 0)
            exit(0);
        else
        {
            std::cout << RED << "INVALID COMMAND "<< RESET << std::endl ;
        }

    }
    return(0);
}
