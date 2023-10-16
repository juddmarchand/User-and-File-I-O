#ifndef IOLAB_H
#define IOLAB_H
#include <string>

class UserInput
{
public:
    UserInput(double a, double b, double c, double d);
    UserInput();
    ~UserInput();

    void setValues(double aValue, double bValue, double cValue, double dValue);

    double calculateMean() const;
    double calculatePopulationStandardDeviation() const;
private:
    double a;
    double b;
    double c;
    double d;
};


class FileInput
{
public:
    FileInput(double e, double f, double g, double h);
    FileInput(const std::string& fileName);
    FileInput();
    ~FileInput();

    void setValues(double eValue, double fValue, double gValue, double hValue);

    double calculateMean2() const;
    double calculatePopulationStandardDeviation2() const;
private:
    double e;
    double f;
    double g;
    double h;
};
#endif // IOLAB_H