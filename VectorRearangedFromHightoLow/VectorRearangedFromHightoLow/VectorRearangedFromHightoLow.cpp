// This program rearange the vector from HIGH element to LOW element
// The vector elements and lenght are defined by the user

#include <iostream>
void functie(int n, int* matrice2);
void permutare(int* p1, int* p2);
int main()
{
	int i;
	int e;
	std::cout << "The program rearange a vector's elements from HIGH to LOW. Vector lenght is defined by the user." << std::endl;
	std::cout << "Define the vector lenght:" << std::endl;
	std::cin >> e;
	int* matrice = new int[e];

	for (i = 0; i < e; i++)
	{
		std::cout << "Input the vector element[" << i << "]: ";
		std::cin >> matrice[i];
	}
	std::cout << std::endl;
	functie(e, matrice);

	std::cout << "The rearanged vector is: ";
	for (i = 0; i < e; i++)
	{
		std::cout << matrice[i] << " ";
	}

	system("pause");

	return 0;
}

void functie(int n, int* matrice2)
{
	int i, j, high;
	for (i = n - 1; i >= 1; i--)
	{
		// If you uncheck the comments below you have a better understanding how the program works
		//std::cout << "--New I is " << i << "--" << std::endl;
		high = i;
		for (j = i - 1; j >= 0; j--)
		{
			//std::cout << "j este egal " << j << std::endl;
			if (matrice2[j] < matrice2[high])
			{
				high = j;
				//std::cout << "First check if the value is higher" << std::endl;
			}
		}
		if (i != high)
		{
			permutare(&matrice2[i], &matrice2[high]);
			//std::cout << "THE PROGRAM MAKE THE MODIFICATION!!" << std::endl;
		}
	}
}

void permutare(int* p1, int* p2)
{
	int temporar = *p1;
	*p1 = *p2;
	*p2 = temporar;
}