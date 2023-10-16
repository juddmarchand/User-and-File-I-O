#include "IOLab.h"
#include <iostream>
#include <fstream>
#include <cmath>

int main()
{
	double a, b, c, d;

	std::cout << "Please choose your first intger value: ";
	std::cin >> a;

	std::cout << "Please choose your second intger value: ";
	std::cin >> b;

	std::cout << "Please choose your third intger value: ";
	std::cin >> c;

	std::cout << "Please choose your fourth intger value: ";
	std::cin >> d;

	UserInput UserInput;
	UserInput.setValues(a, b, c, d);

	double mean1 = UserInput.calculateMean();

	double populationstandarddeviation1 = UserInput.calculatePopulationStandardDeviation();

	std::cout << "The Mean is: " << mean1 << std::endl;
	std::cout << "The Population Standard Deviation is: " << populationstandarddeviation1 << std::endl;


	//main.cpp splits here

    
    double e, f, g, h;
    
    std::ifstream inputFile("inMeanStd.dat");
    
    if (inputFile.is_open()) 
    {
            inputFile >> e >> f >> g >> h;

            FileInput fileInput;

            fileInput.setValues(e, f, g, h);

            double mean2 = fileInput.calculateMean2();
            double populationstandarddeviation2 = fileInput.calculatePopulationStandardDeviation2();

            std::ofstream outputFile("outMeanStd.dat");
            outputFile << "The Mean is: " << mean2 << std::endl;
            outputFile << "The Population Standard Deviation is: " << populationstandarddeviation2 << std::endl;

            inputFile.close();
            outputFile.close();

        return 0;
    }

}