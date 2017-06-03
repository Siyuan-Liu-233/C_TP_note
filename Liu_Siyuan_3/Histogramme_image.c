#include <stdio.h>
#include <string.h>
#include "image_t.h"
#include "read_fonction.h"


int main()
{   
    image_t image_p2={0};
    Histogramme image_data={0};
    int x[256]={0};
    char numero[256];
    char nombre[256];
    read_image(&image_p2);
    int i=0;
    int j=0;
    int k=0;
    int max=0;
    for ( i = 0; i < image_p2.hauter; ++i)
	{
		for( j=0; j<image_p2.largeur;j++)
		{
			for (k = 0; k <= image_p2.vmax; k++)
			{
				if(image_p2.donner[i][j]==k)
					{x[k]=x[k]+1;}
			}
			
		}
	}
	for(i=0;i<k;i++)
		printf("%d ",x[i]);

	j=0;
	k=0;
	for(i=0;i<255;i++)
	{
		if(x[i]!=0)
			{	
				numero[k]=i;
				nombre[k]=x[i];
				k++;
			}
		if(max<x[i])
		{
			max=x[i];
		}
	}

	printf("%d\n",max );
	
	for(i=0;i<k;i++)
		printf("%d ",numero[i]);
	for(i=0;i<k;i++)
		printf("%d ",nombre[i]);
 	printf("\n");
 	for(i=0;i<k;i++)
 		{
 			image_data.nombre_pixe[i]=nombre[i];
 			image_data.numero_pixe[i]=numero[i];
 		}

	while(max!=0)
	{
		
		for(i=0;i<k;i++)
		{	
			
			if (nombre[i]==max)
				{
				
					printf("  *  ");
					nombre[i]--;
				}
			else 
				printf("     ");
			
		}
		printf("\n");
		max--;
	}
	for(i=0;i<k;i++)
		
		{
			if(numero[i]/10==0)
                printf("  %d  ",numero[i] );
            else if((numero[i]/10>0)&&(numero[i]/100==0))
                printf(" %d  ", numero[i] );
            else if(numero[i]/100>0)
                printf("%d  " , numero[i] );
        }


}  