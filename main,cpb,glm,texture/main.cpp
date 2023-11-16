


#include <stdlib.h>
#include <windows.h>
#include <GL/glut.h>
#include "stdafx.h"
#include "glm.h"
#include "Texture.h"
#include <iostream>
#include <math.h>
#include <fstream>

//using namespace std;
static float ypoz = 0, zpoz = 0;

double rotacion=0;
double traslacion=0;
char tecla;
GLint x_0, y_0;
GLuint dlist,dlist2;

GLint mostrarViewport;
GLint x_2, y_2;
float alfa, beta;
float alfa2, beta2;
float angulo=0;
int  boton=-1;
int w,h,perspectiva=80;
GLint ifondo=1;
float xc=0,zc=8,yc = 1, lx=0, lz=-1, ly = 1;
GLfloat colores[4][4]{
        {0.5,1,1},//verde claro
        {0.5,0.8,1},//celeste
        {0.5,1,0.8},//verde oscuro
        {0.2,0.5,1},//azul
};

typedef enum {fondo1,fondo2,fondo3,fondo4,salida,izquierda,derecha,centro,menumodelointerior,menumodeloexterior} opcionesmenu;
double queuedMilliseconds,prev0,fps,responseTime;
bool flag = true;
int ventanaId;
//GLUI *sub_ventana;
//GLUI_StaticText *label;

GLMmodel* piso = NULL;
GLMmodel* pista = NULL;
GLMmodel* campo = NULL;
GLMmodel* cerro = NULL;
GLMmodel* cielo = NULL;
GLMmodel* tim = NULL;

GLMmodel* edificio1 = NULL;
GLMmodel* edificio2 = NULL;
GLMmodel* edificio3 = NULL;
GLMmodel* edificio4 = NULL;
GLMmodel* edificio5 = NULL;
GLMmodel* edificio6 = NULL;
GLMmodel* edificio7 = NULL;
GLMmodel* edificio8 = NULL;
GLMmodel* edificio9 = NULL;
GLMmodel* edificio10 = NULL;
GLMmodel* edificio11 = NULL;
GLMmodel* edificio12 = NULL;
GLMmodel* edificio13 = NULL;
GLMmodel* edificio14 = NULL;
GLMmodel* edificio15 = NULL;
GLMmodel* edificio16 = NULL;
GLMmodel* edificio17 = NULL;
GLMmodel* edificio18 = NULL;
GLMmodel* edificio19 = NULL;
GLMmodel* edificio20 = NULL;
GLMmodel* edificio21 = NULL;
GLMmodel* edificio22 = NULL;
GLMmodel* edificio23 = NULL;

GLMmodel* edificio24 = NULL;
GLMmodel* edificio25 = NULL;
GLMmodel* edificio26 = NULL;
GLMmodel* edificio27 = NULL;
GLMmodel* edificio28 = NULL;
GLMmodel* edificio29 = NULL;
GLMmodel* edificio30 = NULL;
GLMmodel* edificio31 = NULL;
GLMmodel* edificio32 = NULL;
GLMmodel* edificio33 = NULL;
GLMmodel* edificio34 = NULL;
GLMmodel* edificio35 = NULL;
GLMmodel* edificio36 = NULL;
GLMmodel* edificio37 = NULL;
GLMmodel* edificio38 = NULL;
GLMmodel* edificio39 = NULL;
GLMmodel* edificio40 = NULL;
GLMmodel* edificio41 = NULL;
GLMmodel* edificio42 = NULL;
GLMmodel* edificio43 = NULL;
GLMmodel* edificio44 = NULL;
GLMmodel* edificio45 = NULL;
GLMmodel* edificio46 = NULL;
GLMmodel* cuarto = NULL;
GLMmodel* pisocuarto = NULL;
GLMmodel* sofa = NULL;

GLMmodel* tv = NULL;
GLMmodel* camasoporte1 = NULL;
GLMmodel* camacolchon1 = NULL;
GLMmodel* camasabana1 = NULL;
GLMmodel* mesa = NULL;
//Texturas
std::string texturas[2]={"objetos/edificio2/building_texture1.tga","objetos/edificio2/building_texture1.tga"};

