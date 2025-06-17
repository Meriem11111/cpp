#include "Data.hpp"
#include "Serializer.hpp"

int main()
{
    Data data;
    data.num = 10;

    Data* ptr = &data;

    std::cout << "Original Address  :: " << ptr << std::endl;
    
    uintptr_t raw = Serializer::serialize(ptr);
    std::cout << "raw :: " << raw << std::endl;
    
    Data* recover = Serializer::deserialize(raw);
    std::cout << "Recover  :: " << recover << std::endl;

    std::cout << "num  :: " << recover->num << std::endl;

    if(ptr == recover)
    {
        std::cout << "Same Address"  << std::endl;
    }
    else
        std::cout << "Not Same Adress"  << std::endl;


    return 0;

}