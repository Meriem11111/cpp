/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meabdelk <meabdelk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 02:14:04 by meriem            #+#    #+#             */
/*   Updated: 2025/04/21 17:13:48 by meabdelk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"
#include "phonebook.hpp"

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

void phonebook::add()
{
    std::string frstname;
    std::string lstname;
    std::string nname;
    std::string secret;
    std::string phone_num;
    
    std::cout << RED " First Name   : "  << RESET ;
    std::getline(std::cin,frstname) ;
    if(std::cin.eof())
        exit(1);
    while(frstname.empty())
    {
        std::cout << RED " First Name   : "  << RESET ;
        std::getline(std::cin,frstname);
        if(std::cin.eof())
            exit(1);
    }
    std::cout << RED " Last Name    : "  << RESET ;
    std::getline(std::cin,lstname );
    if(std::cin.eof())
        exit(1);
    while(lstname.empty())
    {
        std::cout << RED " Last Name    : "  << RESET ;
        std::getline(std::cin,lstname );
        if(std::cin.eof())
            exit(1);
    }
    std::cout << RED " Nick Name    : "  << RESET ;
    std::getline(std::cin,nname );
    if(std::cin.eof())
        exit(1);
    while(nname.empty())
    {
        std::cout << RED " Nick Name    : "  << RESET ;
        std::getline(std::cin,nname );
        if(std::cin.eof())
            exit(1);
    }
    std::cout << RED " Darck Secret : "  << RESET ;
    std::getline(std::cin,secret);
    if(std::cin.eof())
        exit(1);
    while(secret.empty())
    {
        std::cout << RED " Darck Secret : "  << RESET ;
        std::getline(std::cin,secret);
        if(std::cin.eof())
            exit(1);
    }
    std::cout << RED " Phone Number : "  << RESET ;
    std::getline(std::cin,phone_num);
    if(std::cin.eof())
        exit(1);
    while(phone_num.empty())
    {
        std::cout << RED " Phone Number : "  << RESET ;
        std::getline(std::cin,phone_num );
        if(std::cin.eof())
            exit(1);
    }
    
    if(count < 8)
    {
        contacts[old_index].set_FirstName(frstname);
        contacts[old_index].set_LastName(lstname);
        contacts[old_index].set_Nickname(nname);
        contacts[old_index].set_PhoneNumber(phone_num);
        contacts[old_index].set_DarkestSecret(secret);
        old_index = (old_index + 1) % 8;
        count++;
    }
    else
    {
        contacts[old_index].set_FirstName(frstname);
        contacts[old_index].set_LastName(lstname);
        contacts[old_index].set_Nickname(nname);
        contacts[old_index].set_PhoneNumber(phone_num);
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
        std::cerr << " No contact available" << std::endl;
        return;
    }
    
    std::cout << "  ---------------------------------------------" << std::endl;
    while (i < count)
    {
        std::cout << std::right
                  << " | " << std::setw(8) << BLUE << i << RESET
                  << " | " << std::setw(10) << trim(contacts[i].getFirst_name())
                  << " | " << std::setw(10) << trim(contacts[i].getLast_name())
                  << " | " << std::setw(10) << trim(contacts[i].getNick_name())
                  << " | " << std::endl;
        i++;
    }
    std::cout << "  ---------------------------------------------" << std::endl;
    
    std::cout << BLUE <<" Enter the index of the contact you want to display : " << RESET ;
    std::getline(std::cin, input);
    if(std::cin.eof())
        exit(1);
    if(isnum(input) != 0)
    {
        std::cerr << RED << " Invalid index" << RESET << std::endl;
        return;
    }
    
    int index = std::atoi(input.c_str());
    if(index < 0 || index >= count)
    {
        std::cerr << RED <<" Invalid index " << RESET << std::endl;
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

