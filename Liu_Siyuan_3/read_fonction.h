#ifndef _B_H_
#define _B_H_
void get_nombre(char* s_nombre);
void get_largeur_hauter(int *largeur,int *hauter);
void get_vmax(int *vmax);
void get_donner(char (*donner)[100],int largeur,int hauter);
void show_donner(char (*donner)[100],int largeur,int hauter);
void read_image(image_t *image_p2);
void put_donner(char (*donner)[100],int largeur,int hauter,FILE *p);
void inverse_write_image(image_t* image_p2);
void write_filter_boderx(image_t* image_p2);
void write_filter_bodery(image_t* image_p2);


#endif