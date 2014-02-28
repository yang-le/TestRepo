/*
 * glmain.c
 *
 *  Created on: 2014Äê2ÔÂ28ÈÕ
 *      Author: yangle
 */

#include "glmain.h"

void glmain(void)
{
	glClearColor(0,0,0,0);
	glClear(GL_COLOR_BUFFER_BIT);

	glColor3f(0, 1, 0.5);

	glRotatef(0.1, 1, 1, 1);

	GLUquadric* obj = gluNewQuadric();
		gluQuadricDrawStyle(obj, GLU_LINE);
		gluSphere(obj, 1, 20, 20);
	gluDeleteQuadric(obj);
}
