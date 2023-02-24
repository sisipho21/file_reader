#include <iostream>
#include "FileReader.h"

std::string TKSSIS001::addToStruct()
{
    return "addToStruct envoked";
};
std::string TKSSIS001::readInFile()
{
    return "readInFIle envoked";
};
std::string TKSSIS001::printTagData()
{
    return "3. printTagData envoked";
};
std::string TKSSIS001::printAllData()
{
    return "printaAll Data envoked";
};

std::string TKSSIS001::dumpTags()
{
    return "dumping tags invoked";
};

std::string TKSSIS001::displayMenu()
{
    std::string sOut = "Menu items: \n";
    sOut += "r: Read and process tag file (add file name) \n";
    sOut += "p: Print all tags \n";
    sOut += "d: To dump tags on data file tag.txt \n";
    sOut += "l: List tag data for given tag (include tag)\n";
    sOut += "q: Exit the program\n";
    sOut += "Please enter an option (r, p, d, l, q), and press Return/Enter";
    
    return sOut;
};