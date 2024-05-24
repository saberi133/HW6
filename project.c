//Mohammad Saberi
//982221043

#include <stdio.h>
#include <math.h>

void solver(int a, int b,int c)
{
	 double delta;
	  delta = (b*b)-(4*a*c);
	 
	   if(delta == 0)

    {
    	double javab = (-b)/(2*a);
    	printf("The only answer: \n");

        printf("%f",javab);

    }

    else if(delta > 0)

    {
	 double javab1 =  ((-b)+sqrt(delta))/(2*a);
	 double javab2 =  ((-b)-sqrt(delta))/(2*a); 
	 
    	printf("The Two answer: \n");
        printf("%f \n",javab1);
        printf("%f \n",javab2);

    }
    else if (delta < 0)
    {
        	printf("No equation has no real roots");

	}

}

int main()

{

    int a, b, c;

printf("Enter a,b,c integers: ");
scanf("\n %d \n %d \n %d", &a, &b,&c);    
solver(a,b,c);

return 0;
}
