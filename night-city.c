#include <GL/gl.h>
#include <GL/glut.h>

void fullSky()
{

    glColor3ub(50,60,130);
    glBegin(GL_POLYGON);
    glVertex2d(0,320);
    glVertex2d(940,320);
    glColor3ub(0,0,0);
    glVertex2d(940,0);
    glVertex2d(0,0);
    glEnd();
    glFlush ();
}

void moon()
{
    int xc=455;
    int yc=350;
    int r=200;
    int p=1-r;
    int x=0;
    int y=r;
    while(x<=y)
    {
        if(p<0)
        {
            x=x+1;
            p=p+2*x+1;
        }
        else
        {
            x=x+1;
            y=y-1;
            p=p+2*(x+1)-2*(y+1);
        }

        glColor4f(1.0f, 1.0f, 1.0f, 0.0f);
        glBegin(GL_POLYGON);
        glVertex2i(x+xc,y+yc);
        glVertex2i(x+xc,-y+yc);
        glVertex2i(-x+xc,-y+yc);
        glVertex2i(-x+xc,y+yc);
        glVertex2i(y+xc,x+yc);
        glVertex2i(y+xc,-x+yc);
        glVertex2i(-y+xc,-x+yc);
        glVertex2i(-y+xc,x+yc);
        glEnd();
    }
    glFlush();
}
void leftCloud1()
{
    int xc=120;
    int yc=540;
    int r=32;
    int p=1-r;
    int x=0;
    int y=r;
    while(x<=y)
    {
        if(p<0)
        {
            x=x+1;
            p=p+2*x+1;
        }
        else
        {
            x=x+1;
            y=y-1;
            p=p+2*(x+1)-2*(y+1);
        }

        glColor4f(1.0f, 1.0f, 1.0f, 0.0f);
        glBegin(GL_POLYGON);
        glVertex2i(x+xc,y+yc);
        glVertex2i(x+xc,-y+yc);
        glVertex2i(-x+xc,-y+yc);
        glVertex2i(-x+xc,y+yc);
        glVertex2i(y+xc,x+yc);
        glVertex2i(y+xc,-x+yc);
        glVertex2i(-y+xc,-x+yc);
        glVertex2i(-y+xc,x+yc);
        glEnd();
    }
    glFlush();
}
void leftCloud2()
{
    int xc=95;
    int yc=510;
    int r=32;
    int p=1-r;
    int x=0;
    int y=r;
    while(x<=y)
    {
        if(p<0)
        {
            x=x+1;
            p=p+2*x+1;
        }
        else
        {
            x=x+1;
            y=y-1;
            p=p+2*(x+1)-2*(y+1);
        }

        glColor4f(1.0f, 1.0f, 1.0f, 0.0f);
        glBegin(GL_POLYGON);
        glVertex2i(x+xc,y+yc);
        glVertex2i(x+xc,-y+yc);
        glVertex2i(-x+xc,-y+yc);
        glVertex2i(-x+xc,y+yc);
        glVertex2i(y+xc,x+yc);
        glVertex2i(y+xc,-x+yc);
        glVertex2i(-y+xc,-x+yc);
        glVertex2i(-y+xc,x+yc);
        glEnd();
    }
    glFlush();
}
void leftCloud3()
{
    int xc=160;
    int yc=540;
    int r=32;
    int p=1-r;
    int x=0;
    int y=r;
    while(x<=y)
    {
        if(p<0)
        {
            x=x+1;
            p=p+2*x+1;
        }
        else
        {
            x=x+1;
            y=y-1;
            p=p+2*(x+1)-2*(y+1);
        }

        glColor4f(1.0f, 1.0f, 1.0f, 0.0f);
        glBegin(GL_POLYGON);
        glVertex2i(x+xc,y+yc);
        glVertex2i(x+xc,-y+yc);
        glVertex2i(-x+xc,-y+yc);
        glVertex2i(-x+xc,y+yc);
        glVertex2i(y+xc,x+yc);
        glVertex2i(y+xc,-x+yc);
        glVertex2i(-y+xc,-x+yc);
        glVertex2i(-y+xc,x+yc);
        glEnd();
    }
    glFlush();
}
void leftCloud4()
{
    int xc=170;
    int yc=500;
    int r=32;
    int p=1-r;
    int x=0;
    int y=r;
    while(x<=y)
    {
        if(p<0)
        {
            x=x+1;
            p=p+2*x+1;
        }
        else
        {
            x=x+1;
            y=y-1;
            p=p+2*(x+1)-2*(y+1);
        }

        glColor4f(1.0f, 1.0f, 1.0f, 0.0f);
        glBegin(GL_POLYGON);
        glVertex2i(x+xc,y+yc);
        glVertex2i(x+xc,-y+yc);
        glVertex2i(-x+xc,-y+yc);
        glVertex2i(-x+xc,y+yc);
        glVertex2i(y+xc,x+yc);
        glVertex2i(y+xc,-x+yc);
        glVertex2i(-y+xc,-x+yc);
        glVertex2i(-y+xc,x+yc);
        glEnd();
    }
    glFlush();
}

void leftCloud5()
{
    int xc=190;
    int yc=520;
    int r=32;
    int p=1-r;
    int x=0;
    int y=r;
    while(x<=y)
    {
        if(p<0)
        {
            x=x+1;
            p=p+2*x+1;
        }
        else
        {
            x=x+1;
            y=y-1;
            p=p+2*(x+1)-2*(y+1);
        }

        glColor4f(1.0f, 1.0f, 1.0f, 0.0f);
        glBegin(GL_POLYGON);
        glVertex2i(x+xc,y+yc);
        glVertex2i(x+xc,-y+yc);
        glVertex2i(-x+xc,-y+yc);
        glVertex2i(-x+xc,y+yc);
        glVertex2i(y+xc,x+yc);
        glVertex2i(y+xc,-x+yc);
        glVertex2i(-y+xc,-x+yc);
        glVertex2i(-y+xc,x+yc);
        glEnd();
    }
    glFlush();
}

