/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meabdelk <meabdelk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 17:00:16 by meabdelk          #+#    #+#             */
/*   Updated: 2025/04/21 17:10:30 by meabdelk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"
#include "phonebook.hpp"

void phonebook::welcome()
{
    std::cout << std::endl;
    std::cout << GREEN << " Welcome to your PhoneBook ☎️"  << RESET <<std::endl;
    std::cout << GREEN << " Enter ADD    : To Add a contact  " << RESET << std::endl;
    std::cout << GREEN <<" Enter SEARCH : To Search for a contact  " << RESET << std::endl;
    std::cout << GREEN <<" Enter EXIT   : To Quit thr PhoneBook  " << RESET << std::endl;
    std::cout << std::endl;
    
}
 
int main(int ac, char **av)
{
    phonebook contact;
    std::string command;
    
    contact.welcome();
    while(1)
    {
        std::cout << GREEN "COMMAND : "  << RESET ;
        std::getline(std::cin, command);
        if(std::cin.eof())
            exit(1);
        if(command.empty())
            continue;
        if(command.compare("ADD") == 0)
            contact.add();
        else if(command.compare("SEARCH") == 0)
            contact.search();
        else if(command.compare("EXIT") == 0)
            exit(0);
        else
        {
            std::cerr << RED << "INVALID COMMAND "<< RESET << std::endl ;
        }

    }
    return(0);
}
