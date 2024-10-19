#include"display.h"
#include"funcao_mouse.h"
#include"interface.h"

void desenharQuadrado(float x, float y, float comprimento){

	glBegin(GL_POLYGON);
		glVertex3f(x, y, 0.0);
		glVertex3f(x, y + comprimento, 0.0);
		glVertex3f(x + comprimento, y + comprimento, 0.0);
		glVertex3f(x + comprimento, y, 0.0);
	glEnd();
}

/*********************************
*
*
*
*********************************/

void iniciarUI(int *argc, char** argv){

	glutInit(argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);

	// Position window at (80,80)-(480,380) and give it a title.
	glutInitWindowPosition(80, 80);
	glutInitWindowSize(800, 800);
	glutCreateWindow("Xadrez");
	
	glEnable(GL_BLEND);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA); 

	// Tell GLUT that whenever the main window needs to be repainted that it
	// should call the function display().
	glutDisplayFunc(display);
	
	glutMouseFunc(funcaoMouse);

	// Tell GLUT to start reading and processing events.  This function
	// never returns; the program only exits when the user closes the main
	// window or kills the process.
	glutMainLoop();
}
