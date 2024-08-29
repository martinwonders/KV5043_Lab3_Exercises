#pragma once
#include <string>
#include <SDL.h>

/// <summary>
/// Represents a colour with red, green, blue, and alpha (transparency) components.
/// </summary>
struct Colour
{
	Uint8 red;
	Uint8 green;
	Uint8 blue;
	Uint8 alpha;
};

/// <summary>
/// A namespace that defines some common colours as constants.
/// </summary>
namespace Colours
{
	const Colour WHITE = { 255, 255, 255, 255 };
	const Colour RED = { 255, 0, 0, 255 };
	const Colour BLUE = { 0, 0, 255,  255 };
	const Colour GREEN = { 0, 255, 0, 255 };
}

class Window
{
public:
	/// <summary>
	/// Constructs a Window object with a given name, position, and size.
	/// </summary>
	/// <param name="name">The name of the window.</param>
	/// <param name="x">The x-coordinate of the window's top left position.</param>
	/// <param name="y">The y-coordinate of the window's top left position.</param>
	/// <param name="width">The width of the window.</param>
	/// <param name="height">The height of the window.</param>
	Window(std::string name, int x, int y, int width, int height);

	/// <summary>
	/// Sets the colour of the window background.
	/// </summary>
	/// <param name="windowColour">A Colour struct representing the color to set.</param>
	void SetColour(Colour windowColour);

	/// <summary>
	/// Runs the main loop of the window, updating and rendering continuously.
	/// </summary>
	void Run();

	~Window();
	
private:
	bool m_isRunning;
	SDL_Window* m_window;
	SDL_Renderer* m_renderer;
	int m_windowX;
	int m_windowY;
	int m_windowWidth;
	int m_windowHeight;
	std::string m_windowName;
	Colour m_windowColour;

	bool Initialise();
	
};