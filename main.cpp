#include "std_lib_facilities.h"

int main()
{
    int max{};
    cout << "Enter a max value: ";
    cin >> max;

    cout << "Prime numbers between 1 and " << max << " are:\n";

    for (int number = 2; number <= max; ++number) {
        bool isPrime = true;

        for (int i = 2; i * i <= number; ++i) {
            if (number % i == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime) {
            cout << number << " ";
        }
    }

    return 0;
}




