#include <GL/glew.h>
#include <GL/GL.h>
#include <GL/GLU.h>
#include <GL/GLUT.h>

void display();

void init()
{
	glClearColor(0.0, 0.0, 0.0, 1);
}

int main(int argc, char **argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(0);

	glutInitWindowPosition(200, 100);
	glutInitWindowSize(500, 500);

	glutCreateWindow("Window 1");

	glutDisplayFunc(display);
	glutReshapeFunc();
	init();

	glutMainLoop();

	return 0;
}

void display()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glLoadIdentity();

	glFlush();
}