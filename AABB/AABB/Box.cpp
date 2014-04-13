#include "Box.h"

Box::Box()
{
	x= y = height= width = vx= vy =0;
}
void Box::draw()
{
	glColor3f(r,g,b);
	glBegin(GL_QUADS);
	glVertex3f(x-(width/2),y-(height/2),0);
	glVertex3f(x+(width/2),y-(height/2),0);
	glVertex3f(x+(width/2),y+(height/2),0);
	glVertex3f(x-(width/2),y+(height/2),0);
	glEnd();
}
void Box::update(float deltaTime)
{
	x += vx*deltaTime;
	y += vy*deltaTime;
}
float Box::getX()
{
	return x;
}

void Box::setX(float x)
{
	this->x = x;
}

float Box::getY()
{
	return y;
}

void Box::setY(float y)
{
	this->y = y;
}
float Box::getH()
{
	return height;
}
void Box::setH(float h)
{
	height = h;
}
float Box::getW()
{
	return width;
}
void Box::setW(float w)
{
	width = w;
}

float Box::getVx()
{
	return vx;
}
void Box::setVx(float Vx)
{
	vx = Vx;
}

float Box::getVy()
{
	return vy;
}
void Box::setVy(float Vy)
{
	vy = Vy;
}
void Box::setColour(float r, float g, float b)
{
	this->r = r;
	this->g = g;
	this->b = b;
}