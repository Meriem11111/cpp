/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meriem <meriem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 23:52:23 by meriem            #+#    #+#             */
/*   Updated: 2025/04/24 16:23:33 by meriem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    int count = 5;
    Zombie* Z = zombieHorde(count, "zombie");
    int i = 0;

    while(i < count)
    {
        Z[i].announce();
        i++;
    }
    delete[] Z;
}
