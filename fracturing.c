#include<stdio.h>
#include<math.h>
#define pi 3.14159

double distanceFormula() {
    double x1;
    double x2;
    double y1;
    double y2;
    scanf ("%lf", &x1);
    scanf ("%lf", &x2);
    scanf ("%lf", &y1);
    scanf ("%lf", &y2);
    printf ("Point #1 entered: x1 = %.0lf; y1 = %.0lf \n",x1,y1);
    printf ("Point #2 entered: x2 = %.0lf; y2 = %.0lf \n",x2,y2);
    double distance = 0;
    distance = sqrt(pow((x2-x1),2)+pow((y2-y1),2));
    

    return distance;
    
}

double calculateDistance() {
    double x1;
    double x2;
    double y1;
    double y2;
    double distance = 0;
    distance = distanceFormula();
    printf ("The distance between the two points is %.3lf\n", distance);

    return distance;
}

double calculatePerimeter() {
    double x1;
    double x2;
    double y1;
    double y2;
    double distance = distanceFormula();
    double perimeter = 0;
    perimeter = 2*pi*(distance/2);
    double difficultyPerimeter = 2.0;
    printf ("The perimeter of the city encompassed by your request is %.3lf\n", perimeter);
    
    return difficultyPerimeter;
    
}

double calculateArea() {
    double x1;
    double x2;
    double y1;
    double y2;
    double distance = distanceFormula();
    double area = 0;
    area = pi*pow((distance/2), 2);
    double difficultyArea = 2.0;
    printf ("The area of the city encompassed by your request is %.3lf\n", area);
    
    return difficultyArea;
    
}

double calculateWidth() {
    double x1;
    double x2;
    double y1;
    double y2;
    double distance = distanceFormula();
    double width = 0;
    double difficultyWidth = 1.0;
    width = distance;
    printf ("The width of the city encompassed by your request is %.3lf\n", width);
    
    return difficultyWidth;

 }


double calculateHeight() {
    double x1;
    double x2;
    double y1;
    double y2;
    double distance = distanceFormula();
    double height = 0;
    height = distance;
    double difficultyHeight = 1.0;
    printf ("The height of the city encompassed by your request is %.3lf\n", height);

    return difficultyHeight;

}

int main(int argc, char **argv) {

    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();

    return 0;

}