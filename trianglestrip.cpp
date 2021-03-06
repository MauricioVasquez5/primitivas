#include <GL/gl.h>
#include <GL/glut.h>
#include <math.h>

void display(void)
{
	
	glClear (GL_COLOR_BUFFER_BIT);
	
		glLineWidth(3);
	    glBegin(GL_TRIANGLE_STRIP);	
glColor3f (0.0, 0.0, 1.0);
 glVertex3f( -0.2f, -0.2f, 0.0f ); 
 glColor3f (0.0, 1.0, 0.0);
  glVertex3f( 0.2f, -0.2f, 0.0f ); 
  glColor3f (1.0, 0.0, 0.0);
 glVertex3f( 0.0f, 0.2f, 0.0f ); 
 glColor3f (1.0, 1.0, 0.0);
  glVertex3f( 0.4f, 0.2f, 0.0f ); 
  glColor3f (1.0, 0.0, 1.0);
  glVertex3f( 0.2f, 0.6f, 0.0f ); 
  glColor3f (0.3, 0.0, 0.0);
  glVertex3f( 0.6f, 0.6f, 0.0f ); 
 


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
