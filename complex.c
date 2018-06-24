#include "complex.h"
#include <stdio.h>
#include <math.h>

ComplexNumber add_complex(ComplexNumber z1,ComplexNumber z2){
	ComplexNumber res;
	 res.r = z1.r + z2.r;
	 res.i = z1.i + z2.i;
	 
	 return(res);
};


ComplexNumber create_complex(long double r, long double i){
	ComplexNumber c;
	c.r = r;
	c.i = i;
	return c;
}

ComplexNumber square_complex(ComplexNumber z1){
	ComplexNumber res1;
	 res1.r = z1.r*z1.r - z1.i*z1.i ;
	 res1.i =2 * z1.r*z1.i;
	 
	 return(res1);
};

long double magnitude_complex(ComplexNumber z1){
	 return sqrtl( z1.r*z1.r + z1.i*z1.i );	 
};
 
