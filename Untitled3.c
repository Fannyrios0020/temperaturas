#include <stdio.h>
#include <locale.h>
#include <windows.h>

int main (int argc,char **argv)
{
	system("color f6");
	setlocale(LC_ALL, "");
	float celsius = 18 ;
	float fahrenheit = 81 ;
	float temperaturaFahrenheit ;
	float temperaturaCelsius ;
	
temperaturaFahrenheit = (9/5.0)*celsius +32 ;
temperaturaCelsius = (fahrenheit - 32.0)*(5.0/9.0);
printf("TEMPERATURAS");
printf("\n");
printf("\n");
printf ("Mostrar temperaturaFahrenheit: %f°F \n", temperaturaFahrenheit);
printf ("Mostrar temperaturaCelius: %f°C\n " , temperaturaCelsius);

return 0;


}
