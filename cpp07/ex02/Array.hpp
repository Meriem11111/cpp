#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template <typename T>
class Array
{
    public:
        T* array;
        unsigned int nb;
        Array()
        {
            array = NULL;
            nb = 0;
        }

        Array(unsigned int n)
        {
            array = new T[n]();
            nb = n;
        }

        Array(const Array& org) : nb(org.nb)
        {
            array = new T[nb]();
            for(unsigned int i = 0; i < nb; i++)
            {
                array[i] = org.array[i]; 
            }
        }
        Array& operator=(const Array& org) 
        {
            if(this != &org)
            {
                T* arr = new T[org.nb](); //exception-safe copying.
                for(unsigned int i = 0; i < nb; i++)
                {
                    arr[i] = org.array[i]; 
                }
                delete [] array;
                array = arr;
                nb = org.nb;
                
            }
            return(*this);
        }

        T& operator[](unsigned int index) const
        {
            if(index >= nb)
                throw std::out_of_range("out of range");
           return (array[index]);
        }

        unsigned int size() const{
            return nb;
        }
        ~Array()
        {
            delete [] array;
        }

} ;
#endif