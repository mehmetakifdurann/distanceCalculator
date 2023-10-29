//
//  main.c
//  distanceCalculator
//
// This program calculates the distance between 2 points.
//
//  Created by Akif Duran on
//

#include <math.h>
#include <stdio.h>
int main (){
    
    float x1, x2, y1, y2, distance1,realDistance;
    
        //Getting the cordinates
    
    printf("Please enter the 1st coordinate: \n");
    scanf("%f%f", &x1,&y1);
    
    printf("Please enter the 2nd coordinate: \n");
    scanf("%f%f", &x2, &y2);
    
        //operation
    
    distance1 = (x2-x1)*(x2-x1)+(y2-y1)*(y2-y1);
    realDistance = sqrt(distance1);
    
    printf("The distance between these coordinates is : %f \n", realDistance);
    
    
    

    return 0;
}
    

