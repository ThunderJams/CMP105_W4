#include "enemy.h"
int goombaSpeed = 50;
int goombaSpeedy = 50;

Enemy::Enemy()
{

}

Enemy::~Enemy()
{
}

void Enemy::setWindow(sf::RenderWindow* hwnd)
{ 
	window = hwnd; 
};

void Enemy::update(float dt) {
	sf::Vector2f gp = getPosition();
	sf::Vector2u pos = window->getSize();

	if ((gp.x >= (pos.x - 50)) || (gp.x <= 0.0)) {
		goombaSpeed = -goombaSpeed;
	}

	if ((gp.y >= (pos.y - 50)) || (gp.y <= 0.0)) {
		goombaSpeedy = -goombaSpeedy;
	}

	move(goombaSpeed * dt, goombaSpeed * dt);
}
