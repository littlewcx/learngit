

#include <iostream>
#include <string>
using namespace std;

int main()
{   
    const string s = "sss";
    std::cout << "Hello World!\\"+s  <<std::endl;


    int age = 7;
    std::cout << "Hello"<<age<<"World!\\" + s << std::endl;
    char aa = 'd'; 
    int g=2;

    /*
    switch 用法:

    switch(g){
    
        case  :

            break;
        default:
     
    
    }

    
    */
    switch (g) {
        case 0:
            std::cout << "Hello" <<g<< "World!\\" + s << std::endl;
            break;
        case 1:
            std::cout << "Hello" << g << "World!\\" + s << std::endl;
            break;
        case 2:
            std::cout << "Hello" << g << "World!\\" + s << std::endl;
            break;
        default:
            std::cout << "Hello" << g << "World!\\" + s << std::endl;


    }

       
}


