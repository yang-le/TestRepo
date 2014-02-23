/*
 * main.c
 *
 *  Created on: 2014年2月22日
 *      Author: yangle
 */

#include <stdio.h>
#include <gl/glut.h>

int main(int argc, char** argv)
{
    glutInit(&argc,argv);
    //显示模式初始化
    glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB|GLUT_DEPTH);
    //定义窗口大小
    glutInitWindowSize(300,300);
    //定义窗口位置
    glutInitWindowPosition(100,100);
    //创建窗口
    glutCreateWindow("helloGl");

    const char* version = (const char*)glGetString(GL_VERSION);
    printf("OpenGL 版本：%s\n", version);

    glutMainLoop();
    return 0;
}
