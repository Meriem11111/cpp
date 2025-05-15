/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meriem <meriem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 16:40:38 by meriem            #+#    #+#             */
/*   Updated: 2025/04/24 22:47:57 by meriem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int main(int ac, char **av)
{
    if(ac != 4)
        std::cerr << "Error args " << std::endl;
    std::string filename = av[1];
    std::string s1 = av[2];
    std::string s2 = av[3];
    std::string line;
    
    if (s1.empty())
    {
        std::cerr << "Error: string to replace cannot be empty." << std::endl;
        return 1;
    }
    filename.append(".replace");
    std::ifstream readfile(av[1]);
    std::ofstream outfile(filename.c_str());
    if(!readfile.is_open())
    {
        std::cerr << "Failed to open the file " << std::endl;
        return 1;
    }
    if (!outfile.is_open())
    {
        std::cerr << "Failed to create the output file " << filename << std::endl;
        return 1;
    }
    while(std::getline(readfile,line ))
    {
        size_t index = 0;
        while ((index = line.find(s1, index)) != std::string::npos)
        {
            line.erase(index, s1.length());
            line.insert(index, s2);
            index += s2.length();
        }
        outfile << line ;
        if (!readfile.eof()) 
        {
            outfile << std::endl; 
        }
        else
            break;
    }
    readfile.close();
    outfile.close();
    return(0);
}
