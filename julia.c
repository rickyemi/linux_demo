#include "complex.h"
#include <string.h>

#define MAXITER 256

int julia(ComplexNumber z, ComplexNumber c);

int main(int argc, char const *argv[])
{
	if(argc == 8){
		printf("Expects 8 parameters xmin xmax ymin ymax xpoints ypoints creal and cimag\n");
		return 0;
	}

	long double xmin;
	sscanf(argv[1],"%Le",&xmin);	

	long double xmax;
	sscanf(argv[2],"%Le",&xmax);
	
	long double ymin;
	sscanf(argv[3],"%Le",&ymin);

	long double ymax;
	sscanf(argv[4],"%Le",&ymax);

	long double xpoints;
	sscanf(argv[5],"%Le",&xpoints);

	long double ypoints;
	sscanf(argv[6],"%Le",&ypoints);

	long double creal;
	sscanf(argv[7],"%Le",&creal);

	long double cimag;
	sscanf(argv[8],"%Le",&cimag);
	if(xmin > xmax){
		printf("xmin has to be less then xmax\n" );
		return 0;
	}
	
	if(ymin > ymax){
		printf("ymin has to be less then ymax\n" );
		return 0;
	}
	
	long double xiter = (xmax - xmin)/xpoints;
	long double yiter = (ymax - ymin)/ypoints;
	for (long double x = xmin; x < xmax; x += xiter){
		for(long double y = ymin; y <ymax; y += yiter){
			int iter = julia(create_complex(x,y),create_complex(creal,cimag));
			printf("%Le,%Le,%i\n",x,y,iter );
		}
	}
	return 0;

}

int julia(ComplexNumber z, ComplexNumber c){
	for(int iter = 0; iter <= MAXITER; ++iter){
	  z = add_complex(square_complex(z),c);
	  if(magnitude_complex(z) > 2){
	  	return iter;
	  }
	}
	return MAXITER;
}

