
#ifndef COMPLEX_H
#define COMPLEX_H
#include <stdio.h>
 
typedef struct _complexNumber{
	long double r;
	long double i;
}ComplexNumber;

ComplexNumber add_complex(ComplexNumber z1,ComplexNumber z2);
ComplexNumber square_complex(ComplexNumber z1);
ComplexNumber create_complex(long double r, long double i);
long double magnitude_complex(ComplexNumber z1);


#endif


