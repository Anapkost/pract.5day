//вариант 2, вращение треугольника
#include <SFML/Graphics.hpp>
#include <iostream>


int main()
{
	sf::RenderWindow window(sf::VideoMode(600, 700), "Window!");

	bool rotation = 0;


	while (window.isOpen())
	{
		sf::CircleShape triangle(80, 3);
		triangle.setPosition(176, 0);
		triangle.setFillColor(Color::Green);
		window.draw(triangle);
		sf::Event event;

		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::KeyPressed)
			{
				if (event.key.code == sf::Keyboard::A) rotation = true;
				if (event.key.code == sf::Keyboard::D) rotation = false;
				break;
			}

		}

		if (rotation) rect.rotate(2);
	}

	return 0;
}