#include <GL/gl.h>
#include <GL/glut.h>
#include <math.h>

void display(void)
{
	
	glClear (GL_COLOR_BUFFER_BIT);
	
	
		
	    glBegin(GL_TRIANGLE_FAN);	

	 glColor3f (1.0, 0.0, 0.0);
 glVertex3f( 0.0f, 0.0f, 0.0f ); //v0
 glColor3f (0.0, 1.0, 0.0);

  glVertex3f( 0.0f, 1.0f, 0.0f ); //v3
  glColor3f (0.6, 0.7, 0.2);
  glVertex3f(-0.3f, 0.9f, 0.0f ); //v4
  glColor3f (0.2, 0.1, 0.2);
  glVertex3f( -0.5f, 0.8f, 0.0f ); //v5
	glColor3f (0.0, 0.0, 1.0);
  glVertex3f(-0.7f, 0.4f, 0.0f ); //v6
  glColor3f (0.2, 0.1, 0.2);
  glVertex3f( -0.6f, 0.2f, 0.0f ); //v7
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
