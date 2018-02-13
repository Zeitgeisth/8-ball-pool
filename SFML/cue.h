#pragma once
#include<SFML\Graphics.hpp>
#include"ball.h"
class cue
{
private:
	sf::Texture cuetexture;
	const char *file;
	sf::Vector2f cuevelocity;
	sf::Vector2f cueposition;
	sf::Transform transform;
public:
	sf::Sprite scue;
	cue(const char * file_path, sf::Vector2f position);
	cue();

	void setPosition(Ball &b);

	void draw(sf::RenderWindow &window);


	~cue();
};

