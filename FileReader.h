/**
* header file with function and struct definition
*/
#ifndef _FILE_R
#define _FILE_R

namespace TKSSIS001
{
    std::string addToStruct();

    std::string readInFile();

    std::string printTagData();

    std::string printAllData();

    std::string dumpTags();

    std::string displayMenu();

    struct TagStruct
    {
        std::string tag;
        int numTages;
        std::string text;
    };
    
}


#endif