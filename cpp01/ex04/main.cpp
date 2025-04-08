/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meriem <meriem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 16:40:38 by meriem            #+#    #+#             */
/*   Updated: 2025/04/09 00:19:04 by meriem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>




int main(int ac, char **av)
{
    if(ac == 4)
    {
        std::string filename = av[1];
        filename.append(".replace");
        std::string s1 = av[2];
        std::string s2 = av[3];
        std::string line;
        std::ifstream readfile(av[1]);
        std::ofstream outfile(filename.c_str());
        size_t index;
        
        
        if(!readfile.is_open())
        {
            std::cerr << "Failed to open the file " << std::endl;
            return 1;
        }
        
        // if(!std::getline(readfile,line ))
        //     std::cerr << "empty file " << std::endl;
        while(std::getline(readfile,line ))
        {
            index = line.find(s1);
            if(index != std::string::npos)
            {
                line.erase(index, s1.length());
                line.insert(index, s2);
                index += s2.length(); // works even without it
            }
            outfile << line ;
            if (!readfile.eof()) 
            {
                outfile << '\n'; 
            }
            else
                break;// works even without it
        }
        readfile.close();
        outfile.close();
        
        // while(std::getline(outfile,new_line ))
        // {
        //     std::cout << new_line << std::endl ;
        // }
        
        // std::cout << size_t(-1)<< std::endl;
        
        
        
        
        
    }
    else
        std::cerr << "Error args " << std::endl;
    return(0);
}
