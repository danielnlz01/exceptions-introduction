#include <iostream>
#include <string>

using namespace std;

int main() 
{
  int edad_alumno;
	bool x;
	x = false;

	while (x == false)
	{
		cout << "Dame la edad (entero positivo menor a 100): ";
		cin >> edad_alumno;
		try
		{
			if (edad_alumno == 0)
			{
				throw 0;
			}
			else if (edad_alumno < 0)
			{
				throw "DEBE SER ENTERO POSITIVO!";;
			}
			else if (edad_alumno > 100)
			{
				throw 100.1;
			}
			else if (edad_alumno % 11 == 0)
			{
				throw 0.1f;
			}
			cout << " la edad al cuadrado es: " << (edad_alumno * edad_alumno) << endl;
			x = true;
		}

		catch (int error_cero)
		{
			cout << "ES UN CERO!" << endl;
		}
		catch (const char * edad_negativa)
		{
			cout << edad_negativa << endl;
		}
		catch (double error_mayor_cien)
		{
			cout << "ES MAYOR A 100!" << endl;
		}
		catch (...)
		{
			cout << "Pantalla azul!" << endl;
		}
	}
	

	cout << "finito!" << endl;	
}