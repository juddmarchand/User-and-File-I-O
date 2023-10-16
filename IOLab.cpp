#include "IOLab.h"
#include <cmath>
#include <fstream>

UserInput::UserInput(double a, double b, double c, double d)
{
}

UserInput::UserInput()
{
}

UserInput::~UserInput()
{
}

void UserInput::setValues(double aValue, double bValue, double cValue, double dValue)
{
	a = aValue;
	b = bValue;
	c = cValue;
	d = dValue;
}

double UserInput::calculateMean() const
{
	return (a + b + c + d) / 4;
}

double UserInput::calculatePopulationStandardDeviation() const
{
	double mean1 = calculateMean();
	double sum_squared_differences =
		(((a - mean1) * (a - mean1)) + 
		((b - mean1) * (b - mean1)) + 
		((c - mean1) * (c - mean1)) + 
		((d - mean1) * (d - mean1)));
	return sqrt(sum_squared_differences / 4.0);
}


//IOLab.cpp splits here


FileInput::FileInput(double e, double f, double g, double h)
{
}

FileInput::FileInput()
{
}

FileInput::~FileInput()
{
}

void FileInput::setValues(double eValue, double fValue, double gValue, double hValue)
{
	e = eValue;
	f = fValue;
	g = gValue;
	h = hValue;
}

FileInput::FileInput(const std::string& fileName)
{
	std::ifstream file(fileName);

	if (file.is_open())
	{
		file >> e >> f >> g >> h;
		file.close();
	}
}


double FileInput::calculateMean2() const
{
	return (e + f + g + h) / 4;
}

double FileInput::calculatePopulationStandardDeviation2() const
{
	double mean2 = calculateMean2();
	double sum_squared_differences2 =
		(((e - mean2) * (e - mean2)) +
		((f - mean2) * (f - mean2)) +
		((g - mean2) * (g - mean2)) +
		((h - mean2) * (h - mean2)));
	return sqrt(sum_squared_differences2 / 4.0);
}