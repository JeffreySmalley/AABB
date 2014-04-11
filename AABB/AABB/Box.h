#include <GL\glut.h>
#include <Windows.h>
class Box
{
public:
	Box();
	void draw();
	void update(float deltaTime);
	int getX();
	void setX(int x);
	int getY();
	void setY(int y);
	int getH();
	void setH(int h);
	int getW();
	void setW(int w);
	int getVx();
	void setVx(int Vx);
	int getVy();
	void setVy(int Vy);
	void setColour(float r, float g, float b);
private:
	int x,y;
	int height, width;
	int vx,vy;
	float r,g,b;
};