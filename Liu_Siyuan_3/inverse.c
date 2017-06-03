#include <stdio.h>
#include <string.h>
#include "image_t.h"
#include "read_fonction.h"

int main(int argc, char const *argv[])
{
	image_t image_p2={0};  
	read_image(&image_p2);
	for (int i = 0; i < image_p2.hauter; ++i)
	{
		for(int j=0; j<image_p2.largeur;j++)
		{
			image_p2.donner[i][j]=image_p2.vmax-image_p2.donner[i][j];
		}
	}
	inverse_write_image(&image_p2);
	show_donner(image_p2.donner,image_p2.largeur,image_p2.hauter);
    

	return 0;
}

