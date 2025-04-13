/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meriem <meriem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 01:06:42 by meriem            #+#    #+#             */
/*   Updated: 2025/04/13 02:25:54 by meriem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include<cmath>

class Fixed
{
    private:
        int value;
        static const int fract_bits = 8;
    public:
        Fixed ();   
        ~Fixed();
        Fixed(const Fixed& original);
        Fixed& operator=(const Fixed& org);
        int getRawBits( void ) const;
        void setRawBits( int const raw );
        Fixed(const int val);
        Fixed(const float nbr);
        float toFloat( void ) const;
        int toInt( void ) const;

        bool operator>(const Fixed& num) const;
        bool operator<(const Fixed& num) const;
        bool operator>=(const Fixed& num) const;
        bool operator<=(const Fixed& num) const;
        bool operator==(const Fixed& num) const;
        bool operator!=(const Fixed& num) const;
        
        Fixed operator/(const Fixed& num);
        Fixed operator*(const Fixed& num);
        Fixed operator+(const Fixed& num);
        Fixed operator-(const Fixed& num);
        
        
        Fixed& operator++();
        Fixed& operator--();
        Fixed operator++(int);
        Fixed operator--(int);

        static Fixed& min(Fixed& num1, Fixed& num2);
        static const Fixed& min(const Fixed& num1, const Fixed& num2);
        
        static Fixed& max(Fixed& num1, Fixed& num2);
        static const Fixed& max(const Fixed& num1, const Fixed& num2);
        
};

std::ostream &operator<<(std::ostream &out, const Fixed &c);

#endif