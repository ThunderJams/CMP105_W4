#pragma once
#include "Framework/GameObject.h"

class Player : public GameObject {

public:
	Player();
	~Player();

	void handleInput(float dt) override;

protected:
	// input component
	Input* input;
};

