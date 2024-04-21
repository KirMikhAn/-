#include <iostream>
#include <cmath>

int main() {
    const double pi = 3.14;
    double angle1 = pi / 4;
    double angle2 = pi / 12;
    double cos_angle1 = cos(angle1);
    double cos_angle2 = cos(angle2);
    std::cout << "Косинус угла pi/4: " << cos_angle1 << "\n";
    std::cout << "Косинус угла pi/12: " << cos_angle2 << "\n";
    return 0;
}