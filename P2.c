#include<stdio.h>
#include<math.h>

main()
{int flag=0;
float a,b,c;
float x1,x2;
float A,B,disc;
	printf("Ingresa el valor a:");
	scanf("%f",&a);
	printf("\nIngresa el valor b:");
	scanf("%f",&b);
	printf("\nIngresa el valor c:");
	scanf("%f",&c);
	if(a==0)
		{printf("\nNo hay soluci%cn / infinito.",162);}
	else
		{A=-b/(2*a);
		disc=(b*b)-(4*a*c);
		if(disc<0)
			{flag=1;}
		disc=fabs(disc);
		disc=sqrt(disc);
		B=disc/(2*a);
		if(flag==1)
			{printf("\nx1= %f+%f",A,B);
			printf("\nx2= %f-%f",A,B);}
		else
			{x1=A+B;
			x2=A-B;
			printf("\nx1= %f\nx2= %f",x1,x2);}
		}
return(0);}
