

#include <iostream>
#include <string>
#include "Cat.h"
#include <memory>
using namespace std;

int main()
{
   /* int h;
    const string s = "sss";
    std::cout << "Hello World!\\"+s  <<std::endl;

    
    std::cin >> h;

  
    int age = 7;
    std::cout << "Hello"<<age<<"World!\\" + s << std::endl;
    char aa = 'd'; 
    int g=2;
    */
    /*
    switch 用法:

    switch(g){
    
        case  :

            break;
        default:
            
            break;
    
    }

    
    */

    
    int g = 3;
    switch (g) {
        case 0:
            std::cout << "Hello" <<g<< "World!\\"  << std::endl;
            break;
        case 1:
            std::cout << "Hello" << g << "World!\\"  << std::endl;
            break;
        case 2:
            std::cout << "Hello" << g << "World!\\"  << std::endl;
            break;
        default:
            std::cout << "Hello" << g << "World!\\"  << std::endl;


    }


    for (int i = 1; i <= 9; i++) {
    
        for (int j = 1; j <= 9; j++) {
        
            std::cout << j << "*" << i << "=" << i * j<<"\t";
           
        }
    
        std::cout << "\n";
    }


    
     


    std::unique_ptr<Cat> atp;
    std::make_unique<Cat>();

   
       
    return 0;
}


