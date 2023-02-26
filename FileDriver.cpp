#include <vector>   //including files that will be needed from libraries
#include <string>
#include <fstream>
#include <iostream>
#include <sstream>
#include "FileReader.h"

int main(int argc, char* argv[])
{
    std::cout << TKSSIS001::displayMenu() << std::endl;

    for (;;) //infinite loop
    {
        std::cout << "Please enter an option (r, p, d, l, q), and press Return/Enter" << std::endl;
        char option;
        std::cin >> option;

        if (option == 'q')
        {
            break;
        }
        else if (option == 'r')
        {
            std::string filename;
            std::cin >> filename;
            std::cout << TKSSIS001::readInFile(filename) << std::endl;
        }
        else if (option == 'p')
        {
            std::cout << TKSSIS001::printAllData() << std::endl;
            
        }
        else if (option == 'd')
        {
            std::cout << TKSSIS001::dumpTags() << std::endl;
            
        }
        else if (option == 'l')
        {
            std::string tagname;
            std::cin >> tagname;
            std::cout << TKSSIS001::printTagData(tagname) << std::endl;
            
        }
        else if (option == 'm') 
        {
            std::cout << TKSSIS001::displayMenu() <<  std::endl;
        }
        else
        {
            std::cout << "You have entered an invalid tag. For more explaination, enter \'m\'" <<  std::endl;
        }     
    }
    std::cout << "Thank you for using File Reader :)" << std::endl;
}