void leftCloud6()
{
    int xc=135;
    int yc=480;
    int r=26;
    int p=1-r;
    int x=0;
    int y=r;
    while(x<=y)
    {
        if(p<0)
        {
            x=x+1;
            p=p+2*x+1;
        }
        else
        {
            x=x+1;
            y=y-1;
            p=p+2*(x+1)-2*(y+1);
        }

        glColor4f(1.0f, 1.0f, 1.0f, 0.0f);
        glBegin(GL_POLYGON);
        glVertex2i(x+xc,y+yc);
        glVertex2i(x+xc,-y+yc);
        glVertex2i(-x+xc,-y+yc);
        glVertex2i(-x+xc,y+yc);
        glVertex2i(y+xc,x+yc);
        glVertex2i(y+xc,-x+yc);
        glVertex2i(-y+xc,-x+yc);
        glVertex2i(-y+xc,x+yc);
        glEnd();
    }
    glFlush();
}

void leftCloud7()
{
    int xc=150;
    int yc=500;
    int r=26;
    int p=1-r;
    int x=0;
    int y=r;
    while(x<=y)
    {
        if(p<0)
        {
            x=x+1;
            p=p+2*x+1;
        }
        else
        {
            x=x+1;
            y=y-1;
            p=p+2*(x+1)-2*(y+1);
        }

        glColor4f(1.0f, 1.0f, 1.0f, 0.0f);
        glBegin(GL_POLYGON);
        glVertex2i(x+xc,y+yc);
        glVertex2i(x+xc,-y+yc);
        glVertex2i(-x+xc,-y+yc);
        glVertex2i(-x+xc,y+yc);
        glVertex2i(y+xc,x+yc);
        glVertex2i(y+xc,-x+yc);
        glVertex2i(-y+xc,-x+yc);
        glVertex2i(-y+xc,x+yc);
        glEnd();
    }
    glFlush();
}
void leftCloud()
{
    leftCloud1();
    leftCloud2();
    leftCloud3();
    leftCloud4();
    leftCloud5();
    leftCloud6();
    leftCloud7();
}