GLuint	texture;
Texture	treeTextureAr[62];
bool LoadTreeTextures(){

	int i;
	if (LoadTGA(&treeTextureAr[0], "objetos/edificios/edificio1/edificio1.tga")
     && LoadTGA(&treeTextureAr[1], "objetos/edificios/edificio2/edificio2.tga")
     && LoadTGA(&treeTextureAr[2], "objetos/edificios/edificio3/edificio3.tga")
     && LoadTGA(&treeTextureAr[3], "objetos/edificios/edificio4/edificio4.tga")
     && LoadTGA(&treeTextureAr[4], "objetos/edificios/edificio5/edificio5.tga")
     && LoadTGA(&treeTextureAr[5], "objetos/edificios/edificio6/edificio6.tga")
     && LoadTGA(&treeTextureAr[6], "objetos/edificios/edificio7/edificio7.tga")
     //&& LoadTGA(&treeTextureAr[7], "objetos/edificios/edificio8/edificio8.tga")
     && LoadTGA(&treeTextureAr[8], "objetos/edificios/edificio9/edificio9.tga")
     //&& LoadTGA(&treeTextureAr[9], "objetos/edificios/edificio10/edificio10.tga")
     && LoadTGA(&treeTextureAr[10], "objetos/edificios/edificio11/edificio11.tga")
     && LoadTGA(&treeTextureAr[11], "objetos/edificios/edificio12/edificio12.tga")
     && LoadTGA(&treeTextureAr[12], "objetos/edificios/edificio13/edificio13.tga")
     && LoadTGA(&treeTextureAr[14], "objetos/edificios/edificio15/edificio15.tga")
     && LoadTGA(&treeTextureAr[15], "objetos/edificios/edificio16/edificio16.tga")
     && LoadTGA(&treeTextureAr[16], "objetos/edificios/edificio17/edificio17.tga")
     && LoadTGA(&treeTextureAr[18], "objetos/edificios/edificio19/edificio19.tga")
     && LoadTGA(&treeTextureAr[19], "objetos/edificios/edificio20/edificio20.tga")
     && LoadTGA(&treeTextureAr[20], "objetos/edificios/edificio21/edificio21.tga")
     && LoadTGA(&treeTextureAr[21], "objetos/edificios/edificio22/edificio22.tga")
     && LoadTGA(&treeTextureAr[22], "objetos/edificios/edificio23/edificio23.tga")

     && LoadTGA(&treeTextureAr[23], "objetos/edificios/edificio24/edificio24.tga")
     && LoadTGA(&treeTextureAr[24], "objetos/edificios/edificio25/edificio25.tga")
     && LoadTGA(&treeTextureAr[25], "objetos/edificios/edificio26/edificio26.tga")
     && LoadTGA(&treeTextureAr[26], "objetos/edificios/edificio27/edificio27.tga")

     && LoadTGA(&treeTextureAr[27], "objetos/edificios/edificio28/edificio28.tga")
     && LoadTGA(&treeTextureAr[28], "objetos/edificios/edificio29/edificio29.tga")
     && LoadTGA(&treeTextureAr[29], "objetos/edificios/edificio30/edificio30.tga")
     && LoadTGA(&treeTextureAr[30], "objetos/edificios/edificio31/edificio31.tga")
     && LoadTGA(&treeTextureAr[31], "objetos/edificios/edificio32/edificio32.tga")
     && LoadTGA(&treeTextureAr[32], "objetos/edificios/edificio33/edificio33.tga")
     && LoadTGA(&treeTextureAr[34], "objetos/edificios/edificio35/edificio35.tga")
     && LoadTGA(&treeTextureAr[35], "objetos/edificios/edificio36/edificio36.tga")
     && LoadTGA(&treeTextureAr[36], "objetos/edificios/edificio37/edificio37.tga")
     && LoadTGA(&treeTextureAr[37], "objetos/edificios/edificio38/edificio38.tga")
     && LoadTGA(&treeTextureAr[38], "objetos/edificios/edificio39/edificio39.tga")
     && LoadTGA(&treeTextureAr[39], "objetos/edificios/edificio40/edificio40.tga")
     && LoadTGA(&treeTextureAr[41], "objetos/edificios/edificio42/edificio42.tga")
     && LoadTGA(&treeTextureAr[42], "objetos/edificios/edificio43/edificio43.tga")
     && LoadTGA(&treeTextureAr[43], "objetos/edificios/edificio44/edificio44.tga")
     && LoadTGA(&treeTextureAr[44], "objetos/edificios/edificio45/edificio45.tga")
     && LoadTGA(&treeTextureAr[45], "objetos/edificios/edificio46/edificio46.tga")


     && LoadTGA(&treeTextureAr[46], "objetos/edificios/piso/piso.tga")
     && LoadTGA(&treeTextureAr[47], "objetos/edificios/pista/pista.tga")
     && LoadTGA(&treeTextureAr[48], "objetos/edificios/campo/campo.tga")
     && LoadTGA(&treeTextureAr[49], "objetos/edificios/cerro/cerro.tga")
     && LoadTGA(&treeTextureAr[50], "objetos/edificios/cielo/cielo.tga")
     && LoadTGA(&treeTextureAr[52], "objetos/edificios/cielo/atardecer.tga")
     && LoadTGA(&treeTextureAr[53], "objetos/edificios/cielo/noche.tga")
     && LoadTGA(&treeTextureAr[54], "objetos/interior/cuarto/pared.tga")
     && LoadTGA(&treeTextureAr[55], "objetos/interior/pisocuarto/pisocuarto.tga")
     && LoadTGA(&treeTextureAr[56], "objetos/interior/muebles/sofa/sofa.tga")
     && LoadTGA(&treeTextureAr[57], "objetos/interior/muebles/tv/shrekentv.tga")
     && LoadTGA(&treeTextureAr[58], "objetos/interior/muebles/cama/camasoporte.tga")
     && LoadTGA(&treeTextureAr[59], "objetos/interior/muebles/cama/camacolchon.tga")
     && LoadTGA(&treeTextureAr[60], "objetos/interior/muebles/cama/camasabana.tga")
     && LoadTGA(&treeTextureAr[61], "objetos/interior/muebles/mesa/mesa.tga")
     )
	{
		for (i = 0; i<62; i++){
			glGenTextures(1, &treeTextureAr[i].texID);
			glBindTexture(GL_TEXTURE_2D, treeTextureAr[i].texID);
			glTexImage2D(GL_TEXTURE_2D, 0, treeTextureAr[i].bpp / 8, treeTextureAr[i].width, treeTextureAr[i].height, 0, treeTextureAr[i].type, GL_UNSIGNED_BYTE, treeTextureAr[i].imageData);

			glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
			glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
			glEnable(GL_TEXTURE_2D);
			if (treeTextureAr[i].imageData)
			{
				free(treeTextureAr[i].imageData);
			}
		}
		return true;
	}
	else
	{
		return false;
	}
}
void DibujaModeloconTextura(GLMmodel* modelo, int i){

    glPushMatrix();
    glBindTexture(GL_TEXTURE_2D, treeTextureAr[i].texID);
    glmDraw(modelo, GLM_SMOOTH | GLM_TEXTURE);
    glPopMatrix();
}
void CargarModelos(){
    edificio1 = glmReadOBJ("objetos/edificios/edificio1/edificio1.obj");
    edificio2 = glmReadOBJ("objetos/edificios/edificio2/edificio2.obj");
    edificio3 = glmReadOBJ("objetos/edificios/edificio3/edificio3.obj");
    edificio4 = glmReadOBJ("objetos/edificios/edificio4/edificio4.obj");
    edificio5 = glmReadOBJ("objetos/edificios/edificio5/edificio5.obj");
    edificio6 = glmReadOBJ("objetos/edificios/edificio6/edificio6.obj");
    edificio7 = glmReadOBJ("objetos/edificios/edificio7/edificio7.obj");
     edificio8 = glmReadOBJ("objetos/edificios/edificio8/edificio8.obj");
    edificio9 = glmReadOBJ("objetos/edificios/edificio9/edificio9.obj");
     //edificio10 = glmReadOBJ("objetos/edificios/edificio10/edificio10.obj");

    edificio11 = glmReadOBJ("objetos/edificios/edificio11/edificio11.obj");
    edificio12 = glmReadOBJ("objetos/edificios/edificio12/edificio12.obj");
    edificio13 = glmReadOBJ("objetos/edificios/edificio13/edificio13.obj");
     edificio14 = glmReadOBJ("objetos/edificios/edificio14/edificio14.obj");
    edificio15 = glmReadOBJ("objetos/edificios/edificio15/edificio15.obj");
    edificio16 = glmReadOBJ("objetos/edificios/edificio16/edificio16.obj");
    edificio17 = glmReadOBJ("objetos/edificios/edificio17/edificio17.obj");
    edificio18 = glmReadOBJ("objetos/edificios/edificio18/edificio18.obj");
    edificio19 = glmReadOBJ("objetos/edificios/edificio19/edificio19.obj");
    edificio20 = glmReadOBJ("objetos/edificios/edificio20/edificio20.obj");
    edificio21 = glmReadOBJ("objetos/edificios/edificio21/edificio21.obj");
    edificio22 = glmReadOBJ("objetos/edificios/edificio22/edificio22.obj");
    edificio23 = glmReadOBJ("objetos/edificios/edificio23/edificio23.obj");

    edificio24 = glmReadOBJ("objetos/edificios/edificio24/edificio24.obj");
    edificio25 = glmReadOBJ("objetos/edificios/edificio25/edificio25.obj");
    edificio26 = glmReadOBJ("objetos/edificios/edificio26/edificio26.obj");
    edificio27 = glmReadOBJ("objetos/edificios/edificio27/edificio27.obj");
    edificio28 = glmReadOBJ("objetos/edificios/edificio28/edificio28.obj");
    edificio29 = glmReadOBJ("objetos/edificios/edificio29/edificio29.obj");
    edificio30 = glmReadOBJ("objetos/edificios/edificio30/edificio30.obj");
    edificio31 = glmReadOBJ("objetos/edificios/edificio31/edificio31.obj");
    edificio32 = glmReadOBJ("objetos/edificios/edificio32/edificio32.obj");
    edificio33 = glmReadOBJ("objetos/edificios/edificio33/edificio33.obj");
    edificio35 = glmReadOBJ("objetos/edificios/edificio35/edificio35.obj");
    edificio36 = glmReadOBJ("objetos/edificios/edificio36/edificio36.obj");
    edificio37 = glmReadOBJ("objetos/edificios/edificio37/edificio37.obj");
    edificio38 = glmReadOBJ("objetos/edificios/edificio38/edificio38.obj");
    edificio39 = glmReadOBJ("objetos/edificios/edificio39/edificio39.obj");
     edificio40 = glmReadOBJ("objetos/edificios/edificio40/edificio40.obj");
    edificio42 = glmReadOBJ("objetos/edificios/edificio42/edificio42.obj");
    edificio43 = glmReadOBJ("objetos/edificios/edificio43/edificio43.obj");
    edificio44 = glmReadOBJ("objetos/edificios/edificio44/edificio44.obj");
    edificio45 = glmReadOBJ("objetos/edificios/edificio45/edificio45.obj");
    edificio46 = glmReadOBJ("objetos/edificios/edificio46/edificio46.obj");


    piso = glmReadOBJ("objetos/edificios/piso/piso.obj");
    pista = glmReadOBJ("objetos/edificios/pista/pista.obj");
    campo = glmReadOBJ("objetos/edificios/campo/campo.obj");
    cerro = glmReadOBJ("objetos/edificios/cerro/cerro.obj");
    cielo = glmReadOBJ("objetos/edificios/cielo/cielo.obj");

    cuarto = glmReadOBJ("objetos/interior/cuarto/cuarto.obj");
    pisocuarto = glmReadOBJ("objetos/interior/pisocuarto/pisocuarto.obj");
    sofa = glmReadOBJ("objetos/interior/muebles/sofa/sofa.obj");
    tv = glmReadOBJ("objetos/interior/muebles/tv/tv.obj");
    camasoporte1 = glmReadOBJ("objetos/interior/muebles/cama/camasoporte.obj");
    camacolchon1 = glmReadOBJ("objetos/interior/muebles/cama/camacolchon.obj");
    camasabana1 = glmReadOBJ("objetos/interior/muebles/cama/camasabana.obj");
    mesa = glmReadOBJ("objetos/interior/muebles/mesa/mesa.obj");
}

