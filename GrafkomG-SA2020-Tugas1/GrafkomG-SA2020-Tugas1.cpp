#include <iostream>
#include <GL/glut.h>
//#include <GL/freeglut.h>

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
	
	//halaman
	glColor3ub(70, 219, 110);
	glBegin(GL_POLYGON);

	glVertex2f(420, 340);
	glVertex2f(220, 340);
	glVertex2f(1, 480);
	glVertex2f(640,480 );

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
	
	//Pintu Geser
	glColor3ub(139, 69, 19);
	glBegin(GL_POLYGON);

	glVertex2f(300, 260);
	glVertex2f(300, 340);
	glVertex2f(340, 340);
	glVertex2f(340, 260);

	glEnd();

	//GAGANG PINTU SIDIK JARI HEHE
	glColor3ub(0, 0, 0);
	glPointSize(3);
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

	//Kursi 3D
	glColor3ub(139, 69, 19);
	glBegin(GL_POLYGON);
	glVertex2f(110, 250);
	glVertex2f(110, 285);
	glVertex2f(115, 280);
	glVertex2f(115, 245);
	glEnd();
	
	glColor3ub(139, 69, 19);
	glBegin(GL_POLYGON);
	glVertex2f(77, 237);
	glVertex2f(110, 250);
	glVertex2f(115, 245);
	glVertex2f(82, 232);
	glEnd();
	
	glColor3ub(139, 69, 19);
	glBegin(GL_POLYGON);
	glVertex2f(77, 237);
	glVertex2f(110, 250);
	glVertex2f(110, 285);
	glVertex2f(77, 271);
	glEnd();
	
	glColor3ub(56, 129, 245);
	glBegin(GL_POLYGON);
	glVertex2f(45, 290);
	glVertex2f(77, 304);
	glVertex2f(110, 285);
	glVertex2f(77, 271);
	glEnd();
	
	glColor3ub(56, 129, 245);
	glBegin(GL_POLYGON);
	glVertex2f(45, 290);
	glVertex2f(77, 304);
	glVertex2f(77, 309);
	glVertex2f(45, 295);
	glEnd();
	
	glColor3ub(56, 129, 245);
	glBegin(GL_POLYGON);
	glVertex2f(77, 309);
	glVertex2f(77, 304);
	glVertex2f(115, 280);
	glVertex2f(115, 285);
	glEnd();

	glColor3ub(139, 69, 19);
	glBegin(GL_POLYGON);
	glVertex2f(45, 295);
	glVertex2f(50, 297);
	glVertex2f(50, 330);
	glVertex2f(45, 325);
	glEnd();

	glColor3ub(139, 69, 19);
	glBegin(GL_POLYGON);
	glVertex2f(50, 297);
	glVertex2f(50, 330);
	glVertex2f(55, 325);
	glVertex2f(55, 299);
	glEnd();
	
	glColor3ub(139, 69, 19);
	glBegin(GL_POLYGON);
	glVertex2f(77, 309);
	glVertex2f(70, 306);
	glVertex2f(70, 340);
	glVertex2f(77, 344);
	glEnd();
	
	glColor3ub(139, 69, 19);
	glBegin(GL_POLYGON);
	glVertex2f(77, 309);
	glVertex2f(77, 344);
	glVertex2f(81, 340);
	glVertex2f(81, 306);
	glEnd();

	glColor3ub(139, 69, 19);
	glBegin(GL_POLYGON);
	glVertex2f(115, 285);
	glVertex2f(115, 318);
	glVertex2f(110, 323);
	glVertex2f(110, 288);
	glEnd();

	glColor3ub(139, 69, 19);
	glBegin(GL_POLYGON);
	glVertex2f(110, 323);
	glVertex2f(110, 288);
	glVertex2f(105, 290);
	glVertex2f(105, 319);
	glEnd();
	//End 3D 

	// PAGAR 
	int lebar = 10;
	float jarak = 10;
	int banyak = 25;
	for (int i = 1; i <= banyak; i++){
		if (i % 2 == 1) {
			glColor3ub(139, 69, 19);
			glBegin(GL_POLYGON);
			glVertex2f(i * jarak, 410);
			glVertex2f((i * jarak) + lebar, 410);
			glVertex2f((i * jarak) + lebar, 470);
			glVertex2f(i * jarak, 470);
			glEnd();
		}else{
			glColor4ub(255, 255, 255, 0);
			glBegin(GL_POLYGON);
			glVertex2f(i * jarak, 410);
			glVertex2f((i * jarak) + lebar, 410);
			glVertex2f((i * jarak) + lebar, 470);
			glVertex2f(i * jarak, 470);
			glEnd();
		}
	}
	for (int i = 1; i <= banyak; i++) {
		if (i % 2 == 0) {
			glColor3ub(139, 69, 19);
			glBegin(GL_POLYGON);
			glVertex2f(380 + (i * jarak), 410);
			glVertex2f(380 + (i * jarak) + lebar, 410);
			glVertex2f(380 + (i * jarak) + lebar, 470);
			glVertex2f(380 + (i * jarak), 470);
			glEnd();
		}
		else {
			glColor4ub(255, 255, 255, 0);
			glBegin(GL_POLYGON);
			glVertex2f(380 + (i * jarak), 410);
			glVertex2f(380 + (i * jarak) + lebar, 410);
			glVertex2f(380 + (i * jarak) + lebar, 470);
			glVertex2f(380 + (i * jarak), 470);
			glEnd();
		}
	}

	glColor3ub(0, 0, 0);
	glBegin(GL_POLYGON);
	glVertex2f(0, 420);
	glVertex2f(0, 430);
	glVertex2f(260, 430);
	glVertex2f(260, 420);
	glEnd();

	glColor3ub(0, 0, 0);
	glBegin(GL_POLYGON);
	glVertex2f(400, 420);
	glVertex2f(400, 430);
	glVertex2f(640, 430);
	glVertex2f(640, 420);
	glEnd();
	//END PAGAR

	//GONG
	glColor3ub(0, 0, 0);
	glBegin(GL_POLYGON);
	glVertex2f(130 , 400);
	glVertex2f(120 , 400);
	glVertex2f(120 , 330);
	glVertex2f(130 , 340);
	glEnd();

	glColor3ub(0, 0, 0);
	glBegin(GL_POLYGON);
	glVertex2f(130, 340);
	glVertex2f(120, 330);
	glVertex2f(200 , 330);
	glVertex2f(190 , 340);
	glEnd();

	glColor3ub(0, 0, 0);
	glBegin(GL_POLYGON);
	glVertex2f(200, 330);
	glVertex2f(190, 340);
	glVertex2f(190, 400);
	glVertex2f(200, 400);
	glEnd();
	glColor3ub(171, 94, 0);
	glBegin(GL_LINES);
	glVertex2f(160, 340);
	glVertex2f(160, 370);
	glEnd();
	glColor3ub(230, 192, 25);
	glBegin(GL_POLYGON);
	glVertex2f(157.5, 370);
	glVertex2f(162.5, 370);
	glVertex2f(165.5, 375);
	glVertex2f(165.5, 380);
	glVertex2f(162.5, 385);
	glVertex2f(157.5, 385);
	glVertex2f(155, 380);
	glVertex2f(155, 375);
	glEnd();

	//END GONG

	//MJOLNIR Hammer
	glColor3ub(0, 0, 0);
	glBegin(GL_POLYGON);
	glVertex2f(207, 375);
	glVertex2f(205, 377);
	glVertex2f(205, 382);
	glVertex2f(207, 384);
	glVertex2f(220, 384);
	glVertex2f(222, 382);
	glVertex2f(222, 377);
	glVertex2f(220, 375);
	glEnd();
	
	glColor3ub(0, 0, 0);
	glBegin(GL_POLYGON);
	glVertex2f(212, 384);
	glVertex2f(215, 384);
	glVertex2f(215, 400);
	glVertex2f(212, 400);
	glEnd();

	//END MNJOLNIR
	//FLAG
	glColor3ub(0, 0, 0);
	glBegin(GL_POLYGON);
	glVertex2f(468, 384);
	glVertex2f(452, 384);
	glVertex2f(450, 400);
	glVertex2f(470, 400);
	glEnd();

	glColor3ub(199, 197, 195);
	glBegin(GL_POLYGON);
	glVertex2f(458, 384);
	glVertex2f(462, 384);
	glVertex2f(462, 300);
	glVertex2f(458, 300);
	glEnd();

	glColor3ub(0, 0, 0);
	glBegin(GL_POLYGON);
	glVertex2f(462, 303);
	glVertex2f(498, 303);
	glVertex2f(498, 313);
	glVertex2f(462, 313);
	glEnd();
	
	glColor3ub(255, 0, 0);
	glBegin(GL_POLYGON);
	glVertex2f(462, 313);
	glVertex2f(498, 313);
	glVertex2f(498, 323);
	glVertex2f(462, 323);
	glEnd();
	
	glColor3ub(255, 255, 0);
	glBegin(GL_POLYGON);
	glVertex2f(462, 323);
	glVertex2f(498, 323);
	glVertex2f(498, 333);
	glVertex2f(462, 333);
	glEnd();
	
	glColor3ub(181, 180, 176);
	glPointSize(6);
	glBegin(GL_POINTS);

	glVertex2f(460, 300);

	glEnd();
	
	//lebar tiang  = 4


	//END FLAG
	

	// SALIB
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

	//END SALIB

	glFlush();

}



int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(640, 480);
	glutCreateWindow("Thor, New Asgard, Mnjolnir and the Mysterious Chair");
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA); 
	glEnable(GL_BLEND); 
	glClearColor(0.0, 0.0, 0.0, 0.0);
	glutDisplayFunc(Rumah);
	gluOrtho2D(0, 640, 480, 0);
	glutMainLoop();
}