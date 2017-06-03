#include <stdio.h>
#include <string.h>
#include "image_t.h"
#include "read_fonction.h"



int main()
{
    image_t image_p2={0};  
    read_image(&image_p2);
    if(image_p2.nombre[1]!='2')
        printf("it is not a picture of P2\n");
    else 
        {
        	printf("it is a picture of P2\n");
        	show_donner(image_p2.donner,image_p2.largeur,image_p2.hauter);
        }


    
    return 0;
}

