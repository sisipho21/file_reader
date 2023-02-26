#include <iostream>
#include <ifstream>
#include <string>
#include <sstring>
#include "FileReader.h"


std::string TKSSIS001::readInFile(sdt::string fname)
{
    //opening the file using ifstream object
    ifstream myfile(fname);
    if (!myfile)
    {
        return "File " + fname +" could not be opened.";
    }
    
    //reading in lines from fname and finding tags and strings
    std::string nextline;
    while (getline(myfile, nextline))
    {
        //finding positions of first occurances
        std::size_t open_angle1 = nextline.find("<") ; 
        std::size_t close_angle1 = nextline.find(">");
        std::size_t open_angle2 = nextline.find("</");

        //extracting the tag and text from each line
        std::string sTag = nextline.substr( (open_angle1 + 1), (close_angle1 - open_angle1 - 1) );
        std::string sText = nextline.substr( (close_angle1 + 1), (open_angle2 - close_angle1 - 1) );

    }

    //closing the ifstream as we are done working with it
    myfile.close();
    return "readInFIle envoked";
};


std::string TKSSIS001::addToStruct()
{
    
    return "addToStruct envoked";
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
    sOut += "d: Dump tags on data file tag.txt \n";
    sOut += "l: List tag data for given tag (include tag)\n";
    sOut += "q: Exit the program\n";
    sOut += "Please enter an option (r, p, d, l, q), and press Return/Enter";
    
    return sOut;
};