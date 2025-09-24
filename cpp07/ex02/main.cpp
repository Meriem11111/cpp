#include "Array.hpp"

int main() {

    Array <int> a(4) ;
    Array <int> b(4) ;

    a[1] = 1;
    
    b = a;
    b[1] = 2;
    a[1] = 5;
    
    //  std::cout << "a size = " << a.size() << std::endl;
    //  std::cout << "a size = " << a.size() << std::endl;
    for (int i = 0; i < 4; ++i) {
        
        std::cout << "a = " << a[i] << std::endl;
    }

    try{

        for (int i = 0; i < 4; ++i) {
           
           std::cout << "b = " << b[i] << std::endl;
       }
    }
    catch(const std::exception& e)
    {
      std::cout << e.what()  << std::endl;

    }
}
