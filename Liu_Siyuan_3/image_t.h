#ifndef _A_H_
#define _A_H_
typedef struct
{  
    char nombre[100];
    int largeur;
    int hauter;
    int vmax;
    char donner[100][100];   
} image_t;

typedef struct 
{
	int nombre_pixe[255];	
	int numero_pixe[255];
}Histogramme;
#endif
