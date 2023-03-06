//prime factor of a number

#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

vector<int> primeFactors(int n) {
    vector<int> factors;

    while (n % 2 == 0) {
        factors.push_back(2);
        n = n / 2;
    }

    for (int i = 3; i <= sqrt(n); i = i + 2) {
        while (n % i == 0) {
            factors.push_back(i);
            n = n / i;
        }
    }

    if (n > 2) {
        factors.push_back(n);
    }

    return factors;
}

int main() {
    int n;
    cout << "Enter a number ";
    cin >> n;

    vector<int> factors = primeFactors(n);

    cout << "Prime factors of " << n << " are: ";
    for (int i = 0; i < factors.size(); i++) {
        cout << factors[i] << " ";
    }

    return 0;
}

