
#include <stdio.h>
#include <string.h>
#include "image_t.h"
#include "read_fonction.h"
void get_nombre(char* s_nombre)
{   
    char s[100];
    FILE *p = fopen("P2_1.pgm","r"); 
    fgets(s, sizeof(s),p);
    while(s[0]=='#')
        {
         fgets(s, sizeof(s),p);
        }
    strcpy(s_nombre,s);
    fclose(p);
}

void get_largeur_hauter(int *largeur,int *hauter)
{
    char s[100];
    FILE *p = fopen("P2_1.pgm","r"); 
    for (int i = 0; i < 2; ++i)
    {
        fgets(s, sizeof(s),p);
        while(s[0]=='#')
        {
         fgets(s, sizeof(s),p);
        }  
    } 
    sscanf(s,"%d %d",largeur,hauter);
    fclose(p);
   
}


void get_vmax(int *vmax)
{
    char s[100];
    FILE *p = fopen("P2_1.pgm","r"); 
    for (int i = 0; i <3; ++i)
    {   
        fgets(s, sizeof(s),p);
        while(s[0]=='#')
        {
         fgets(s, sizeof(s),p);
        }
    }
    sscanf(s,"%d",vmax);
    fclose(p);
   
}

void get_donner(char (*donner)[100],int largeur,int hauter)
{
    char s[100];
     FILE *p = fopen("P2_1.pgm","r");
     for (int i = 0; i < 4; ++i)
    {   
        fgets(s, sizeof(s),p);
        while(s[0]=='#')
        {
         fgets(s, sizeof(s),p);
        }
        
    }
    
    for ( int i = 0; i < hauter; ++i)
    {   
        int k=0;
         while(s[0]=='#')
        {
         fgets(s, sizeof(s),p);
        }
        for (int j = 0; s[j] != '\0'; ++j)
        {   
             if(j==0)
            {       
                sscanf(s+j,"%d",*(donner+i)+k++);
            }
            else if((s[j]>='0')&&(s[j]<='9')&&(s[j-1]==' '))
            {   
                sscanf(s+j,"%d",*(donner+i)+k++);
                
            }

        }
        fgets(s, sizeof(s),p);
    }
     fclose(p);
}

void show_donner(char (*donner)[100],int largeur,int hauter)
{
     for ( int i = 0; i < hauter; ++i)
    {
         printf("%d",donner[i][0] );
        for (int j = 1; j<largeur; ++j)
        {
            if((donner[i][j]/10==0)&&(donner[i][j]>=0))
                printf("   %d",donner[i][j] );
            else if((donner[i][j]/10>0)&&(donner[i][j]/100==0))
                printf("  %d",donner[i][j] );
            else if(donner[i][j]/100>0)
                printf(" %d",donner[i][j] );
            else if((donner[i][j]<0)&&(donner[i][j]>-10))
                printf("  %d",donner[i][j] );
            else if((donner[i][j]<-9)&&(donner[i][j]>-100))
                printf(" %d",donner[i][j] );
        }
        printf("\n");
    }
}

void put_donner(char (*donner)[100],int largeur,int hauter,FILE *p)
{
     for ( int i = 0; i < hauter; ++i)
    {
         fprintf(p,"%d",donner[i][0] );
        for (int j = 1; j<largeur; ++j)
        {
            if((donner[i][j]/10==0)&&(donner[i][j]>=0))
                fprintf(p,"   %d",donner[i][j] );
            else if((donner[i][j]/10>0)&&(donner[i][j]/100==0))
                fprintf(p,"  %d",donner[i][j] );
            else if(donner[i][j]/100>0)
                fprintf(p," %d",donner[i][j] );
            else if((donner[i][j]<0)&&(donner[i][j]>-10))
                fprintf(p,"  %d",donner[i][j] );
            else if((donner[i][j]<-9)&&(donner[i][j]>-100))
                fprintf(p," %d",donner[i][j] );
        }
        fprintf(p,"\n");
    }
}

void read_image(image_t* image_p2)
{
    get_nombre(image_p2->nombre);
 
    get_largeur_hauter(&image_p2->largeur,&image_p2->hauter);
  
    get_vmax(&image_p2->vmax);
  
    get_donner(image_p2->donner,image_p2->largeur,image_p2->hauter);
   
}

void inverse_write_image(image_t *image_p2)
 { 
     FILE *p=fopen("inverse_write_image.pgm","w");
     fprintf(p,"%s",image_p2->nombre);
     fprintf(p,"%d %d\n",image_p2->largeur,image_p2->hauter );
     fprintf(p,"%d\n",image_p2->vmax);
     put_donner(image_p2->donner,image_p2->largeur,image_p2->hauter,p);
     fclose(p);
 }

 void write_filter_boderx(image_t *image_p2)
 {
     FILE *p=fopen("write_filter_boderx.pgm","w");
     fprintf(p,"%s",image_p2->nombre);
     fprintf(p,"%d %d\n",image_p2->largeur,image_p2->hauter );
     fprintf(p,"%d\n",image_p2->vmax);
     put_donner(image_p2->donner,image_p2->largeur,image_p2->hauter,p);
     fclose(p);
 }
 void write_filter_bodery(image_t *image_p2)
 {
     FILE *p=fopen("write_filter_bodery.pgm","w");
     fprintf(p,"%s",image_p2->nombre);
     fprintf(p,"%d %d\n",image_p2->largeur,image_p2->hauter );
     fprintf(p,"%d\n",image_p2->vmax);
     put_donner(image_p2->donner,image_p2->largeur,image_p2->hauter,p);
     fclose(p);
 }
