#ifndef ENGINE
#define ENGINE

#include <SFML/Graphics.hpp>
#include <stdlib.h>

/*
The structure of buffer that will be displayed to our screen
*/
// macro for kilobytes,megabytes, gigabytes
#define Kilobytes(value) (value * 1024)
#define Megabytes(value) Kilobytes(value * 1024)
#define Gigabytes(value) Megabytes(value * 1024)

namespace Engine
{
	struct TimePassed
	{
		unsigned short seconds;
		unsigned short milliseconds;
	};

	struct Key
	{
		bool is_down;
		bool was_released;
	};

	struct UserInput
	{
		Key up;
		Key down;
		Key left;
		Key right;
		Key space;
		Key q;
		Key w;
		Key e;
		Key r;
	};

	struct ObjectWithWeight
	{
		sf::CircleShape circle;
		int weight;
		int position_x;
		int position_y;
	};

	void RenderAndUpdate(sf::RenderWindow *window, UserInput *user_input, TimePassed* given_time_passed);
}

#endif
