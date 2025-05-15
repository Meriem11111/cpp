/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meabdelk <meabdelk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 16:58:44 by meabdelk          #+#    #+#             */
/*   Updated: 2025/04/22 09:39:51 by meabdelk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"
#include "phonebook.hpp"

phonebook::phonebook()
{
    this->count = 0;
    this->old_index = 0;
}

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

phonebook::~phonebook()
{
}

contact::~contact()
{
}
