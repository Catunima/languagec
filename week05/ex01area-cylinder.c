#include <stdio.h>

int main(void) {
  //Test.
	float r=0,h=0,pi = 3.1416;

	/*
	r = radius, h = altura, pi es la constante pi
	*/
	float area=0;//variable donde se guardará el resultado

	printf("Input the value radius\n");
	scanf("%f", &r);

	printf("Input the value of height\n");
	scanf("%f",&h);
	//formula para sacar el area de un cilindro
	area = 2*pi*r*(r+h);

	printf("the area is: %f\n", area);
  return 0;
}
