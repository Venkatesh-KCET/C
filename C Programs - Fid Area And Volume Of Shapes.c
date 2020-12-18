#include <stdio.h>

int main()
{
    int a;
    float l, b, h, r;
    //Select The Shape
    printf("Choose The Shape To Find The Volume And The Area:\n");
    printf("1. Cuboid\n2. Cube\n3. Cylinder\n4. Cone\n5. Sphere\n6. Hemisphere\n\n");
    printf("Please Enter The Shape Numbers: ");
    scanf("%d", &a);

    if(a == 1) {
        printf("Enter Length Of The Cuboid: ");
        scanf("%f", &l);
        printf("Enter Breadth Of The Cuboid: ");
        scanf("%f", &b);
        printf("Enter Height Of The Cuboid: ");
        scanf("%f", &h);
        
        printf("Area = %f \n", 2*((l*b)+(b*h)+(l*h)));
        printf("Volume = %f \n", l*b*h);
    } else if(a == 2) {
        printf("Enter The Cube Value Of A: ");
        scanf("%f", &l);

        printf("Area = %f \n", 6*l*l);
        printf("Volume = %f \n", l*l*l);
    } else if(a == 3) {
        printf("Enter The Radius Of A Circle: ");
        scanf("%f", &l);
        printf("Enter The Height Of A Circle: ");
        scanf("%f", &h);
        
        printf("Area = %f \n", 2*3.14*l*(l+h));
        printf("Volume = %f \n", 3.14*l*l*h);
    }  else if(a == 4) {
        printf("Enter The Length Of A Cone: ");
        scanf("%f", &l);
        printf("Enter The Radius Of A Cone: ");
        scanf("%f", &r);
        
        printf("Area = %f \n", 3.14*r*(l+r));
        printf("Volume = %f \n", (1/2)*3.14*l*l*h);
    }  else if(a == 5) {
        printf("Enter The Radius Of A Sphere: ");
        scanf("%f", &r);
        
        printf("Area = %f \n", 4*3.14*r*r);
        printf("Volume = %f \n", (4/3)*3.14*r*r*r);
    }  else if(a == 6) {
        printf("Enter The Radius Of A Hemisphere: ");
        scanf("%f", &r);
        
        printf("Area = %f \n", 3*3.14*r*r);
        printf("Volume = %f \n", (2/3)*3.14*r*r*r);
    } else {
        printf("You Have Entered Other Than The Given Shapes\n");
    }
    return 0;
}

