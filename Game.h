#pragma once
#include <vector>
#include "Box.h"
#include "Ball.h"

class Game
{
	Ball ball;
	Box paddle;

	// TODO #1 - Instead of storing 1 brick, store a vector of bricks (by value)
	std::vector<Box> brick;

	//Potential tracker for hits for task 5
	//A win/lose state

public:
	Game();
	bool Update();
	void Render() const;
	void Reset();
	void ResetBall();
	void CheckCollision();
};