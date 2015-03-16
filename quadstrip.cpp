#include <GL/gl.h>
#include <GL/glut.h>
#include <math.h>

void display(void)
{
	
	glClear (GL_COLOR_BUFFER_BIT);
	
	
		
	    glBegin(GL_QUAD_STRIP);	

	 glColor3f (1.0, 0.0, 0.0);
 glVertex3f( 0.0f, 0.5f, 0.0f ); //v0
 glColor3f (0.0, 1.0, 0.0);

  glVertex3f( 0.0f, 0.0f, 0.0f ); //v1
  glColor3f (0.6, 0.7, 0.2);
  glVertex3f(0.5f, 0.5f, 0.0f ); //v2
  glColor3f (0.2, 0.1, 0.2);
  glVertex3f( 0.5f, -0.1f, 0.0f ); //v3
	glColor3f (0.0, 0.0, 1.0);
 glVertex3f(0.8f, 0.8f, 0.0f ); //v4
 glColor3f (0.2, 0.1, 0.2);
 glVertex3f( 0.8f, 0.2f, 0.0f ); //v7
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
