Pour compiler le programme:

pour lecture/¨¦criture d'image
step1 gcc read_fonction.c read_image.c -o file_name                  on peux obtenir la r¨¦sultat directment
step2 gcc read_fonction.c write_image.c -o file_name                 r¨¦sultat est write_image.pgm
pour inverser l'image
step3 gcc read_fonction.c inverse.c -o file_name                     r¨¦sultat est inverse_write_image.pgm
pour obtenir histogramme d'image
step4 gcc read_fonction.c Histogramme_image.c -o file_name           on peux obtenir la r¨¦sultat directment
pour obtenir filtre num¨¦rique RIF
step5 gcc read_fonction.c filter_boderx.c -o file_name               r¨¦sultat est write_filter_boderx.pgm
step6 gcc read_fonction.c filter_bodery.c -o file_name               r¨¦sultat est write_filter_bodery.pgm


on peux n¨¦gliger:
 warning: format ¡®%d¡¯ expects argument of type ¡®int *¡¯, but argument 3 has type ¡®char *¡¯ [-Wformat=]
                 sscanf(s+j,"%d",*(donner+i)+k++);
parce que v_max<=255
1 byte est suffisant pour type char.
