/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meriem <meriem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 00:32:23 by meriem            #+#    #+#             */
/*   Updated: 2025/04/12 00:57:33 by meriem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    value = 0;
    std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed& original)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = original;
}

Fixed& Fixed::operator=(const Fixed& org)
{
    // std::cout << "ORG = " << &org << std::endl;
    // std::cout << "*****THIS = " << this << std::endl;
    
    std::cout << "Assignation operator called" << std::endl;
    if(this != &org)
    {
        this->setRawBits(org.getRawBits());
    }   
    return(*this);
}


int Fixed::getRawBits( void ) const
{
    std::cout << "getRawBits member function called" << std::endl;    
    return(this->value);
}

void Fixed::setRawBits( int const raw )
{
   this->value = raw;
}
