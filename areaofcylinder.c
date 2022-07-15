// Calculate the area of a circle and modify the same program to calculate the volume of a cylinder given its radius and height.

#include<stdio.h>
#include<math.h>
        
int main(){
        int r,h;
        float a=0, b=0;
        printf("Enter the value of radius of the circle r: ");
        scanf("%d", &r);

        a = (M_PI)*r*r;
        printf("The area of the circle is %f",a);

        printf("\nEnter the value of height of the cylinder h: ");
        scanf("%d",&h);

        b = a*h;
        printf("\nThe area of the cylinder with radius r and height h is %f ",b);        

        return 0;
}