
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

// void phonebook::printContacts() const  // Corrected class name
// {
//     std::cout << "-----------------------------------------" << std::endl;
//     std::cout << "| Index | First Name | Last Name | Nickname |" << std::endl;
//     std::cout << "-----------------------------------------" << std::endl;

//     int start;
//     if (count < 8)
//         start = 0;
//     else
//         start = old_index;

//     for (int i = 0; i < count; i++)  
//     {
//         int index = (start + i) % 8; // Ensures correct circular indexing
//         std::cout << "| " << index << " | ";
//         std::cout << contacts[index].getFirst_name() << " | ";
//         std::cout << contacts[index].getLast_name() << " | ";
//         std::cout << contacts[index].getNick_name() << " |" << std::endl;
//     }
//     std::cout << "-----------------------------------------" << std::endl;
// }

 
void phonebook::add(std::string &frstname, std::string &lstname, std::string &nname, std::string &phne_num, std::string &secret)
{
    if(count < 8)
    {
        contacts[old_index].set_FirstName(frstname);
        contacts[old_index].set_LastName(lstname);
        contacts[old_index].set_Nickname(nname);
        contacts[old_index].set_PhoneNumber(phne_num);
        contacts[old_index].set_DarkestSecret(secret);
        old_index = (old_index + 1) % 8;
        count++;
    }
    else
    {
        contacts[old_index].set_FirstName(frstname);
        contacts[old_index].set_LastName(lstname);
        contacts[old_index].set_Nickname(nname);
        contacts[old_index].set_PhoneNumber(phne_num);
        contacts[old_index].set_DarkestSecret(secret);
        old_index = (old_index + 1) % 8;
    }
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
        std::cout << "1 ::" <<command << std::endl ;
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
        {
            contact.search();
            
        }
        else if(command.compare("EXIT") == 0)
        {
            std::cout << "HERRE ? "<< std::endl ;
            exit(0);
        }
        else
        {
            std::cout << "INVALID COMMAND "<< std::endl ;
            // exit(0);
        }

    }
    return(0);
}
