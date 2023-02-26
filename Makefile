filereader: FileReader.o FileDriver.o
	g++ FileReader.o FileDriver.o -o filereader.exe

FileReader.o: FileReader.cpp FileReader.h
	g++ -c FileReader.cpp

FileDriver.o: FileDriver.cpp
	g++ -c FileDriver.cpp

clean:
	@rm -f *.o
	@rm -f *.exe