void onMouse(int button, int state , int x, int y){ //capturar el estado actual del boton del mouse
    if ((button==GLUT_LEFT_BUTTON) & (state==GLUT_DOWN)){
       x_0=x;
       y_0=y;
       boton=1;
    }
    else{
        x_2=x;
        y_2=y;
        boton=0;
    }
}

void init(void){
    //77, 177, 233
	glClearColor(0.30196,0.69411,0.91372,1);
	LoadTreeTextures();
	glEnable(GL_DEPTH_TEST);
	//glShadeModel(GL_SMOOTH);
}
void onMotion (int x, int y){ // procedimiento cuando mueves el mouse
    if (boton==1){
       alfa= (alfa+(y-y_0)) ;
       beta= (beta+  (x-x_0)) ;
       //cout << "alfa: " << alfa <<"  |  beta: "<<beta<<"\n";
       x_0=x;
       y_0=y;
    }
    else{
        alfa2= (alfa2+(y-y_2)) ;
        beta2= (beta2+  (x-x_2)) ;
        x_2=x;
        y_2=y;
    }
    glutPostRedisplay();
}
void teclado_camara(int key, int xx, int yy){
    float avance_retroceso=2;
    switch (key){
        case GLUT_KEY_LEFT:
            angulo-=0.1;
            lx=sin(angulo);
            lz=-cos(angulo);
        break;
        case GLUT_KEY_RIGHT:

            angulo+=0.1;
            lx=sin(angulo);
            lz=-cos(angulo);
        break;
        case GLUT_KEY_UP:
            xc+= lx *avance_retroceso;
            zc+= lz *avance_retroceso;
        break;
        case GLUT_KEY_DOWN:
            xc-= lx *avance_retroceso;
            zc-= lz *avance_retroceso;
        break;



    }
    glutPostRedisplay();
}
void teclado_normal(unsigned char key, int x , int y){
    tecla=key;
    switch(tecla){
        case 'a':
         rotacion+=2;
        break;

        case 'd': rotacion-=2;
        break;

        case 'w': traslacion+=2;
        break;

        case 's': traslacion-=2;

        break;
        case ' ':
            yc+= ly*2;
        break;
    }
  glutPostRedisplay(); // redibujar
}
void exterior(){
DibujaModeloconTextura(edificio1,0);
    DibujaModeloconTextura(edificio2,1);
    DibujaModeloconTextura(edificio3,2);
    DibujaModeloconTextura(edificio4,3);
    DibujaModeloconTextura(edificio5,4);
    DibujaModeloconTextura(edificio6,5);
   DibujaModeloconTextura(edificio7,6);
      DibujaModeloconTextura(edificio8,6);//textura fallando
    DibujaModeloconTextura(edificio9,8);
   DibujaModeloconTextura(edificio11,10);

    DibujaModeloconTextura(edificio12,11);
    DibujaModeloconTextura(edificio13,12);
      DibujaModeloconTextura(edificio14,12);//textura fallando
    DibujaModeloconTextura(edificio15,14);
    DibujaModeloconTextura(edificio16,15);
    DibujaModeloconTextura(edificio17,16);
    DibujaModeloconTextura(edificio18,16);
    DibujaModeloconTextura(edificio19,18);
    DibujaModeloconTextura(edificio20,19);
    DibujaModeloconTextura(edificio21,20);
    DibujaModeloconTextura(edificio22,21);
    DibujaModeloconTextura(edificio23,22);
    DibujaModeloconTextura(edificio24,23);
    DibujaModeloconTextura(edificio25,24);
    DibujaModeloconTextura(edificio26,25);
    DibujaModeloconTextura(edificio27,26);
    DibujaModeloconTextura(edificio28,27);
    DibujaModeloconTextura(edificio29,28);
    DibujaModeloconTextura(edificio30,29);

    DibujaModeloconTextura(edificio31,30);
    DibujaModeloconTextura(edificio32,31);
    DibujaModeloconTextura(edificio33,32);

    DibujaModeloconTextura(edificio35,34);
    DibujaModeloconTextura(edificio36,35);
    DibujaModeloconTextura(edificio37,36);
    DibujaModeloconTextura(edificio38,37);
    DibujaModeloconTextura(edificio39,38);
    DibujaModeloconTextura(edificio40,39);
    DibujaModeloconTextura(edificio42,41);
    DibujaModeloconTextura(edificio43,42);
    DibujaModeloconTextura(edificio44,43);
    DibujaModeloconTextura(edificio45,44);
    DibujaModeloconTextura(edificio46,45);


    DibujaModeloconTextura(piso,46);
    DibujaModeloconTextura(pista,47);
    DibujaModeloconTextura(campo,48);
    DibujaModeloconTextura(cerro,49);
}
void dibujarcama(int transx, int transy, int transz, int rotax, int rotay, int rotaz, int ang){
    glPushMatrix();
        glRotatef(ang,rotax,rotay,rotaz);
        glTranslatef(transx,transy,transz);
        DibujaModeloconTextura(camasoporte1,58);
        DibujaModeloconTextura(camacolchon1,59);
        DibujaModeloconTextura(camasabana1,60);
    glPopMatrix();
}
void dibujarmesa(float transx, float transy, float transz, float rotax, float rotay, float rotaz, float ang,float scalex,float scaley,float scalez){
    glPushMatrix();
        glRotatef(ang,rotax,rotay,rotaz);
        glTranslatef(transx,transy,transz);
        glScalef(scalex,scaley,scalez);
        DibujaModeloconTextura(mesa,61);
    glPopMatrix();
}
void interior(){
    DibujaModeloconTextura(cuarto,54);
    DibujaModeloconTextura(pisocuarto,55);
    DibujaModeloconTextura(sofa,56);

    dibujarcama(0,0,0,0,0,0,0);
    dibujarcama(24,0,68,0,1,0,-90);
    dibujarcama(-5,0,68,0,1,0,-90);
    dibujarmesa(0,0,0,0,0,0,0,1,0.6,1);
    dibujarmesa(67,0,55,0,1,0,90,1,0.6,1.4);
    dibujarmesa(-75,0,-3,0,0,0,0,0.4,0.4,0.4);
    dibujarmesa(-75,0,-12,0,0,0,0,0.4,0.4,0.4);

    //dibujarmesa(0,0,0,0,0,0,0,1,0.8,1);
    //dibujarmesa(0,0,0,0,0,0,0,1,0.8,1);
    glPushMatrix();
        glRotatef(180,0,0,1);
        glTranslatef(127,-15,0);
        DibujaModeloconTextura(tv,57);
    glPopMatrix();
}

