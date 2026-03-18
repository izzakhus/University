#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

// Уровень 1

double sum(int a, int b) {
    double res = (a + b) / 2.0;
    return res;
}

int isEven(int n) {
    if (n % 2 == 0) {
        return 1;
    } else {
        return 0;
    }
}

double square(double x) {
    double res = x * x;
    return res;
}

int printGreeting() {
    cout << "Привет" << endl;
    return 0; 
}

int max_2(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

// Уровень 2

int factorial(int n) {
    if (n == 0) {
        return 1;
    }
    int res = 1;
    for (int i = 1; i <= n; i++) {
        res = res * i;
    }
    return res;
}

double power(double a, int n) {
    double res = 1.0;
    int p;
    if (n < 0) {
        p = -n;
    } else {
        p = n;
    }
    for (int i = 0; i < p; i++) {
        res = res * a;
    }
    if (n < 0) {
        return 1.0 / res;
    } else {
        return res;
    }
}

int countDigits(int n) {
    if (n == 0) {
        return 1;
    }
    int count = 0;
    int temp;
    if (n < 0) {
        temp = -n;
    } else {
        temp = n;
    }
    while (temp > 0) {
        temp = temp / 10;
        count = count + 1;
    }
    return count;
}

int reverseNumber(int n) {
    int res = 0;
    int temp = n;
    while (temp != 0) {
        int last = temp % 10;
        res = (res * 10) + last;
        temp = temp / 10;
    }
    return res;
}

int max_4(int a, int b, int c, int d) {
    int m = a;
    if (b > m) {
        m = b;
    }
    if (c > m) {
        m = c;
    }
    if (d > m) {
        m = d;
    }
    return m;
}

int main() {
    // Вызовы функций
    cout << sum(10, 5) << endl;
    
    if (isEven(4) == 1) {
        cout << "Even" << endl;
    }

    cout << square(3.0) << endl;

    printGreeting();
    printGreeting();
    printGreeting();

    cout << max_2(10, 20) << endl;
    cout << factorial(5) << endl;
    cout << power(2, 3) << endl;
    cout << countDigits(1234) << endl;
    cout << reverseNumber(1234) << endl;
    cout << max_4(1, 5, 2, 8) << endl;

    return 0;
}