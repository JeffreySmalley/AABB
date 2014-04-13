#include "Box.h"

Box boxes[5];
int oldTime = 0;
void setup()
{
	glClearColor(0.0,0.0,0.0,0.0);
	boxes[0].setH(45);
	boxes[0].setW(100);
	boxes[0].setVx(-0.05);
	boxes[0].setVy(0.05);
	boxes[0].setX(1000);
	boxes[0].setY(250);
	boxes[0].setColour(1,1,1);
	boxes[1].setH(60);
	boxes[1].setW(80);
	boxes[1].setVx(-0.02);
	boxes[1].setVy(0.0);
	boxes[1].setX(70);
	boxes[1].setY(100);
	boxes[1].setColour(1,0,0);
	boxes[2].setH(50);
	boxes[2].setW(50);
	boxes[2].setVx(0.05);
	boxes[2].setVy(0.05);
	boxes[2].setX(5);
	boxes[2].setY(5);
	boxes[2].setColour(0,1,0);
	boxes[3].setH(50);
	boxes[3].setW(50);
	boxes[3].setVx(0.05);
	boxes[3].setVy(0.05);
	boxes[3].setX(5);
	boxes[3].setY(5);
	boxes[3].setColour(0,0,1);
	boxes[4].setH(50);
	boxes[4].setW(50);
	boxes[4].setVx(0.05);
	boxes[4].setVy(0.05);
	boxes[4].setX(5);
	boxes[4].setY(5);
	boxes[4].setColour(0.5,0.5,0.5);
};

void resize(int h, int w)
{
	glViewport(0, 0, (GLsizei)w, (GLsizei)h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
   
	glOrtho(0, 1024, 0, 1280, -1, 1);

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
	int timeStart = glutGet(GLUT_ELAPSED_TIME);
	int deltaTime = timeStart - oldTime;
	oldTime = timeStart;
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