void graficar(void){
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    gluLookAt(xc,2,zc,xc+lx,2,zc+lz,0,1 ,0);
    glTranslatef(0, -1, 0);//traslado
    glScalef(0.4, 0.4, 0.4);// Escala
    glRotatef(45.0, 0.0, 1.0, 0.0);// Rotación
    glRotatef(alfa,1,0,0);
    glRotatef(beta,0,1,0);
    glRotatef(rotacion,0,1,0);
    glRotatef(traslacion,1,0,0);

     ///vieport
     glPushMatrix();
     if(flag){
        glTranslatef(1000,-50,500);
        exterior();
     }else{
        //luces(0.8,0.8,0.9,0,-1,0);
        interior();
     }

     if(mostrarViewport==1){
        //glViewport(w/4,h/5,w/2, h/2);
        DibujaModeloconTextura(cielo,50);
     }

     if(mostrarViewport==2){
        //glViewport(w/1.9,h/2,w/2, h/2);
        DibujaModeloconTextura(cielo,52);
     }

     if(mostrarViewport==3){
        //glViewport(0,0,w/2, h/2);
        DibujaModeloconTextura(cielo,53);
     }

     glPopMatrix();

     glPushMatrix();
     //luces(0.6,0.7,0.5,0,-1,0);

     //
    glutSwapBuffers();
}

