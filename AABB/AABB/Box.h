#include <stdlib.h>
#include <GL\glut.h>
#include <Windows.h>

#include <iostream>
class Box
{
public:
	Box();
	void draw();
	void update(float deltaTime);
	float getX();
	void setX(float x);
	float getY();
	void setY(float y);
	float getH();
	void setH(float h);
	float getW();
	void setW(float w);
	float getVx();
	void setVx(float Vx);
	float getVy();
	void setVy(float Vy);
	void setColour(float r, float g, float b);
private:
	float x,y;
	float height, width;
	float vx,vy;
	float r,g,b;
};