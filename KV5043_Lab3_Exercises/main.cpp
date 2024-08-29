#include <iostream>
//ToDo: Add the filestream header
//ToDo: Add the string stream header
#include "window.h"

int main(int argc, char* argv[])
{

	//ToDo: Declare an input file stream object named inputFile
		
	//ToDo: Open the inputFile object using the "windowParameters.txt" file
	
	if (/*ToDo: test the inputFile to make sure it's open*/)
	{
		std::string lineOfText;
		int xPos = 0;
		int yPos = 0;
		int width = 0;
		int height = 0;

		while (/*Use the getline() function to read a line from inputFile to the lineOfText string*/)
		{
			//Todo: Declare a stringstream object named sStream to work lineOfText string
			
			std::string windowName, strX, strY, strWidth, strHeight;
			
			/*ToDo: Use the getline() function with a delimiter to work on the sStream object and store each of the comma seperated
			* values in the file to the five string variables decclared above
			*/

			//ToDo: use the stoi() function to convert the strings to integers where required.
			
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