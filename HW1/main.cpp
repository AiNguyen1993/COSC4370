#include <iostream>
#include "BMP.h"
#include <cmath>

int main() {

    
    // Image should be 2000x2000 to contain ellipse
    BMP bmpNew(2000,2000,false);
    bmpNew.fill_region(0, 0, 2000, 2000, 0, 0, 0, 0);
    float y_x; 

    // First loop to draw the right part of ellipse
    for(int i=0;i<768;i++)
    {

        y_x = 6*sqrt(4096-pow(i,2)/144);
        bmpNew.set_pixel(i+1000, y_x+1000, 255, 255, 255, 0);

    }

    // Second loop to draw the left part of ellipse
    for(int i = -768; i < 0; i++){

        y_x = 6*sqrt(4096-pow(i,2)/144);
        bmpNew.set_pixel(1000+i, y_x+1000, 255, 255, 255, 0);

    }

    // Output 
    bmpNew.write("output.bmp");


  
}