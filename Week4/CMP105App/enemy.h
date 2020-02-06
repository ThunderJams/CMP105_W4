#pragma once
#include "Framework/GameObject.h"

class Enemy : public GameObject {

public:
	Enemy();
	~Enemy();

	void update(float dt) override;
	void setWindow(sf::RenderWindow* hwnd);

protected:
	// WINDOW component
	sf::RenderWindow* window;
};

