#include "guess_number.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <limits>

void guessNumber() {
    // Инициализация генератора случайных чисел
    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    // Загадываем число от 1 до 100
    int secretNumber = std::rand() % 100 + 1;
    int userGuess = 0;
    int attempts = 0;

    std::cout << "Добро пожаловать в игру 'Угадай число'!\n";
    std::cout << "Я загадал число от 1 до 100. Попробуйте угадать!\n\n";

    do {
        std::cout << "Введите вашу догадку: ";
        std::cin >> userGuess;
        ++attempts;

        // Проверка корректности ввода
        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Ошибка! Пожалуйста, введите целое число.\n";
            continue;
        }

        // Проверка числа
        if (userGuess < secretNumber) {
            std::cout << "Слишком маленькое число! Попробуйте еще раз.\n";
        } else if (userGuess > secretNumber) {
            std::cout << "Слишком большое число! Попробуйте еще раз.\n";
        } else {
            std::cout << "\nПоздравляю! Вы угадали число " << secretNumber
                      << " за " << attempts << " попыток!\n";
        }
    } while (userGuess != secretNumber);
}