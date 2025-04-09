/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meriem <meriem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 21:56:59 by meriem            #+#    #+#             */
/*   Updated: 2025/04/09 23:24:58 by meriem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug(void)
{
    std::cout << "[DEBUG]" << std::endl;
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
    std::cout << std::endl;
}

void Harl::info(void)
{
    std::cout << "[INFO]" << std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;     
    std::cout << std::endl;
}

void Harl::warning(void)
{
    std::cout << "[WARNING]" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl;
    std::cout << std::endl;
}

void Harl::error(void)
{
    std::cout << "[ERROR]" << std::endl;
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
    std::cout << std::endl;
}

// void levelS_call(int index)
// {
//     Harl level;
    
// }

// void Harl::complain(std::string level)
// {
//     std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};  
//     int i = 0;
//     int index = -1;
//     while(i < 4)
//     {
//         if(level.compare(levels[i]) == 0)
//         {
//             index = i;
//             break;
//         }
//         i++;
//     }
//     //  void (Harl::*ptrs[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
     
    
//    switch(index){
//     case (0):
//         Harl::debug();
//     case (1):
//         Harl::info();
//     case (2):
//         Harl::warning();
//     case (3):
//         Harl::error();
//         break;   
//     default:
//         std::cerr << "[ Probably complaining about insignificant problems ]" << std::endl;
//         break;
//    };
    
// }


void Harl::complain(std::string level)
{
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int i = 0;
    int index = -1;
    
    while (i < 4)
    {
        if (level.compare(levels[i]) == 0)
        {
            index = i;
            break;
        }
        i++;
    }

    switch (index)
    {
        case 0:
            Harl::debug();
            // fallthrough
        case 1:
            Harl::info();
            // fallthrough
        case 2:
            Harl::warning();
            // fallthrough
        case 3: 
            Harl::error();
            break;
        default:
            std::cerr << "[ Probably complaining about insignificant problems ]" << std::endl;
            break;
    }
}