void rightCloud1()
{
    int xc=800;
    int yc=550;
    int r=38;
    int p=1-r;
    int x=0;
    int y=r;
    while(x<=y)
    {
        if(p<0)
        {
            x=x+1;
            p=p+2*x+1;
        }
        else
        {
            x=x+1;
            y=y-1;
            p=p+2*(x+1)-2*(y+1);
        }

        glColor4f(1.0f, 1.0f, 1.0f, 0.0f);
        glBegin(GL_POLYGON);
        glVertex2i(x+xc,y+yc);
        glVertex2i(x+xc,-y+yc);
        glVertex2i(-x+xc,-y+yc);
        glVertex2i(-x+xc,y+yc);
        glVertex2i(y+xc,x+yc);
        glVertex2i(y+xc,-x+yc);
        glVertex2i(-y+xc,-x+yc);
        glVertex2i(-y+xc,x+yc);
        glEnd();
    }
    glFlush();
}
void rightCloud2()
{
    int xc=850;
    int yc=550;
    int r=20;
    int p=1-r;
    int x=0;
    int y=r;
    while(x<=y)
    {
        if(p<0)
        {
            x=x+1;
            p=p+2*x+1;
        }
        else
        {
            x=x+1;
            y=y-1;
            p=p+2*(x+1)-2*(y+1);
        }

        glColor4f(1.0f, 1.0f, 1.0f, 0.0f);
        glBegin(GL_POLYGON);
        glVertex2i(x+xc,y+yc);
        glVertex2i(x+xc,-y+yc);
        glVertex2i(-x+xc,-y+yc);
        glVertex2i(-x+xc,y+yc);
        glVertex2i(y+xc,x+yc);
        glVertex2i(y+xc,-x+yc);
        glVertex2i(-y+xc,-x+yc);
        glVertex2i(-y+xc,x+yc);
        glEnd();
    }
    glFlush();
}
void rightCloud3()
{
    int xc=750;
    int yc=550;
    int r=30;
    int p=1-r;
    int x=0;
    int y=r;
    while(x<=y)
    {
        if(p<0)
        {
            x=x+1;
            p=p+2*x+1;
        }
        else
        {
            x=x+1;
            y=y-1;
            p=p+2*(x+1)-2*(y+1);
        }

        glColor4f(1.0f, 1.0f, 1.0f, 0.0f);
        glBegin(GL_POLYGON);
        glVertex2i(x+xc,y+yc);
        glVertex2i(x+xc,-y+yc);
        glVertex2i(-x+xc,-y+yc);
        glVertex2i(-x+xc,y+yc);
        glVertex2i(y+xc,x+yc);
        glVertex2i(y+xc,-x+yc);
        glVertex2i(-y+xc,-x+yc);
        glVertex2i(-y+xc,x+yc);
        glEnd();
    }
    glFlush();
}
void rightCloud4()
{
    int xc=800;
    int yc=510;
    int r=38;
    int p=1-r;
    int x=0;
    int y=r;
    while(x<=y)
    {
        if(p<0)
        {
            x=x+1;
            p=p+2*x+1;
        }
        else
        {
            x=x+1;
            y=y-1;
            p=p+2*(x+1)-2*(y+1);
        }

        glColor4f(1.0f, 1.0f, 1.0f, 0.0f);
        glBegin(GL_POLYGON);
        glVertex2i(x+xc,y+yc);
        glVertex2i(x+xc,-y+yc);
        glVertex2i(-x+xc,-y+yc);
        glVertex2i(-x+xc,y+yc);
        glVertex2i(y+xc,x+yc);
        glVertex2i(y+xc,-x+yc);
        glVertex2i(-y+xc,-x+yc);
        glVertex2i(-y+xc,x+yc);
        glEnd();
    }
    glFlush();
}
void rightCloud5()
{
    int xc=737;
    int yc=510;
    int r=30;
    int p=1-r;
    int x=0;
    int y=r;
    while(x<=y)
    {
        if(p<0)
        {
            x=x+1;
            p=p+2*x+1;
        }
        else
        {
            x=x+1;
            y=y-1;
            p=p+2*(x+1)-2*(y+1);
        }

        glColor4f(1.0f, 1.0f, 1.0f, 0.0f);
        glBegin(GL_POLYGON);
        glVertex2i(x+xc,y+yc);
        glVertex2i(x+xc,-y+yc);
        glVertex2i(-x+xc,-y+yc);
        glVertex2i(-x+xc,y+yc);
        glVertex2i(y+xc,x+yc);
        glVertex2i(y+xc,-x+yc);
        glVertex2i(-y+xc,-x+yc);
        glVertex2i(-y+xc,x+yc);
        glEnd();
    }
    glFlush();
}
void rightCloud6()
{
    int xc=850;
    int yc=510;
    int r=35;
    int p=1-r;
    int x=0;
    int y=r;
    while(x<=y)
    {
        if(p<0)
        {
            x=x+1;
            p=p+2*x+1;
        }
        else
        {
            x=x+1;
            y=y-1;
            p=p+2*(x+1)-2*(y+1);
        }

        glColor4f(1.0f, 1.0f, 1.0f, 0.0f);
        glBegin(GL_POLYGON);
        glVertex2i(x+xc,y+yc);
        glVertex2i(x+xc,-y+yc);
        glVertex2i(-x+xc,-y+yc);
        glVertex2i(-x+xc,y+yc);
        glVertex2i(y+xc,x+yc);
        glVertex2i(y+xc,-x+yc);
        glVertex2i(-y+xc,-x+yc);
        glVertex2i(-y+xc,x+yc);
        glEnd();
    }
    glFlush();
}
void rightCloud7()
{
    int xc=710;
    int yc=540;
    int r=20;
    int p=1-r;
    int x=0;
    int y=r;
    while(x<=y)
    {
        if(p<0)
        {
            x=x+1;
            p=p+2*x+1;
        }
        else
        {
            x=x+1;
            y=y-1;
            p=p+2*(x+1)-2*(y+1);
        }

        glColor4f(1.0f, 1.0f, 1.0f, 0.0f);
        glBegin(GL_POLYGON);
        glVertex2i(x+xc,y+yc);
        glVertex2i(x+xc,-y+yc);
        glVertex2i(-x+xc,-y+yc);
        glVertex2i(-x+xc,y+yc);
        glVertex2i(y+xc,x+yc);
        glVertex2i(y+xc,-x+yc);
        glVertex2i(-y+xc,-x+yc);
        glVertex2i(-y+xc,x+yc);
        glEnd();
    }
    glFlush();
}

void rightCloud()
{
    rightCloud1();
    rightCloud2();
    rightCloud3();
    rightCloud4();
    rightCloud5();
    rightCloud6();
    rightCloud7();
}

void lake()
{
    glColor3ub(19,17,96);
    glBegin(GL_POLYGON);
    glVertex2d (0,0);
    glVertex2d (380,320);
    glVertex2d (380,320);
    glVertex2d (540,320);
    glVertex2d (540,320);
    glVertex2d (940,0);
    glVertex2d (940,0);
    glVertex2d (0,0);
    glEnd();

    glFlush ();
}

void lakeWaterLines()
{
    glColor4f(1.0f, 1.0f, 1.0f, 0.0f);
    glBegin(GL_LINES);
    glVertex2d (380,300);
    glVertex2d (520,300);
    glVertex2d (370,290);
    glVertex2d (530,290);
    glVertex2d (380,280);
    glVertex2d (520,280);
    glVertex2d (385,275);
    glVertex2d (515,275);
    glVertex2d (390,270);
    glVertex2d (510,270);
    glVertex2d (370,275);
    glVertex2d (535,275);
    glVertex2d (340,265);
    glVertex2d (560,265);
    glVertex2d (380,260);
    glVertex2d (520,260);
    glVertex2d (385,255);
    glVertex2d (515,255);
    glVertex2d (390,250);
    glVertex2d (510,250);
    glVertex2d (395,245);
    glVertex2d (505,245);
    glVertex2d (400,240);
    glVertex2d (500,240);
    glVertex2d (405,235);
    glVertex2d (495,235);
    glVertex2d (370,230);
    glVertex2d (530,230);
    glVertex2d (405,200);
    glVertex2d (495,200);
    glVertex2d (400,195);
    glVertex2d (500,195);
    glVertex2d (395,190);
    glVertex2d (505,190);
    glVertex2d (350,185);
    glVertex2d (550,185);
    glVertex2d (385,180);
    glVertex2d (515,180);
    glVertex2d (380,175);
    glVertex2d (520,175);
    glVertex2d (375,170);
    glVertex2d (525,170);
    glEnd();

    glFlush ();
}

