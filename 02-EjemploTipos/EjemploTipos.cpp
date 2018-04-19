#include <iostream>

int main()
{
	char nombre[10] = "Elmer";		//Leo nombre
	int edad = 20;					//Leo edad
	bool esMayor;					//Declaro bool
	char sexo='M';					//Leo sexo

	std::cout <<"Hola "<<nombre<<"\n";				//Imprimo
	std::cout <<"Tienes "<<edad<<" anios" <<"\n";	//Imprimo
	esMayor = edad >= 18;			//Comparo
	if(esMayor==true)				//Verifico condicion
	{
		std::cout <<"Sos mayor de edad. ";	//Imprimo
		if (sexo == 'M')					//Verifico otra condicion
			std::cout <<"Sos hombre. ";		//Imprimo
	}
}