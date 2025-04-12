/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meriem <meriem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 01:06:42 by meriem            #+#    #+#             */
/*   Updated: 2025/04/12 01:29:08 by meriem           ###   ########.fr       */
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
};

std::ostream &operator<<(std::ostream &out, const Fixed &c);

#endif