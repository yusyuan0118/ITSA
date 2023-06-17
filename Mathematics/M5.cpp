#include <iostream>

int countDigitOccurrence(int number, int digit) {
    int count = 0;
    while (number > 0) {
        int lastDigit = number % 10;
        if (lastDigit == digit) {
            count++;
        }
        number /= 10;
    }
    return count;
}

int main() {
    int N, M;
    std::cout << "請輸入兩個整數 N 和 M（以空白隔開）：";
    std::cin >> N >> M;

    int occurrenceCount = countDigitOccurrence(M, N);
    std::cout << "N 出現在 M 中的次數為：" << occurrenceCount << std::endl;

    return 0;
}

