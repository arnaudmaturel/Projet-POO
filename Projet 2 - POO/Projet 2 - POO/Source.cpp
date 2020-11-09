#include <iostream>
#include <cmath>

class calcul
{
	public:
	calcul();

	double sqr(double a)
	{
		return a * a;
	}
	double Distance()
	{
		return sqrt(sqr(y2 - y1) + sqr(x2 - x1));
	}

	private:

	double x1;
	double y1;
	double x2;
	double y2;
};

calcul::calcul()
{
	x1 = 0;
	y1 = 0;
	x2 = 0;
	y2 = 0;
}


int main()
{
	calcul objet;

	std::cout << "Hello wolrd!\n";
	std::cout << "Antoine dépêche-toi de venir avec nous !\n";
	std::cout << "attentat a Sarajevo\n";
	std::cout << "Test antoine\n";

	std::cout << "Calcul la distance entre deux points (0,0)-(1,1): " << objet.Distance() << std::endl;
}