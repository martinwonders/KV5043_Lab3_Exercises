#include <iostream>
#include <fstream>
#include <sstream>
#include "window.h"

int main(int argc, char* argv[])
{

	std::ifstream inputFile;
		
	inputFile.open("windowParameters.txt");
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
			
			std::getline(sStream, windowName, ',');
			std::getline(sStream, strX, ',');
			std::getline(sStream, strY, ',');
			std::getline(sStream, strWidth, ',');
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
		std::cerr << "Couldn't open the file: windowParameters.txt";
	}

	return 0;
}