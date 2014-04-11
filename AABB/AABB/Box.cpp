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
int Box::getX()
{
	return x;
}

void Box::setX(int x)
{
	this->x = x;
}

int Box::getY()
{
	return y;
}

void Box::setY(int y)
{
	this->y = y;
}
int Box::getH()
{
	return height;
}
void Box::setH(int h)
{
	height = h;
}
int Box::getW()
{
	return width;
}
void Box::setW(int w)
{
	width = w;
}

int Box::getVx()
{
	return vx;
}
void Box::setVx(int Vx)
{
	vx = Vx;
}

int Box::getVy()
{
	return vy;
}
void Box::setVy(int Vy)
{
	vy = Vy;
}
void Box::setColour(float r, float g, float b)
{
	this->r = r;
	this->g = g;
	this->b = b;
}