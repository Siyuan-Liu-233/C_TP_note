# C_TP_note
TP上机课写的处理灰度图像的小程序
实现 灰度图像的读写，灰度值的翻转，滤波等简单功能
Pour compiler le programme:     
pour lecture/écriture d'image
  step1 gcc read_fonction.c read_image.c -o file_name                  
    on peux obtenir la résultat directment 
  step2 gcc read_fonction.c write_image.c -o file_name                 
    résultat est write_image.pgm 
pour inverser l'image
  step3 gcc read_fonction.c inverse.c -o file_name                     
    résultat est inverse_write_image.pgm 
pour obtenir histogramme d'image 
  step4 gcc read_fonction.c Histogramme_image.c -o file_name           
    on peux obtenir la résultat directment 
pour obtenir filtre numérique RIF 
  step5 gcc read_fonction.c filter_boderx.c -o file_name               
    résultat est write_filter_boderx.pgm 
  step6 gcc read_fonction.c filter_bodery.c -o file_name               
    résultat est write_filter_bodery.pgm 
