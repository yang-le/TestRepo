/*
 * main.c
 *
 *  Created on: 2014��2��22��
 *      Author: yangle
 */

#include <stdio.h>
#include <gl/glut.h>

int main(int argc, char** argv)
{
    glutInit(&argc,argv);
    //��ʾģʽ��ʼ��
    glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB|GLUT_DEPTH);
    //���崰�ڴ�С
    glutInitWindowSize(300,300);
    //���崰��λ��
    glutInitWindowPosition(100,100);
    //��������
    glutCreateWindow("helloGl");

    const char* version = (const char*)glGetString(GL_VERSION);
    printf("OpenGL �汾��%s\n", version);

    glutMainLoop();
    return 0;
}
