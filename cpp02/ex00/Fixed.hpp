/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meriem <meriem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 00:32:39 by meriem            #+#    #+#             */
/*   Updated: 2025/04/12 00:51:44 by meriem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

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
};

#endif