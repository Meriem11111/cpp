#include "Data.hpp"
#include "Serializer.hpp"

int main()
{
    Data data;
    data.num = 25;
    data.str = "Mrym";

    std::cout << "address bfr :: " << &data << std::endl;
    
    uintptr_t raw = Serializer::serialize(&data);
    std::cout << "raw :: " << raw << std::endl;
    
    uintptr_t recover = Serializer::serialize(raw);
    std::cout << "recover  :: " << recover << std::endl;

}