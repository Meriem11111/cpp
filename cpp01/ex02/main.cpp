/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meriem <meriem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/06 22:34:08 by meriem            #+#    #+#             */
/*   Updated: 2025/04/06 23:35:40 by meriem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
    std::string string = "HI THIS IS BRAIN";
    
    std::string* stringPTR = &string;
    std::string& stringREF = string;
    
    std::cout << "The memory address of the string variable : " << &string << std::endl;
    std::cout << "The memory address held by stringPTR      : " << stringPTR << std::endl;
    std::cout << "The memory address held by stringREF      : " << &stringREF << std::endl;
    
    std::cout << "The value of the string variable  : " << string << std::endl;
    std::cout << "The value pointed to by stringPTR : " << *stringPTR << std::endl;
    std::cout << "The value pointed to by stringREF : " << stringREF << std::endl;
    
}
