/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meriem <meriem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 02:14:04 by meriem            #+#    #+#             */
/*   Updated: 2025/04/03 23:56:53 by meriem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"
#include "phonebook.hpp"

contact::contact()
{
    this->FirstName = "Unknown";
    this->LastName = "Unknown";
    this->Nickname = "Unknown";
    this->PhoneNumber = "Unknown";
    this->DarkestSecret = "No secret";
}

std::string contact::getFirst_name() const
{
    return(FirstName);
}

std::string contact::getLast_name() const
{
    return(LastName);
}

std::string contact::getNick_name() const
{
    return(Nickname);
}

std::string contact::getPhone_num() const
{
    return(PhoneNumber);
}

std::string contact::getDarck_secret() const
{
    return(DarkestSecret);
}

std::string trim(std::string name)
{
    if(name.length() > 10)
    {
        return(name.substr(0, 9) + ".");
    }
    return(name);
}

int isnum(const std::string& input) 
{
    if(input.empty())
        return(1);
    
    int i = 0;
    while(i < input.length())
    {
        if(std::isdigit(input[i]))
            i++;
        else
            return(1);
    }
    return(0);
}

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

void phonebook::search() const
{
    std::string input;
    int i = 0;
    
    if(count == 0)
    {
        std::cout << " No contact available" << std::endl;
        return;
    }
    std::cout << "  ---------------------------------------------" << std::endl;
    
    
    while(i < count)
    {
        std::cout << std::right << " | " << std::setw(8) << BLUE << i << RESET << " | " << std::setw(10) << trim(contacts[i].getFirst_name()) << " | " << std::setw(10) << trim(contacts[i].getLast_name()) << " | " << std::setw(10) << trim(contacts[i].getNick_name()) << " | " <<std::endl;
        i++;
    }
    std::cout << "  ---------------------------------------------" << std::endl;
    
    std::cout << GRAY <<" Enter the index of the contact you want to display : " << RESET ;
    std::getline(std::cin, input);
    if(isnum(input) != 0)
    {
        std::cout << RED << " Invalid index" << RESET << std::endl;
        return;
    }
    
    int index = std::atoi(input.c_str());
    if(index < 0 || index > count)
    {
        std::cout << RED <<" Invalid index " << RESET << std::endl;
        return;
    }
    else
    {
        std::cout << BLUE << " First Name     : " << RESET << contacts[index].getFirst_name() << std::endl;
        std::cout << BLUE << " Last Name      : " << RESET << contacts[index].getLast_name() << std::endl;
        std::cout << BLUE << " Nick Name      : " << RESET << contacts[index].getNick_name() << std::endl;
        std::cout << BLUE << " Darkest Secret : " << RESET << contacts[index].getDarck_secret() << std::endl;
        std::cout << BLUE << " Phone Number   : " << RESET << contacts[index].getPhone_num() << std::endl;
        
    }
}

