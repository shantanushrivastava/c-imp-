#include <iostream>
using namespace std;

class Complex {
    private:
        int real;
        int img;

    public:
        // Constructor to initialize the complex number
        Complex(int r = 0, int i = 0) {
            real = r;
            img = i;
        }

        // Function to display the complex number
        void display() {
            cout << real << " + " << img << "i" << endl;
        }

        // Overloading the subtraction operator
        Complex operator-(Complex &obj) {
            int resReal = this->real - obj.real;
            int resImg = this->img - obj.img;
            Complex res(resReal, resImg);
            return res;
        }
};

int main() {
    Complex c1(4, 5); // Create first complex number
    Complex c2(2, 3); // Create second complex number

    // Use the overloaded - operator
    Complex c3 = c1 - c2;

    c3.display(); // Display the result of the subtraction

    return 0;
}