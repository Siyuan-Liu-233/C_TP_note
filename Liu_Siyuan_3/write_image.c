#include <stdio.h>
#include <string.h>
#include "image_t.h"
#include "read_fonction.h"


int main()
{   
    image_t image_p2={0};  
    FILE *p=fopen("write_image.pgm","w");
    read_image(&image_p2);
    fprintf(p,"%s",image_p2.nombre);
    fprintf(p,"%d %d\n",image_p2.largeur,image_p2.hauter );
    fprintf(p,"%d\n",image_p2.vmax);
    put_donner(image_p2.donner,image_p2.largeur,image_p2.hauter,p);
    fclose(p);
    return 0;
}
 