#include "student2.h"
#include <cmath>

const double PI = 3.14159265358979;

// Площадь сектора: πr²·α/360
double sectorArea(double r, double alpha) {
    return PI * r * r * alpha / 360.0;
}

// Длина дуги: πr·α/180
double arcLength(double r, double alpha) {
    return PI * r * alpha / 180.0;
}
