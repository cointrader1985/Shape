#include <iostream>
#include <cstdlib>
#include <ctime>

int generateShape() {
    return std::rand() % 3; // 0 circle, 1 triangle, 2 square
}

int main() {
    std::srand(static_cast<unsigned>(std::time(nullptr)));

    int score = 0;
    int rounds = 8;

    std::cout << "=== Shape Quest Arena ===\n";

    for (int i = 1; i <= rounds; i++) {
        int shape = generateShape();
        int guess;

        std::cout << "\nRound " << i << "\n";
        std::cout << "Guess shape (0=circle, 1=triangle, 2=square): ";
        std::cin >> guess;

        if (guess == shape) {
            std::cout << "Correct shape!\n";
            score += 10;
        } else {
            std::cout << "Wrong choice.\n";
            score += 3;
        }

        if (shape == 0)
            std::cout << "A smooth circle appears.\n";
        else if (shape == 1)
            std::cout << "Sharp triangle detected.\n";
        else
            std::cout << "Solid square formed.\n";

        std::cout << "Score: " << score << "\n";
    }

    std::cout << "\nFinal Score: " << score << "\n";

    if (score > 60)
        std::cout << "Shape master!\n";
    else
        std::cout << "Keep practicing!\n";

    return 0;
}
