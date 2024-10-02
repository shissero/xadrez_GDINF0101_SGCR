#include <GL/glut.h>

#include"iniciar_ui.h"
#include"display.h"
#include"funcao_mouse.h"

void iniciarUI(int *argc, char** argv){

	glutInit(argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);

	// Position window at (80,80)-(480,380) and give it a title.
	glutInitWindowPosition(80, 80);
	glutInitWindowSize(800, 800);
	glutCreateWindow("Xadrez");
	
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA); 
	glEnable(GL_BLEND);

	// Tell GLUT that whenever the main window needs to be repainted that it
	// should call the function display().
	glutDisplayFunc(display);
	
	glutMouseFunc(funcaoMouse);

	// Tell GLUT to start reading and processing events.  This function
	// never returns; the program only exits when the user closes the main
	// window or kills the process.
	glutMainLoop();
}
