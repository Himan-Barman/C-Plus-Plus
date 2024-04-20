#include <iostream>
#include <cmath>

void drawCircle(int radius, char symbol) {
    int diameter = 2 * radius;

    for (int i = 0; i <= diameter; ++i) {
        for (int j = 0; j <= diameter; ++j) {
            int distance = sqrt((i - radius) * (i - radius) + (j - radius) * (j - radius));
            if (distance > radius - 0.5 && distance < radius + 0.5) {
                std::cout << symbol << " ";
            } else {
                std::cout << "  ";
            }
        }
        std::cout << std::endl;
    }
}

int main() {
    int radius;
    char symbol;

    std::cout << "Enter the radius of the circle: ";
    std::cin >> radius;

    std::cout << "Enter the symbol to draw the circle: ";
    std::cin >> symbol;

    drawCircle(radius, symbol);

    return 0;
}
