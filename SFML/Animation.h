#pragma once
#include<SFML\Graphics.hpp>
class Animation
{
public:
	Animation();
	~Animation();

public:
	sf::IntRect uvRect;
private:
	sf::Vector2u imageCount;
	sf::Vector2u currentImage;

	float totalTime;
	float switchTime;

};