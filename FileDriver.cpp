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
        char option;
        std::cin >> option;

        if (option == 'q')
        {
            std::cout << "Program exited" << std::endl;
            break;
        }
        else if (option == 'r')
        {
            std::cout << "Please enter file name" << std::endl;
            std::string filename;
            std::getline(std::cin, filename);
            std::cout << TKSSIS001::readInFile() << ". File name: " << filename << std::endl;
            
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
            std::cout << "Please enter file name" << std::endl;
            std::string filename;
            std::getline(std::cin, filename);
            std::cout << TKSSIS001::printTagData() << std::endl;
            
        }
        else if (option == 'm')
        {
            std::cout << TKSSIS001::displayMenu() << std::endl;
        }
        else
        {
            std::cout << "Please enter tags r, p, d, l, or q. For more explanation, enter \'m\'" << std::endl;
        }     
    }
    std::cout << "Thank you for using File Reader :)" << std::endl;
}