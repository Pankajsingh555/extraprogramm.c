#include<stdio.h> 
int main() 
{ 
    float c; //c=radius of circle 
    float s; //s=sides of square 
    float l,w; //length and width of rectangle 

    //Circle 
    printf("Enter the radius of circle:"); 
    scanf("%f",&c); 
    printf("Area of Circle is: %.2f\n",3.14*c*c); 
    printf("Perimeter of Circle is: %.2f\n",2*3.14*c); 

    //Square 
    printf("Enter the sides of Square:"); 
    scanf("%f",&s); 
    printf("Area is Square is: %.2f\n",s*s); 
    printf("Perimeter of Square is: %.2f\n",4*s); 

    //Rectangle 
    printf("Enter length of Rectangle:"); 
    scanf("%f",&l); 
    printf("Enter width of Rectangle:"); 
    scanf("%f",&w); 
    printf("Area of Rectangle: %.2f\n",l*w); 
    printf("Perimeter of Rectangle: %.2f\n",2*l+w); 

    return 0;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  
}   
