#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "image_t.h"
#include "read_fonction.h"


int main()
{   
    image_t image_p2={0};  
    read_image(&image_p2);
    char *p=(char *)malloc(sizeof(char)*(image_p2.hauter-1)*(image_p2.largeur-1));
    int i;
    int j;
    int k=0;
    for(i=1;i<(image_p2.hauter-1);i++)
    	{
    		for(j=1;j<(image_p2.largeur-1);j++)
    	    	{
    	    		*(p+k)=(-1)*(image_p2.donner[i-1][j-1]+image_p2.donner[i-1][j+1])+1*(image_p2.donner[i+1][j-1]+image_p2.donner[i+1][j+1])-2*image_p2.donner[i-1][j]+2*image_p2.donner[i+1][j];
    	    		k++;
    	    	}
    	}

    k=0;
    for(i=1;i<(image_p2.hauter-1);i++)
    	{
    		for(j=1;j<(image_p2.largeur-1);j++)
    	    	{
    	    		image_p2.donner[i][j]=*(p+k);
    	    		k++;
    	    	}
    	}
	show_donner(image_p2.donner,image_p2.largeur,image_p2.hauter);

    write_filter_bodery(&image_p2);
	free(p);
	return 0;
}