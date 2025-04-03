/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meriem <meriem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 02:14:04 by meriem            #+#    #+#             */
/*   Updated: 2025/04/03 22:20:31 by meriem           ###   ########.fr       */
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

int isdigit(int indx)
{
    if(indx >= 0 && indx <= 9)
        return 1;
    return(0);
}

void phonebook::search() const
{
    int index;
    int i = 0;
    if(count == 0)
    {
        std::cout << " No contact available" << std::endl;
        return;
    }
    
    std::cout << "  ---------------------------------------------" << std::endl;
    
    // std::cout << std::right
    // << " | "<< BLUE << "  Index"<< RESET 
    // << " | " << BLUE << "  FirstName" << RESET 
    // << " | " << BLUE << "  LastName" << RESET 
    // << " | " << BLUE << "  NickName" << RESET 
    // << " | " <<std::endl;
    
    // std::cout << "  --------------------------------------------------" << std::endl;
    while(i < count)
    {
        std::cout << std::right << " | " << std::setw(8) << BLUE << i << RESET << " | " << std::setw(10) << trim(contacts[i].getFirst_name()) << " | " << std::setw(10) << trim(contacts[i].getLast_name()) << " | " << std::setw(10) << trim(contacts[i].getNick_name()) << " | " <<std::endl;
        i++;
    }
    std::cout << "  ---------------------------------------------" << std::endl;
    
    std::cout << GRAY <<" Enter the index of the contact you want to display : " << RESET ;
    std::cin >> index;
    if(index < 0 || index > count || isdigit(index) != 1)
    {
        std::cout << RED <<" Invalid index " << RESET << std::endl;
        return;
    }
    
    
    
}