void leftRoad()
{
    glColor3f(0.0f, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
    glVertex2d (0,0);
    glVertex2d (380,320);
    glVertex2d (380,320);
    glVertex2d (300,320);
    glVertex2d (300,320);
    glVertex2d (0,80);
    glVertex2d (0,80);
    glVertex2d (0,0);
    glEnd();

    glFlush ();
}

void rightRoad()
{

    glColor3f(0.0f, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
    glVertex2d (940,0);
    glVertex2d (940,80);
    glVertex2d (940,80);
    glVertex2d (620,320);
    glVertex2d (620,320);
    glVertex2d (520,320);
    glVertex2d (520,320);
    glVertex2d (940,0);
    glEnd();

    glFlush ();
}

void boat()
{
    glColor3f(0.0f, 0.0f, 0.0f);
    glBegin(GL_POLYGON);

    //boat mid
    glVertex2d (300,60);
    glVertex2d (420,60);
    glVertex2d (420,60);
    glVertex2d (420,100);
    glVertex2d (420,100);
    glVertex2d (300,100);
    glVertex2d (300,100);
    glVertex2d (300,60);

    //boat left
    glVertex2d (300,60);
    glVertex2d (300,100);
    glVertex2d (300,100);
    glVertex2d (240,120);
    glVertex2d (240,120);
    glVertex2d (300,60);

    //boat right
    glVertex2d (420,60);
    glVertex2d (480,120);
    glVertex2d (480,120);
    glVertex2d (420,100);
    glVertex2d (420,100);
    glVertex2d (420,60);
    glEnd();

    glFlush ();
}

void boatmanHead()
{
    int xc=300;
    int yc=125;
    int r=5;
    int p=1-r;
    int x=0;
    int y=r;
    while(x<=y)
    {
        if(p<0)
        {
            x=x+1;
            p=p+2*x+1;
        }
        else
        {
            x=x+1;
            y=y-1;
            p=p+2*(x+1)-2*(y+1);
        }

        glColor4f(1.0f, 1.0f, 1.0f, 0.0f);
        glBegin(GL_POLYGON);
        glVertex2i(x+xc,y+yc);
        glVertex2i(x+xc,-y+yc);
        glVertex2i(-x+xc,-y+yc);
        glVertex2i(-x+xc,y+yc);
        glVertex2i(y+xc,x+yc);
        glVertex2i(y+xc,-x+yc);
        glVertex2i(-y+xc,-x+yc);
        glVertex2i(-y+xc,x+yc);
        glEnd();
    }
    glFlush();
}

void boatman1st()
{
    int xc=300;
    int yc=114;
    int r=5;
    int p=1-r;
    int x=0;
    int y=r;
    while(x<=y)
    {
        if(p<0)
        {
            x=x+1;
            p=p+2*x+1;
        }
        else
        {
            x=x+1;
            y=y-1;
            p=p+2*(x+1)-2*(y+1);
        }

        glColor4f(1.0f, 1.0f, 1.0f, 0.0f);
        glBegin(GL_POLYGON);
        glVertex2i(x+xc,y+yc);
        glVertex2i(x+xc,-y+yc);
        glVertex2i(-x+xc,-y+yc);
        glVertex2i(-x+xc,y+yc);
        glVertex2i(y+xc,x+yc);
        glVertex2i(y+xc,-x+yc);
        glVertex2i(-y+xc,-x+yc);
        glVertex2i(-y+xc,x+yc);
        glEnd();
    }
    glFlush();
}
void boatman2nd()
{
    int xc=300;
    int yc=110;
    int r=5;
    int p=1-r;
    int x=0;
    int y=r;
    while(x<=y)
    {
        if(p<0)
        {
            x=x+1;
            p=p+2*x+1;
        }
        else
        {
            x=x+1;
            y=y-1;
            p=p+2*(x+1)-2*(y+1);
        }

        glColor4f(1.0f, 1.0f, 1.0f, 0.0f);
        glBegin(GL_POLYGON);
        glVertex2i(x+xc,y+yc);
        glVertex2i(x+xc,-y+yc);
        glVertex2i(-x+xc,-y+yc);
        glVertex2i(-x+xc,y+yc);
        glVertex2i(y+xc,x+yc);
        glVertex2i(y+xc,-x+yc);
        glVertex2i(-y+xc,-x+yc);
        glVertex2i(-y+xc,x+yc);
        glEnd();
    }
    glFlush();
}
void boatman3rd()
{
    int xc=300;
    int yc=108;
    int r=5;
    int p=1-r;
    int x=0;
    int y=r;
    while(x<=y)
    {
        if(p<0)
        {
            x=x+1;
            p=p+2*x+1;
        }
        else
        {
            x=x+1;
            y=y-1;
            p=p+2*(x+1)-2*(y+1);
        }

        glColor4f(1.0f, 1.0f, 1.0f, 0.0f);
        glBegin(GL_POLYGON);
        glVertex2i(x+xc,y+yc);
        glVertex2i(x+xc,-y+yc);
        glVertex2i(-x+xc,-y+yc);
        glVertex2i(-x+xc,y+yc);
        glVertex2i(y+xc,x+yc);
        glVertex2i(y+xc,-x+yc);
        glVertex2i(-y+xc,-x+yc);
        glVertex2i(-y+xc,x+yc);
        glEnd();
    }
    glFlush();
}

void boatman4th()
{
    int xc=300;
    int yc=105;
    int r=5;
    int p=1-r;
    int x=0;
    int y=r;
    while(x<=y)
    {
        if(p<0)
        {
            x=x+1;
            p=p+2*x+1;
        }
        else
        {
            x=x+1;
            y=y-1;
            p=p+2*(x+1)-2*(y+1);
        }

        glColor4f(1.0f, 1.0f, 1.0f, 0.0f);
        glBegin(GL_POLYGON);
        glVertex2i(x+xc,y+yc);
        glVertex2i(x+xc,-y+yc);
        glVertex2i(-x+xc,-y+yc);
        glVertex2i(-x+xc,y+yc);
        glVertex2i(y+xc,x+yc);
        glVertex2i(y+xc,-x+yc);
        glVertex2i(-y+xc,-x+yc);
        glVertex2i(-y+xc,x+yc);
        glEnd();
    }
    glFlush();
}

void boatman()
{
    boatmanHead();
    boatman1st();
    boatman2nd();
    boatman3rd();
    boatman4th();

}

void cityBuildingLines()
{
    //glColor4f(1.0f, 1.0f, 1.0f, 0.0f);
    glColor3f(1.0f, 0.5f, 0.0f);
    //top 1 border
    glBegin(GL_LINES);
    glVertex2d (380,320);
    glVertex2d (380,480);
    glVertex2d (380,480);
    glVertex2d (320,440);
    glVertex2d (320,440);
    glVertex2d (320,320);
    glEnd();

    //top 2 border
    glBegin(GL_LINES);
    glVertex2d (220,240);
    glVertex2d (220,380);
    glVertex2d (220,380);
    glVertex2d (260,400);
    glVertex2d (260,400);
    glVertex2d (260,260);
    glVertex2d (260,400);
    glVertex2d (260,420);
    glVertex2d (260,420);
    glVertex2d (300,420);
    glVertex2d (300,420);
    glVertex2d (300,260);
    glVertex2d (300,420);
    glVertex2d (320,400);
    glVertex2d (300,400);
    glVertex2d (320,380);
    glVertex2d (300,380);
    glVertex2d (320,360);
    glVertex2d (300,360);
    glVertex2d (320,340);
    glVertex2d (260,400);
    glVertex2d (300,400);
    glVertex2d (260,380);
    glVertex2d (300,380);
    glVertex2d (260,360);
    glVertex2d (300,360);
    glVertex2d (260,340);
    glVertex2d (300,340);
    glVertex2d (260,320);
    glVertex2d (300,320);
    glVertex2d (220,360);
    glVertex2d (260,380);
    glVertex2d (220,340);
    glVertex2d (260,360);
    glVertex2d (220,340);
    glVertex2d (260,360);
    glVertex2d (220,320);
    glVertex2d (260,340);
    glVertex2d (220,300);
    glVertex2d (260,320);
    glEnd();

    //additional building lines
    glBegin(GL_LINES);
    glVertex2d (120,320);
    glVertex2d (120,380);
    glVertex2d (120,380);
    glVertex2d (160,420);
    glVertex2d (160,420);
    glVertex2d (210,420);
    glVertex2d (210,420);
    glVertex2d (210,220);
    glVertex2d (160,420);
    glVertex2d (160,200);
    glVertex2d (160,400);
    glVertex2d (210,400);
    glVertex2d (160,380);
    glVertex2d (210,380);
    glVertex2d (160,360);
    glVertex2d (210,360);
    glVertex2d (160,340);
    glVertex2d (210,340);
    glVertex2d (160,300);
    glVertex2d (210,300);
    glVertex2d (160,260);
    glVertex2d (210,260);
    glVertex2d (120,360);
    glVertex2d (160,400);
    glVertex2d (120,340);
    glVertex2d (160,380);
    glVertex2d (120,320);
    glVertex2d (160,360);
    glVertex2d (90,260);
    glVertex2d (90,320);
    glVertex2d (90,320);
    glVertex2d (140,320);
    glVertex2d (140,320);
    glVertex2d (140,140);
    glVertex2d (20,80);
    glVertex2d (20,240);
    glVertex2d (20,240);
    glVertex2d (60,280);
    glVertex2d (60,280);
    glVertex2d (60,100);
    glVertex2d (60,260);
    glVertex2d (100,260);
    glVertex2d (100,260);
    glVertex2d (100,120);
    glVertex2d (60,240);
    glVertex2d (100,240);
    glVertex2d (60,220);
    glVertex2d (100,220);
    glVertex2d (60,200);
    glVertex2d (100,200);
    glVertex2d (60,180);
    glVertex2d (100,180);
    glVertex2d (320,420);
    glVertex2d (380,460);
    glVertex2d (320,400);
    glVertex2d (380,440);
    glVertex2d (320,380);
    glVertex2d (380,420);
    glVertex2d (320,360);
    glVertex2d (380,400);
    glVertex2d (20,220);
    glVertex2d (60,260);
    glVertex2d (20,200);
    glVertex2d (60,240);
    glVertex2d (20,180);
    glVertex2d (60,220);
    glVertex2d (20,160);
    glVertex2d (60,200);
    glVertex2d (20,140);
    glVertex2d (60,180);
    glVertex2d (90,300);
    glVertex2d (140,300);
    glVertex2d (90,280);
    glVertex2d (140,280);
    glVertex2d (320,340);
    glVertex2d (380,380);
    glVertex2d (350,460);
    glVertex2d (350,340);
    glVertex2d (120,260);
    glVertex2d (140,260);
    glVertex2d (120,240);
    glVertex2d (140,240);
    glVertex2d (120,220);
    glVertex2d (140,220);
    glVertex2d (120,200);
    glVertex2d (140,200);
    glVertex2d (120,180);
    glVertex2d (140,180);
    glVertex2d (120,260);
    glVertex2d (120,160);
    glEnd();

    glFlush ();

}
void leftCityBuilding()
{
    glColor3f(0.0f, 0.0f, 0.0f);
    //top 1
    glBegin(GL_POLYGON);
    glVertex2d (320,320);
    glVertex2d (380,320);
    glVertex2d (380,320);
    glVertex2d (380,480);
    glVertex2d (380,480);
    glVertex2d (320,440);
    glVertex2d (320,440);
    glVertex2d (320,320);
    glEnd();

    //top 2 right
    glBegin(GL_POLYGON);
    glVertex2d (300,320);
    glVertex2d (320,300);
    glVertex2d (320,300);
    glVertex2d (320,400);
    glVertex2d (320,400);
    glVertex2d (300,420);
    glVertex2d (300,120);
    glVertex2d (300,320);
    glEnd();

    //top 2 mid
    glBegin(GL_POLYGON);
    glVertex2d (260,260);
    glVertex2d (300,260);
    glVertex2d (300,260);
    glVertex2d (300,420);
    glVertex2d (300,420);
    glVertex2d (260,420);
    glVertex2d (260,420);
    glVertex2d (260,260);
    glEnd();

    //top 2 left
    glBegin(GL_POLYGON);
    glVertex2d (220,240);
    glVertex2d (260,240);
    glVertex2d (260,240);
    glVertex2d (260,400);
    glVertex2d (260,400);
    glVertex2d (220,380);
    glVertex2d (220,380);
    glVertex2d (220,240);
    glEnd();

    //top 3 right
    glBegin(GL_POLYGON);
    glVertex2d (160,200);
    glVertex2d (210,200);
    glVertex2d (210,200);
    glVertex2d (210,420);
    glVertex2d (210,420);
    glVertex2d (160,420);
    glVertex2d (160,420);
    glVertex2d (160,200);
    glEnd();

    //top 3 left
    glBegin(GL_POLYGON);
    glVertex2d (120,160);
    glVertex2d (160,160);
    glVertex2d (160,160);
    glVertex2d (160,420);
    glVertex2d (160,420);
    glVertex2d (120,380);
    glVertex2d (120,380);
    glVertex2d (120,160);
    glEnd();

    //top 4
    glBegin(GL_POLYGON);
    glVertex2d (90,140);
    glVertex2d (140,140);
    glVertex2d (140,140);
    glVertex2d (140,320);
    glVertex2d (140,320);
    glVertex2d (90,320);
    glVertex2d (90,320);
    glVertex2d (90,140);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2d (60,120);
    glVertex2d (120,120);
    glVertex2d (120,120);
    glVertex2d (120,260);
    glVertex2d (120,260);
    glVertex2d (60,260);
    glVertex2d (60,260);
    glVertex2d (60,120);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2d (20,80);
    glVertex2d (60,80);
    glVertex2d (60,80);
    glVertex2d (60,280);
    glVertex2d (60,280);
    glVertex2d (20,240);
    glVertex2d (20,240);
    glVertex2d (20,80);
    glEnd();

    glFlush ();
}

void rightCityBuilding()
{
    glColor3f(0.0f, 0.0f, 0.0f);
    //top 1
    glBegin(GL_POLYGON);
    glVertex2d (540,320);
    glVertex2d (630,280);
    glVertex2d (630,280);
    glVertex2d (630,380);
    glVertex2d (630,380);
    glVertex2d (620,380);
    glVertex2d (620,380);
    glVertex2d (620,470);
    glVertex2d (620,470);
    glVertex2d (540,470);
    glVertex2d (540,470);
    glVertex2d (540,320);
    glEnd();

    //top 2
    glBegin(GL_POLYGON);
    glVertex2d (640,260);
    glVertex2d (700,260);
    glVertex2d (700,260);
    glVertex2d (700,420);
    glVertex2d (700,420);
    glVertex2d (640,420);
    glVertex2d (640,420);
    glVertex2d (640,260);

    glVertex2d (650,420);
    glVertex2d (690,420);
    glVertex2d (690,420);
    glVertex2d (690,440);
    glVertex2d (690,440);
    glVertex2d (650,440);
    glVertex2d (650,440);
    glVertex2d (650,420);

    glVertex2d (660,440);
    glVertex2d (680,440);
    glVertex2d (680,440);
    glVertex2d (680,460);
    glVertex2d (680,460);
    glVertex2d (660,460);
    glVertex2d (660,460);
    glVertex2d (660,440);
    glEnd();

    //top 3
    glBegin(GL_POLYGON);
    glVertex2d (680,220);
    glVertex2d (720,220);
    glVertex2d (720,220);
    glVertex2d (720,340);
    glVertex2d (720,340);
    glVertex2d (680,340);
    glVertex2d (680,340);
    glVertex2d (680,220);
    glEnd();

    //top 4
    glBegin(GL_POLYGON);
    glVertex2d (720,180);
    glVertex2d (770,180);
    glVertex2d (770,180);
    glVertex2d (770,380);
    glVertex2d (770,380);
    glVertex2d (720,380);
    glVertex2d (720,380);
    glVertex2d (720,180);
    glEnd();

    //top 5
    glBegin(GL_POLYGON);
    glVertex2d (790,140);
    glVertex2d (840,140);
    glVertex2d (840,140);
    glVertex2d (840,420);
    glVertex2d (840,420);
    glVertex2d (790,420);
    glVertex2d (790,420);
    glVertex2d (790,140);
    glEnd();

    //top 6
    glBegin(GL_POLYGON);
    glVertex2d (780,140);
    glVertex2d (820,140);
    glVertex2d (820,140);
    glVertex2d (820,300);
    glVertex2d (820,300);
    glVertex2d (780,340);
    glVertex2d (780,340);
    glVertex2d (780,140);
    glEnd();

    //top 6
    glBegin(GL_POLYGON);
    glVertex2d (830,100);
    glVertex2d (880,100);
    glVertex2d (880,100);
    glVertex2d (880,300);
    glVertex2d (880,300);
    glVertex2d (830,260);
    glVertex2d (830,260);
    glVertex2d (830,100);
    glEnd();

    //top 7
    glBegin(GL_POLYGON);
    glVertex2d (910,80);
    glVertex2d (940,80);
    glVertex2d (940,80);
    glVertex2d (940,330);
    glVertex2d (940,330);
    glVertex2d (910,330);
    glVertex2d (910,330);
    glVertex2d (910,80);
    glEnd();

    //top 8
    glBegin(GL_POLYGON);
    glVertex2d (900,80);
    glVertex2d (940,80);
    glVertex2d (940,80);
    glVertex2d (940,220);
    glVertex2d (940,220);
    glVertex2d (900,220);
    glVertex2d (900,220);
    glVertex2d (900,80);
    glEnd();

    glFlush ();
}
void rightCityBuildingLines()
{
    glColor3f(1.0f, 0.5f, 0.0f);
    //top 1 border
    glBegin(GL_LINES);
    glVertex2d (540,320);
    glVertex2d (540,420);
    glVertex2d (540,420);
    glVertex2d (560,440);
    glVertex2d (560,440);
    glVertex2d (560,470);
    glVertex2d (560,470);
    glVertex2d (620,470);
    glVertex2d (620,470);
    glVertex2d (620,380);
    glVertex2d (620,380);
    glVertex2d (630,380);
    glVertex2d (630,380);
    glVertex2d (630,300);
    glVertex2d (560,440);
    glVertex2d (620,440);
    glVertex2d (540,400);
    glVertex2d (560,420);
    glVertex2d (540,380);
    glVertex2d (560,400);
    glVertex2d (560,440);
    glVertex2d (560,340);
    glVertex2d (560,420);
    glVertex2d (620,420);
    glVertex2d (560,400);
    glVertex2d (620,400);
    glEnd();

    //top 2 border
    glBegin(GL_LINES);
    glVertex2d (540,320);
    glVertex2d (540,420);
    glVertex2d (540,420);
    glVertex2d (560,440);
    glVertex2d (560,440);
    glVertex2d (560,470);
    glVertex2d (560,470);
    glVertex2d (620,470);
    glVertex2d (620,470);
    glVertex2d (620,380);
    glVertex2d (620,380);
    glVertex2d (630,380);
    glVertex2d (630,380);
    glVertex2d (630,300);
    glEnd();

    //top 2 inner border
    glBegin(GL_LINES);
    glVertex2d (600,280);
    glVertex2d (600,380);
    glVertex2d (600,380);
    glVertex2d (630,380);
    glVertex2d (600,360);
    glVertex2d (630,360);
    glVertex2d (600,340);
    glVertex2d (630,340);
    glVertex2d (600,320);
    glVertex2d (630,320);
    glEnd();

    //top 3 border
    glBegin(GL_LINES);
    glVertex2d (630,330);
    glVertex2d (640,330);
    glVertex2d (640,330);
    glVertex2d (640,420);
    glVertex2d (640,420);
    glVertex2d (650,420);
    glVertex2d (650,420);
    glVertex2d (650,440);
    glVertex2d (650,440);
    glVertex2d (660,440);
    glVertex2d (660,440);
    glVertex2d (660,460);
    glVertex2d (660,460);
    glVertex2d (680,460);
    glVertex2d (680,460);
    glVertex2d (680,440);
    glVertex2d (680,440);
    glVertex2d (690,440);
    glVertex2d (690,440);
    glVertex2d (690,420);
    glVertex2d (690,420);
    glVertex2d (700,420);
    glVertex2d (700,420);
    glVertex2d (700,340);
    glVertex2d (670,460);
    glVertex2d (670,480);
    glVertex2d (660,440);
    glVertex2d (680,440);
    glVertex2d (650,420);
    glVertex2d (690,420);
    glVertex2d (640,380);
    glVertex2d (700,380);
    glEnd();

    //top 4 border
    glBegin(GL_LINES);
    glVertex2d (680,220);
    glVertex2d (680,340);
    glVertex2d (680,340);
    glVertex2d (720,340);
    glVertex2d (720,340);
    glVertex2d (720,210);
    glEnd();

    //top 5 border
    glBegin(GL_LINES);
    glVertex2d (720,340);
    glVertex2d (720,380);
    glVertex2d (720,380);
    glVertex2d (770,380);
    glVertex2d (770,380);
    glVertex2d (770,180);
    glEnd();

    //top 6 border
    glBegin(GL_LINES);
    glVertex2d (780,180);
    glVertex2d (780,340);
    glVertex2d (780,340);
    glVertex2d (820,300);
    glVertex2d (820,300);
    glVertex2d (820,140);
    glEnd();

    //top 7 border
    glBegin(GL_LINES);
    glVertex2d (790,330);
    glVertex2d (790,420);
    glVertex2d (790,420);
    glVertex2d (840,420);
    glVertex2d (840,420);
    glVertex2d (840,270);
    glEnd();

    //top 8 border
    glBegin(GL_LINES);
    glVertex2d (830,140);
    glVertex2d (830,260);
    glVertex2d (830,260);
    glVertex2d (880,300);
    glVertex2d (880,300);
    glVertex2d (880,100);
    glEnd();

    //top 9 border
    glBegin(GL_LINES);
    glVertex2d (900,80);
    glVertex2d (900,220);
    glVertex2d (900,220);
    glVertex2d (940,220);
    glVertex2d (910,220);
    glVertex2d (910,330);
    glVertex2d (910,330);
    glVertex2d (940,330);
    glEnd();

    //additional border
    glBegin(GL_LINES);
    glVertex2d (680,320);
    glVertex2d (720,320);
    glVertex2d (680,300);
    glVertex2d (720,300);
    glVertex2d (720,360);
    glVertex2d (770,360);
    glVertex2d (910,300);
    glVertex2d (940,300);
    glVertex2d (910,260);
    glVertex2d (940,260);
    glVertex2d (900,200);
    glVertex2d (920,200);
    glVertex2d (900,180);
    glVertex2d (920,180);
    glVertex2d (900,160);
    glVertex2d (920,160);
    glVertex2d (900,140);
    glVertex2d (920,140);
    glVertex2d (920,200);
    glVertex2d (920,100);
    glVertex2d (680,280);
    glVertex2d (720,280);
    glVertex2d (680,260);
    glVertex2d (720,260);
    glVertex2d (720,330);
    glVertex2d (770,330);
    glVertex2d (720,310);
    glVertex2d (770,310);
    glVertex2d (720,290);
    glVertex2d (770,290);
    glVertex2d (720,250);
    glVertex2d (770,250);
    glVertex2d (720,270);
    glVertex2d (770,270);
    glVertex2d (790,380);
    glVertex2d (840,380);
    glVertex2d (790,360);
    glVertex2d (840,360);
    glVertex2d (790,340);
    glVertex2d (840,340);
    glVertex2d (790,420);
    glVertex2d (800,440);
    glVertex2d (800,440);
    glVertex2d (860,440);
    glVertex2d (860,440);
    glVertex2d (840,420);
    glVertex2d (860,440);
    glVertex2d (860,300);
    glVertex2d (840,380);
    glVertex2d (860,400);
    glVertex2d (840,360);
    glVertex2d (860,380);
    glVertex2d (840,340);
    glVertex2d (860,360);
    glVertex2d (780,300);
    glVertex2d (820,260);
    glVertex2d (780,280);
    glVertex2d (820,240);
    glVertex2d (780,260);
    glVertex2d (820,220);
    glVertex2d (780,240);
    glVertex2d (820,200);
    glVertex2d (780,220);
    glVertex2d (820,180);
    glVertex2d (830,230);
    glVertex2d (880,260);
    glVertex2d (830,210);
    glVertex2d (880,240);
    glVertex2d (830,190);
    glVertex2d (880,220);
    glVertex2d (830,170);
    glVertex2d (880,200);
    glVertex2d (640,360);
    glVertex2d (700,360);
    glVertex2d (640,360);
    glVertex2d (700,360);
    glVertex2d (640,380);
    glVertex2d (670,420);
    glVertex2d (670,420);
    glVertex2d (700,380);
    glVertex2d (640,380);
    glVertex2d (670,400);
    glVertex2d (670,400);
    glVertex2d (700,380);
    glEnd();

    glFlush ();
}
void bridge()
{
    glColor3f(0.0f, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
    glVertex2d(380,320);
    glVertex2d(540,320);
    glVertex2d(540,320);
    glVertex2d(540,360);
    glVertex2d(540,360);
    glVertex2d(380,360);
    glVertex2d(380,360);
    glVertex2d(380,320);
    glEnd();
    glFlush ();
}
void bridgePillar()
{
    glColor3f(0.1f, 0.1f, 0.1f);
    //left
    glBegin(GL_POLYGON);
    glVertex2d(440,360);
    glVertex2d(460,360);
    glVertex2d(460,360);
    glVertex2d(460,440);
    glVertex2d(460,440);
    glVertex2d(440,440);
    glVertex2d(440,440);
    glVertex2d(440,360);
    glEnd();

    //right
    glBegin(GL_POLYGON);
    glVertex2d(480,360);
    glVertex2d(450,360);
    glVertex2d(500,360);
    glVertex2d(500,480);
    glVertex2d(500,480);
    glVertex2d(480,480);
    glVertex2d(480,480);
    glVertex2d(480,360);
    glEnd();

    //mid
    glBegin(GL_POLYGON);
    glVertex2d(460,380);
    glVertex2d(480,380);
    glVertex2d(480,380);
    glVertex2d(480,400);
    glVertex2d(480,400);
    glVertex2d(460,400);
    glVertex2d(460,400);
    glVertex2d(460,380);
    glEnd();

    //right pillar lines
    glBegin(GL_LINES);
    glVertex2d(500,460);
    glVertex2d(540,400);
    glVertex2d(500,440);
    glVertex2d(540,380);
    glVertex2d(500,420);
    glVertex2d(540,360);
    glVertex2d(500,400);
    glVertex2d(525,360);
    glEnd();

    //left pillar lines
    glBegin(GL_LINES);
    glVertex2d(380,360);
    glVertex2d(440,420);
    glVertex2d(400,360);
    glVertex2d(440,400);
    glVertex2d(420,360);
    glVertex2d(440,380);
    glEnd();

    glFlush ();
}
void display(void)
{
    moon();
    fullSky();
    leftCloud();
    rightCloud();
    lake();
    lakeWaterLines();
    boat();
    boatman();
    leftRoad();
    rightRoad();
    leftCityBuilding();
    rightCityBuilding();
    cityBuildingLines();
    rightCityBuildingLines();
    bridge();
    bridgePillar();
}
void init (void)
{
    glClearColor (0.0, 0.0, 0.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0,940,0,600);
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (940, 600);
    glutInitWindowPosition (0, 0);
    glutCreateWindow ("night city");
    init ();
    glutDisplayFunc(display);
    glutMainLoop();

    return 0;
}

