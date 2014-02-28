/*
 * main.c
 *
 *  Created on: 2014/2/22
 *      Author: yangle
 */

#include <stdio.h>
#include <gl/glut.h>
#include "glmain.h"

void render(void)
{
	glmain();
	glutSwapBuffers();
}

int main(int argc, char** argv)
{
    glutInit(&argc,argv);

    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(300,300);
    glutInitWindowPosition(100,100);
    glutCreateWindow("helloGl");

    //调用显示函数
    glutDisplayFunc(render);
    glutIdleFunc(render);

    glutMainLoop();
    return 0;
}
