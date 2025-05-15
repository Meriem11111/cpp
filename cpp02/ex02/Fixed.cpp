/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meabdelk <meabdelk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 01:06:18 by meriem            #+#    #+#             */
/*   Updated: 2025/04/30 09:08:48 by meabdelk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    value = 0;
}

Fixed::~Fixed()
{
}

Fixed::Fixed(const Fixed& original)
{
    *this = original;
}

Fixed& Fixed::operator=(const Fixed& org)
{
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
    value = val << fract_bits ; 
}

Fixed::Fixed(const float nbr)
{
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



//-----------------------------------------------------------------------//

bool Fixed::operator>(const Fixed& num) const
{
    return(this->value > num.value);
}

bool Fixed::operator<(const Fixed& num) const
{
    return(this->value < num.value);
}

bool Fixed::operator>=(const Fixed& num) const
{
    return(this->value >= num.value);
}

bool Fixed::operator<=(const Fixed& num) const
{
    return(this->value <= num.value);
}

bool Fixed::operator==(const Fixed& num) const
{
    return(this->value == num.value);
}

bool Fixed::operator!=(const Fixed& num) const
{
    return(this->value != num.value);
}

//----------------------------------------------------------------------------------//

Fixed Fixed::operator/(const Fixed& num) 
{
    return (Fixed(this->toFloat() / num.toFloat()));
}

Fixed Fixed::operator*(const Fixed& num)
{
    return (Fixed((this->toFloat() * num.toFloat())));
}

Fixed Fixed::operator+(const Fixed& num)
{
    return (Fixed(this->toFloat() + num.toFloat()));
}

Fixed Fixed::operator-(const Fixed& num)
{
    return (Fixed(this->toFloat() + num.toFloat()));
}

//-------------------------------------------------------------------------------------------//

Fixed& Fixed::operator++()
{
    this->value++;
    return(*this);    
}

Fixed& Fixed::operator--()
{
    this->value--;
    return(*this);    
}

Fixed Fixed::operator++(int)
{
    Fixed temp = *this;
    this->value++;
    return(temp);    
}

Fixed Fixed::operator--(int)
{
    Fixed temp = *this;
    this->value--;
    return(temp);    
}

Fixed& Fixed::min(Fixed& num1, Fixed& num2)
{
    if(num1.value < num2.value)
        return(num1);
    else
        return(num2);
}

const Fixed& Fixed::min(const Fixed& num1, const Fixed& num2)
{
    if(num1.value < num2.value)
        return(num1);
    else
        return(num2);
}
        
Fixed& Fixed::max(Fixed& num1, Fixed& num2)
{
    if(num1.value > num2.value)
        return(num1);
    else
        return(num2);
}

const Fixed& Fixed::max(const Fixed& num1, const Fixed& num2)
{
    if(num1.value > num2.value)
        return(num1);
    else
        return(num2);
}
