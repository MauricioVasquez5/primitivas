#include <GL/gl.h>
#include <GL/glut.h>
#include <math.h>

void display(void)
{
	
	glClear (GL_COLOR_BUFFER_BIT);
	glColor3f (1.0, 1.0, 1.0);
		glLineWidth(8);
	    glBegin(GL_LINE_STRIP);//start drawing a line loop
     
       glVertex3f(0.0f, 0.0f, 0.0f);  // V0
  glVertex3f(0.3f, 0.3f, 0.0f);  // V1
  glVertex3f(0.3f, 0.6f, 0.0f);  // V2
glVertex3f(0.6f, 0.9f, 0.0f);

	glEnd();
	glFlush ();
}		
void init (void)
{
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(-1, 1, -1, 1, -1, 1);
}
int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize (800, 600);
	glutInitWindowPosition (100,100);
	glutCreateWindow ("hello");
	init();
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}
