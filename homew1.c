#include <stdio.h>
#include <math.h>

int main(void) {
    float a = 0;
    float b = 256;
    float c = 256;
    double D;
    double x1, x2;

    printf("ax2 + bx + c = 0,  a != 0 \n");

    while( a == 0 || a > 255 || a < -255 ){
        printf("Please enter value for a (from -255 to 255 and a != 0)\n");
        scanf("%f", &a);
    }

    while( b > 255 || b < -255 ){
        printf("Please enter value for b (from -255 to 255)\n");
        scanf("%f", &b);
    }

    while( c > 255 || c < -255 ){
        printf("Please enter value for c (from -255 to 255)\n");
        scanf("%f", &c);
    }

    // Calculate discriminant  
    D = pow(b, 2) - 4 * a * c;


    if ( D == 0 ) {
        //Quadratic equation has exactli root 
        x1 = (-b * 2) / (2 * a);
        printf( "x1 = %.2f\n", x1 );
    } else if ( D > 0 ){
         //Quadratic equation has two roots
        x1 = ( -b + sqrt(D) ) / ( 2 * a );
        x2 = ( -b - sqrt(D) ) / ( 2 * a );
        printf( "x1 = %.2f : x2 = %.2f\n", x1, x2 );
    } else {
        printf( " The quadratic equation has no root\n" );
    }

    return 0;
}
