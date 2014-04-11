#include "Box.h"

Box boxes[5];
float currentTime= 0;
float previousTime;
float getTime()
{
	SYSTEMTIME st;
	GetSystemTime(&st);
	float currentSYST = st.wSecond;
	return currentSYST;
}
void setup()
{
	glClearColor(0.0,0.0,0.0,0.0);
	boxes[0].setH(5);
	boxes[0].setW(5);
	boxes[0].setVx(5);
	boxes[0].setVy(5);
	boxes[0].setX(5);
	boxes[0].setY(5);
	boxes[0].setColour(1,1,1);
	boxes[1].setH(5);
	boxes[1].setW(5);
	boxes[1].setVx(5);
	boxes[1].setVy(5);
	boxes[1].setX(5);
	boxes[1].setY(5);
	boxes[1].setColour(1,0,0);
	boxes[2].setH(5);
	boxes[2].setW(5);
	boxes[2].setVx(5);
	boxes[2].setVy(5);
	boxes[2].setX(5);
	boxes[2].setY(5);
	boxes[2].setColour(0,1,0);
	boxes[3].setH(5);
	boxes[3].setW(5);
	boxes[3].setVx(5);
	boxes[3].setVy(5);
	boxes[3].setX(5);
	boxes[3].setY(5);
	boxes[3].setColour(0,0,1);
	boxes[4].setH(5);
	boxes[4].setW(5);
	boxes[4].setVx(5);
	boxes[4].setVy(5);
	boxes[4].setX(5);
	boxes[4].setY(5);
	boxes[1].setColour(0.5,0.5,0.5);
};

void resize(int h, int w)
{
	glViewport(0, 0, (GLsizei)w, (GLsizei)h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
   
	glOrtho(0, 1280, 0, 720, -1, 1);

	glMatrixMode(GL_MODELVIEW);
};
void draw()
{
	glClear(GL_COLOR_BUFFER_BIT);
	for (int i = 0; i < 5;i++)
	{
		boxes[i].draw();
	}
	glutPostRedisplay();
	glutSwapBuffers();
}
void update()
{
	previousTime = currentTime;
	currentTime = getTime();
	float deltaTime = currentTime - previousTime;
	for (int i = 0; i < 5;i++)
	{
		boxes[i].update(deltaTime);
	}
}


int main(int argc, char **argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
	glutInitWindowSize(1280,1024);
	glutInitWindowPosition(100,50);

	glutCreateWindow("AABB");

	setup();
	
	glutReshapeFunc(resize);
	glutDisplayFunc(draw);
	glutIdleFunc(update);

	glutMainLoop();
}