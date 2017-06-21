#include <stdio.h>
#include <math.h>

double deltaV(double exhaustV, double iMass, double dryMass);

int main(void)
{
	return 0;
}

double deltaV(double exhaustV, double iMass, double dryMass)
{
	double dV;

	dV = exhaustV * log(iMass/dryMass);
	return dV;
}
