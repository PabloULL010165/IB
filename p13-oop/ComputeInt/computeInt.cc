#include<iostream>

class ComputeInt {
private:
    int num1;
    int num2;

public:
    ComputeInt(int, int);
    long long factorial();
    int sumserie();
    bool isprime();
    bool isperfectprime();
    bool arerelativeprimes();
    int gcd(int, int);  // Updated declaration

};

ComputeInt::ComputeInt(int _num1, int _num2) {
    num1 = _num1;
    num2 = _num2;
}

long long ComputeInt::factorial() {
    if (num1 < 0) {
        return -1; // Factorial not defined for negative numbers
    }

    long long result = 1;
    for (int i = 1; i <= num1; ++i) {
        result *= i;
    }

    return result;
}

int ComputeInt::sumserie() {
    return num1 * (num1 + 1) / 2;
}

bool ComputeInt::isprime() {
    if (num1 <= 1) {
        return false;
    }

    for (int i = 2; i * i <= num1; ++i) {
        if (num1 % i == 0) {
            return false;
        }
    }

    return true;
}

bool ComputeInt::isperfectprime() {
    return isprime() && isprime(); // Fix this line if needed
}

bool ComputeInt::arerelativeprimes() {
    return gcd(num1, num2) == 1;  // Include arguments in the function call
}

int ComputeInt::gcd(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return gcd(b, a % b);
    }
}

int main() {
    ComputeInt compute_integer(2, 2);

    std::cout << "Factorial: " << compute_integer.factorial() << std::endl;
    std::cout << "Suma de la serie: " << compute_integer.sumserie() << std::endl;
    std::cout << "Es primo: " << compute_integer.isprime() << std::endl;
    std::cout << "Son primos relativos: " << compute_integer.arerelativeprimes() << std::endl;

    return 0;
}

