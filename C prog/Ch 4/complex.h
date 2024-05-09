#include <complex.h>
#include <stdio.h>
 
// Driver code
int
main(
void
)
{
    
double
real = 1.3,
        
imag = 4.9;
    
double
complex z = real+imag*I;
    
double
complex conj_f = conjf(z);
    
printf
(
"z = %.1f + %.1fi\n"
,
        
creal(conj_f),
        
cimag(conj_f));
}
