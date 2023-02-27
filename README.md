File Reader
-------------

File Reader is a programme that reads in command line input from the user to read in a file containing tags and output it in a readable format. Upon compilation and running the program, the user is presented with menu explaination so they know how to navigate through through File Reader until they can quit the program. 

The user enters tags which are read by the FileDriver.cpp file as follows:
    -'r' (filename): the program reads in the file and stores its details in a vector. An example of a file name is 'file1.txt' that is included in this folder
    -'p': prints all tags contained in the file
    -'d': dumps the tags in a file called 'tag.txt'. An example of this file is provided with information from testing it with the file named 'file2.txt'
    -'l' (tagname): lists information of the given tag
    -'m': to print the menu items and their explanation to the user
    -'q': to quit the program

FileDriver.cpp makes use of functions implemented in the FileReader.cpp file. Of course, these methods are declared in the header file FileReader.h. FileDriver.cpp makes use of an infinite loop which breaks when a user inputs 'q' to quit the program in the command line argument.

INCLUDED FILES

this README
Makefile
Examples of input files: <file1.txt> and <file2.txt>
Example of output dumping file: tag.txt
Source files: FileReader.h (Header file), FileReader.cpp(File with method implementations), FileDriver.cpp (File that communicates with users though I/O in the command line)


AUTHOR

File Reader was created by Sisipho Tukushe with email address tkssis001@myuct.ac.za.

INSTALLATION

To run the program, you must install a C++ compiler of your choice on your machine. On a machine running Ubuntu linux, a compiler can be installed on the terminal using the command:
    sudo apt install g++

