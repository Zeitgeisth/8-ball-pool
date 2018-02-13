#include "cue.h"
#include<iostream>
#include"Ball.h"


cue::cue(const char * file_path,sf::Vector2f position)
{
	{
		cueposition = position;
		//file = file_path;
		if (!cuetexture.loadFromFile(file_path))
		{
			std::cout << "Failed" << std::endl;
		}
		scue.setTexture(cuetexture);
		scue.setPosition(cueposition);
		scue.setScale(sf::Vector2f(0.3f, 0.3f));
	}
}

cue::cue()
{
}

void cue::setPosition(Ball & b)
{
	sf::Vector2f whitePosition = b.c.getPosition();
	scue.setPosition(whitePosition.x - 550, whitePosition.y - 50);
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::D)) {
		transform.rotate(0.1,whitePosition.x+12,whitePosition.y+12);
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::A)) {
		transform.rotate(-0.1, whitePosition.x + 11, whitePosition.y + 11);
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Space)) {
		scue.move(60.0f, 0.0f);
	}
	if (scue.getGlobalBounds().intersects(b.c.getGlobalBounds()))
		std::cout << "collided";
}

void cue::draw(sf::RenderWindow & window)
{
	window.draw(scue, transform);
}


cue::~cue()
{
}
