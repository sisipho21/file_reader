/*
* header file with function and struct definition
*/
#ifndef _FILE_R
#define _FILE_R

namespace TKSSIS001
{
    void addToStruct(std::string sTag, std::string sText);

    std::string readInFile(std::string fname);

    std::string printTagData(std::string tagname);

    std::string printAllData();

    std::string dumpTags();

    std::string displayMenu();

    struct TagStruct
    {
        std::string tag;
        int numTags;
        std::string text;
    };
    
}


#endif