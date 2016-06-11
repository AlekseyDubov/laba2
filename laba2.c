#include <stdio.h> 
#include <math.h> 

void main ()
{
	float a, b, c, d, x1 = 0, x2 = 0; 
	printf("Введите a: ");
	scanf("%f", &a);
	printf ("Введите b: ");
	scanf("%f", &b); 
	printf("Введите c: ");
	scanf("%f", &c);
	if (a == 0) printf("\a\n Уравнение не имеет корней! "); 
    	else 
	{
		d = b * b - 4 * a * c;
        	if (d < 0) printf("\a\n Уравнение не имеет вещественных корней! "); 
        	else 
		{	
        		if (d == 0)
			x1 = -b / (2 / a);
	        	if (b == 0 && c == 0) 
			{
				x1 = 0; 
				printf(" Уравнение имеет один корень: x = %f\n", x1); 
			} 
			else 
			{
				x1 = (-b - sqrt(d)) / (2 * a); 
				x2 = (-b + sqrt(d)) / (2 * a); 
				printf (" Уравнение имеет два корня: \n x1 = %f\n x2 = %f\n" , x1, x2);
			}
		}
	}	
}
