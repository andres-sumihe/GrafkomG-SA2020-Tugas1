#include <iostream>
#include <GL/glut.h>

void Rumah() {
	glClearColor(255, 255, 255, 1);
	glClear(GL_COLOR_BUFFER_BIT);
	//Body_Rumah
	glColor3ub(186, 180, 4);
	glBegin(GL_POLYGON);

	glVertex2f(220, 220);
	glVertex2f(220, 340);
	glVertex2f(420, 340);
	glVertex2f(420, 220);

	glEnd();

	glColor3ub(139, 69, 19);
	glBegin(GL_POLYGON);
	glVertex2f(220, 220);
	glVertex2f(420, 220);
	glVertex2f(320, 170);
	glEnd();
	//Atap Rumah

	glColor3ub(128, 0, 0);
	glBegin(GL_POLYGON);

	glVertex2f(320, 170);
	glVertex2f(220, 220);
	glVertex2f(200, 220);
	glVertex2f(320, 155);
	glVertex2f(440, 220);
	glVertex2f(420, 220);

	glEnd();
	
	//Cerobong
	glColor3ub(143, 87, 41);
	glBegin(GL_POLYGON);
	glVertex2f(264, 150);
	glVertex2f(264, 186);
	glVertex2f(250, 194);
	glVertex2f(250, 150);
	glEnd();

	glColor3ub(139, 69, 19);
	glBegin(GL_LINE_LOOP);
	glVertex2f(265, 149);
	glVertex2f(265, 187);
	glVertex2f(251, 195);
	glVertex2f(251, 149);
	glEnd();
	//Akhir Cerobong
	
	glColor3ub(139, 69, 19);
	glBegin(GL_POLYGON);

	//Pintu
	glVertex2f(300, 260);
	glVertex2f(300, 340);
	glVertex2f(340, 340);
	glVertex2f(340, 260);

	glEnd();

	//Bagian_Pintu
	glColor3ub(0, 0, 0);
	glPointSize(4);
	glBegin(GL_POINTS);

	glVertex2f(338, 302);

	glEnd();
	int pattern1 = 0;
	int pattern2 = 0;
	for (int i = 1; i <= 3; i++) {
		if (i == 2 || i == 3) {
			pattern1 += 26;
			pattern2 += 25.5;
		}
		glColor3ub(0, 0, 0);
		glBegin(GL_LINE_LOOP);

		glVertex2f(305, 268+pattern1);
		glVertex2f(305, 287+pattern2);
		glVertex2f(335, 287+pattern2);
		glVertex2f(335, 268+pattern1);

		glEnd();
	}
	
	
	
	int SecondWindow = 0;

	for (int i = 1; i <= 2; i++){
		if (i == 2) {
			SecondWindow = 120;
		}
		//Jendela
		
		glColor3ub(218, 226, 227);
		glBegin(GL_POLYGON);
		glVertex2f(230 + SecondWindow, 270);
		glVertex2f(230 + SecondWindow, 310);
		glVertex2f(290 + SecondWindow, 310);
		glVertex2f(290 + SecondWindow, 270);
		glEnd();

		glColor3ub(139, 69, 19);
		glBegin(GL_LINE_LOOP);

		glVertex2f(230 + SecondWindow, 270);
		glVertex2f(230 + SecondWindow, 310);
		glVertex2f(290 + SecondWindow, 310);
		glVertex2f(290 + SecondWindow, 270);

		//Garis Jendela
		glEnd();
		glColor3ub(139, 69, 19);
		glBegin(GL_LINE_LOOP);
		glVertex2f(260 + SecondWindow, 271);
		glVertex2f(260 + SecondWindow, 310);
		glEnd();
		//Garis Jendela
		glColor3ub(139, 69, 19);
		glBegin(GL_LINE_LOOP);
		glVertex2f(230 + SecondWindow, 290);
		glVertex2f(290 + SecondWindow, 290);
		glEnd();

		
	}

	//Kursi
	glColor3ub(139, 69, 19);
	glBegin(GL_POLYGON);
	glVertex2f(110, 50);
	glVertex2f(110, 85);
	glVertex2f(115, 80);
	glVertex2f(115, 45);
	glEnd();
	
	glColor3ub(139, 69, 19);
	glBegin(GL_POLYGON);
	glVertex2f(77, 37);
	glVertex2f(110, 50);
	glVertex2f(115, 45);
	glVertex2f(82, 32);
	glEnd();
	
	glColor3ub(139, 69, 19);
	glBegin(GL_POLYGON);
	glVertex2f(77, 37);
	glVertex2f(110, 50);
	glVertex2f(110, 85);
	glVertex2f(77, 71);
	glEnd();
	
	glColor3ub(56, 129, 245);
	glBegin(GL_POLYGON);
	glVertex2f(45, 90);
	glVertex2f(77, 104);
	glVertex2f(110, 85);
	glVertex2f(77, 71);
	glEnd();
	
	glColor3ub(56, 129, 245);
	glBegin(GL_POLYGON);
	glVertex2f(45, 90);
	glVertex2f(77, 104);
	glVertex2f(77, 109);
	glVertex2f(45, 95);
	glEnd();
	
	glColor3ub(56, 129, 245);
	glBegin(GL_POLYGON);
	glVertex2f(77, 109);
	glVertex2f(77, 104);
	glVertex2f(115, 80);
	glVertex2f(115, 85);
	glEnd();
	

	glColor3ub(0, 0, 0);
	glBegin(GL_LINES);
	glVertex2f(320, 110);
	glVertex2f(320, 155);
	glEnd();
	glColor3ub(0, 0, 0);
	glBegin(GL_LINES);
	glVertex2f(300, 125);
	glVertex2f(340, 125);
	glEnd();



	glFlush();

}


int main(int argc, char** argv) {
	//Inisialisasi Program
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(640, 480);
	glutCreateWindow("Rumah Dan Benda v1.0");
	glutDisplayFunc(Rumah);
	gluOrtho2D(0, 640, 480, 0);
	//Selesai Inisialisasi
	glutMainLoop();
}