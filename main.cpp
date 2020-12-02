//Programmed by: Flonie Mae P. Romulo

#include <GL/glut.h>
		
		void display();
		void reshape(int,int);
		void timer(int);
		
		void init()
		{
		glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
		glEnable(GL_DEPTH_TEST);
		
		}
		
		int main(int argc,char**argv)
		{
		glutInit(&argc,argv);
		glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
		glutInitDisplayMode(GLUT_RGB);
		
		glutInitWindowPosition(100,100);
		glutInitWindowSize(700,700);
		glutCreateWindow("Window");
		
		
		glutDisplayFunc(display);
		glutReshapeFunc(reshape);
		glutTimerFunc(0,timer,0);
		init();
		
		glutMainLoop();
		}
		
		
		void display()
		{
		
		
		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
		glLoadIdentity();

			
		glTranslatef(0.0f,0.0f,-8.0);
		
		glBegin(GL_QUADS);
	//F Base!
	glColor3f(1.0,0.0,1.0);
	glVertex2f(-1.0,1.0);
	glVertex2f(-1.0,-7.0);
	glVertex2f(1.0,-7.0);
	glVertex2f(1.0,1.0);
	//F lower line!
	glColor3f(1.0,0.0,1.0);
	glVertex2f(1.0,-2.0);
	glVertex2f(1.0,-4.0);
	glVertex2f(4.0,-4.0);
	glVertex2f(4.0,-2.0);
	//F Upper Line!
	glColor3f(1.0,0.0,1.0);
	glVertex2f(1.0,1.0);
	glVertex2f(1.0,-1.0);
	glVertex2f(6.0,-1.0);
	glVertex2f(6.0,1.0);

	//R Base!
	glColor3f(0.0,1.0,1.0);
	glVertex2f(8.0,1.0);
	glVertex2f(8.0,-7.0);
	glVertex2f(10.0,-7.0);
	glVertex2f(10.0,1.0);
	//R 1st curve!
	glColor3f(0.0,1.0,1.0);
	glVertex2f(10.0,1.0);
	glVertex2f(10.0,-1.0);
	glVertex2f(12.0,-1.0);
	glVertex2f(12.0,1.0);
	//R 2nd curve!
	glColor3f(0.0,1.0,1.0);
	glVertex2f(12.0,1.0);
	glVertex2f(12.0,-1.0);
	glVertex2f(15.0,-1.5);
	glVertex2f(15.0,0.0);
	//R 3rd curve!
	glColor3f(0.0,1.0,1.0);
	glVertex2f(14.5,0.0);
	glVertex2f(14.0,-1.5);
	glVertex2f(15.0,-0.25);
	glVertex2f(15.0,-1.5);

	//R 4th curve!
	glColor3f(0.0,1.0,1.0);
	glVertex2f(13.25,-0.25);
	glVertex2f(13.25,-2.5);
	glVertex2f(15,-2.5);
	glVertex2f(15.0,-1.5);

	//R 5th curve!
	glColor3f(0.0,1.0,1.0);
	glVertex2f(15.0,-2.5);
	glVertex2f(13.5,-4.0);
	glVertex2f(15,-2.5);
	glVertex2f(13,-2.5);
	//R 6th curve!
	glColor3f(0.0,1.0,1.0);
	glVertex2f(12.0,-3.0);
	glVertex2f(12.0,-5.0);
	glVertex2f(13.5,-4.0);
	glVertex2f(15.0,-2.5);
	//R 7th curve!
	glColor3f(0.0,1.0,1.0);
	glVertex2f(10.0,-3.0);
	glVertex2f(10.0,-5.0);
	glVertex2f(12.0,-5.0);
	glVertex2f(12.0,-3.0);
	//R slant Line
	glVertex2f(12.0,-5.0);
	glVertex2f(13.0,-7.0);
	glVertex2f(15.0,-7.0);
	glVertex2f(12.0,-3.0);

	glEnd();

	glutSwapBuffers();
}
		
		void reshape(int w, int h)
		{
		glViewport(0,0, (GLsizei)w, (GLsizei)h);
		glMatrixMode(GL_PROJECTION);
		glLoadIdentity();
		gluPerspective(150,1,2.0,100.0);
		glMatrixMode(GL_MODELVIEW);
		
		}
		
		void timer(int)
		{
		glutPostRedisplay();
		glutTimerFunc(1000/60,timer,0);
		
		
		
		
		}