void menu(int opcion){
    switch(opcion){
    case fondo1:
       ifondo=0;
    break;
    case fondo2:
         ifondo=1;
    break;
    case fondo3:
         ifondo=2;
    break;
    case fondo4:
         ifondo=3;
    break;

    case centro:
      mostrarViewport=1;
      perspectiva = 10;
    break;
    case derecha:
       mostrarViewport=2;
       perspectiva = 40;
    break;
    case izquierda:
       mostrarViewport=3;
       perspectiva = 80;
    break;
    case salida:
        exit(0);
        break;
    case menumodeloexterior:
        flag = true;
        break;
    case menumodelointerior:
        flag = false;
        break;
    }
 glutPostRedisplay();
}
void creacionmenu (void) {
    int menuprincipal, menu1_fondo, menu2_viewport, modelo;

    menu1_fondo=glutCreateMenu(menu);
    glutAddMenuEntry("VERDE CLARO", fondo1);
    glutAddMenuEntry("CELESTE", fondo2);
    glutAddMenuEntry("VERDE SUAVE", fondo3);
    glutAddMenuEntry("AZUL", fondo4);

    menu2_viewport=glutCreateMenu(menu);
    glutAddMenuEntry("Dia", centro);
    glutAddMenuEntry("noche", izquierda);
    glutAddMenuEntry("tarde", derecha);

    modelo = glutCreateMenu(menu);
    glutAddMenuEntry("interior", menumodelointerior);
    glutAddMenuEntry("exterior", menumodeloexterior);

    //menu principal
    menuprincipal=glutCreateMenu(menu);
    glutAddSubMenu("COLOR DE FONDO", menu1_fondo);
    glutAddSubMenu("Tiempo", menu2_viewport);
    glutAddSubMenu("modelo", modelo);
    glutAddMenuEntry("Exit",salida);
    glutAttachMenu(GLUT_RIGHT_BUTTON);

}
void redimensionar(int x,int y){
    glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glViewport(0,0,x,y);
	gluPerspective (perspectiva, (GLfloat)x / (GLfloat)y, 1, 100000.0);
	glMatrixMode(GL_MODELVIEW);
    w=x;
    h=y;
}
void luces(){
    //luz de toda la escena
    glEnable(GL_LIGHT0);
    float luz_ambiente[] = {1,1,1,0};
    float posicion_luz[]={1,1,1,0};
    glLightfv(GL_LIGHT0,GL_POSITION,posicion_luz );
    glLightfv(GL_LIGHT0,GL_AMBIENT,luz_ambiente);

   ///Brillo general
    float material []={1,1,1,0};
    float intensidad =10;
    glMaterialfv(GL_FRONT,GL_SPECULAR,material);
    glMaterialf(GL_FRONT,GL_SHININESS,intensidad);
   ///
}
int main(int argc, char** argv){
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB | GLUT_DEPTH | GLUT_DOUBLE);
	glutInitWindowSize(1000, 800);
	glutInitWindowPosition(100, 100);
	glutCreateWindow("Ciudad");
	init();
	glEnable(GL_DEPTH_TEST);
	luces();
    CargarModelos();
    creacionmenu();
	glutDisplayFunc(graficar);
	glutReshapeFunc(redimensionar);
	glutKeyboardFunc(teclado_normal);
    glutSpecialFunc(teclado_camara);
    glutMouseFunc(onMouse);
    glutMotionFunc(onMotion);
	glutMainLoop();
	return 0;
}

