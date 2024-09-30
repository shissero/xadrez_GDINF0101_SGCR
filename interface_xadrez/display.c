#include<GL/glut.h>
#include"display.h"

void display(){

	float branco[3] = { 1.0, 1.0, 1.0 };
	float vermelho[3] = { 1.0, 0.0, 0.0 };

	glClearColor(1.0, 1.0, 1.0, 1.0); 
	glClear(GL_COLOR_BUFFER_BIT);
	
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	
	glOrtho(-40.0, 40.0, -40.0, 40.0, -40.0, 40.0);
	
	glTranslatef(-40.0, -40.0, 0.0);
	
	// Draw a white grid "floor" for the tetrahedron to sit on.
 	glColor3f(1.0, 0.0, 0.0);
 	
 	
 	
 	for(int i = 0, offset = 20; i < 8; i++){

 		for(int j = 0; j < 4; j++){
 		
 			glBegin(GL_POLYGON);
 				glVertex3f(0.0, 0.0, 0.0);
 				glVertex3f(0.0, 10.0, 0.0);
 				glVertex3f(10.0, 10.0, 0.0);
 				glVertex3f(10.0, 0.0, 0.0);
 			glEnd();
 			
 			glTranslatef(offset, 0.0, 0.0);
 		}
 		
 		offset = -offset;
 		
 		glTranslatef(offset/2, 10.0, 0.0);
 	}
 	
 	
 	
 	glFlush();
}
