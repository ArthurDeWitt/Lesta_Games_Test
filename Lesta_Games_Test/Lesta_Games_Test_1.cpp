#include <iostream>
using namespace std;

bool isEven(int value) {
    return !(value & 1);
}

int main() {
    int value;
    std::cin>>value;
    if (isEven(value)) {
        std::cout << value << " is even.\n";
    }
    else {
        std::cout << value << " is odd.\n";
    }
    return 0;
}

// Заключение: Побитовые операции быстрее чем логические в зависимости от величины значения
