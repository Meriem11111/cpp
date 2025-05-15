/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meabdelk <meabdelk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 01:06:18 by meriem            #+#    #+#             */
/*   Updated: 2025/04/30 09:33:43 by meabdelk         ###   ########.fr       */
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
    
    std::cout << "Assignation operator called" << std::endl;
    if(this != &org)
    {
        this->setRawBits(org.getRawBits());
    }   
    return(*this);
}


int Fixed::getRawBits( void ) const
{   
    return(this->value);
}

void Fixed::setRawBits( int const raw )
{
   this->value = raw;
}

Fixed::Fixed(const int val)
{
    std::cout << "Int constructor called" << std::endl;
    value = val << fract_bits ; 
}

Fixed::Fixed(const float nbr)
{
    std::cout << "Float constructor called" << std::endl;
     this->value = (int)roundf(nbr * (1 << fract_bits));
    
}

float Fixed::toFloat( void ) const
{
    return((float)this->value / (1 << fract_bits));   
}

int Fixed::toInt( void ) const
{
    return(this->value >> fract_bits); 
}

std::ostream &operator<<(std::ostream &out, const Fixed &c)
{
    out << c.toFloat() ;
    return(out);
}

