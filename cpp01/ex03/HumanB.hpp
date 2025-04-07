/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meriem <meriem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 00:21:36 by meriem            #+#    #+#             */
/*   Updated: 2025/04/07 02:24:08 by meriem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanB
{
    private:
        Weapon* weapon;
        std::string name;
    public:
        void setWeapon(Weapon &weapoon);
        HumanB(std::string name);
        void attack();
};

#endif