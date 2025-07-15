#include <stdio.h>

#define EPSILON_0 8.854e-12  // Vacuum permittivity in F/m

int main() {
    double area, distance, relativePermittivity, capacitance;

    // Input
    printf("Enter plate area in square meters (A): ");
    scanf("%lf", &area);

    printf("Enter distance between plates in meters (d): ");
    scanf("%lf", &distance);

    printf("Enter relative permittivity (εr) of the dielectric: ");
    scanf("%lf", &relativePermittivity);

    // Capacitance calculation
    capacitance = (EPSILON_0 * relativePermittivity * area) / distance;

    // Output
    printf("Capacitance: %e Farads\n", capacitance);

    return 0;
}
