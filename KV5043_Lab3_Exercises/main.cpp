#include <iostream>
#include <fstream>
#include <sstream>
#include "window.h"

namespace FileParameters
{
	const std::string INPUT_FILE_NAME = "windowParameters.txt";
	const char DELIMETER = ',';
}

int main(int argc, char* argv[])
{

	std::ifstream inputFile;
		
	inputFile.open(FileParameters::INPUT_FILE_NAME);
	if (inputFile.is_open())
	{
		std::string lineOfText;
		std::string windowName;
		int xPos = 0;
		int yPos = 0;
		int width = 0;
		int height = 0;

		while (std::getline(inputFile, lineOfText))
		{
			std::stringstream sStream(lineOfText);
						
			std::string strX, strY, strWidth, strHeight;
			
			std::getline(sStream, windowName, FileParameters::DELIMETER);
			std::getline(sStream, strX, FileParameters::DELIMETER);
			std::getline(sStream, strY, FileParameters::DELIMETER);
			std::getline(sStream, strWidth, FileParameters::DELIMETER);
			std::getline(sStream, strHeight);

			xPos = stoi(strX);
			yPos = stoi(strY);
			width = stoi(strWidth);
			height = stoi(strHeight);
		}

		Window aWindow = Window(windowName, xPos, yPos, width, height);
		aWindow.Run();
		
	}
	else
	{
		std::cerr << "Couldn't open the file: " << FileParameters::INPUT_FILE_NAME << std::endl;
	}

	return 0;
}