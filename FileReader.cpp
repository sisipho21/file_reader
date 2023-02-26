#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>
#include "FileReader.h"

std::vector<TKSSIS001::TagStruct> tagVector;


std::string TKSSIS001::readInFile(std::string fname)
{
    //opening the file using ifstream object
    std::ifstream myfile(fname);
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

        //parse sTag and sText to addToStruct so that a TagStruct object is created and added to the vector
        TKSSIS001::addToStruct(sTag, sText);

    }

    //closing the ifstream as we are done working with it
    myfile.close();
    return "readInFIle envoked";
};


void TKSSIS001::addToStruct(std::string sTag, std::string sText)
{
    int vsize = tagVector.size();
    bool found = false; //flag to check if tag already exists

    /*check through tagVector if the given tag already exists
    *if it does, increment numTags and concatenate the text string for that tag
    */
    for (int i = 0; i < vsize; i++)
    {
        if (sTag == tagVector[i].tag)
        {
            tagVector[i].numTags += 1;
            tagVector[i].text += ":"+sText;
            found = true;
        }
        
    }
    //if tag does not exist, create a new TagStruct object and add it to the vector
    if (!found)
    {
        TKSSIS001::TagStruct tagInfo;
        tagInfo.tag = sTag;
        tagInfo.numTags = 1;
        tagInfo.text = sText;

        tagVector.push_back(tagInfo);
    }
};

std::string TKSSIS001::printTagData()
{
    return "3. printTagData envoked";
};

std::string TKSSIS001::printAllData()
{
    int vsize = tagVector.size();
    std::string outString = "ALL TAGS:\n";

    for (int i = 0; i < vsize; i++)
    {
        outString += "\"" + tagVector[i].tag + "\" ," + std::to_string(tagVector[i].numTags) + ", \"" + tagVector[i].text + "\"\n" ;
    }
    
    return outString;
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