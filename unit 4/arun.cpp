#include <iostream>
#include <vector>

class Parent {
protected:
    int num;
public:
    void setNum(int n) {
        num = n;
    }
};

class Child : public Parent {
public:
    void fun() {
        std::vector<int> digits;
        while (num > 0) {
            digits.push_back(num % 10);
            num /= 10;
        }

        int sum = 0;
        for (int i = 0; i < digits.size(); i++) {
            for (int j = i + 1; j < digits.size(); j++) {
                sum += digits[i] + digits[j];
            }
        }

        std::cout << "The sum is: " << sum << std::endl;
    }
};

int main() {
    Child c;
    int n;

    std::cout << "Enter a number: ";
    std::cin >> n;

    c.setNum(n);
    c.fun();

    return 0;
}
