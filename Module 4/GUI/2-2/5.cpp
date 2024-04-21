#include <iostream>

int sum(int start, int end) {
    if (start > end) {
        return 0;
    } else {
        return start + sum(start + 1, end);
    }
}

int main() {
    int start, end;
    std::cout << "Введите начало диапазона: ";
    std::cin >> start;
    std::cout << "Введите конец диапазона: ";
    std::cin >> end;
    std::cout << "Сумма чисел в диапазоне от " << start << " до " << end << " включительно равна " << sum(start, end) << std::endl;

    return 0;
}
