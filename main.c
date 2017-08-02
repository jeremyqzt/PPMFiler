#include <stdio.h>
#include <stdlib.h>
#include "a1.h"

int main(int argc, char* argv[]){
  int m, n;

  int width, height, max;

  
  char *input = argv[1]; //Input File Name
  char *output = argv[2]; //Output File Name

  int sent;

  RGB *image;
  RGB *newPixel; //new Pixel is the new buffer

  image = readPPM(input, &width, &height, &max); //Read the entire image  
  newPixel = (RGB*)malloc(width*height*sizeof(RGB)); 

  for (int i=0; i < width * height; i++){
	filter(newPixel, image, i, width, height);
  } 

  writePPM(argv[2], width, height, max, newPixel);
   
  free(image);
  free(newPixel);

  return 0;
}


