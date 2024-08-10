#include <iostream>
#include <vector>

using namespace std;

void printPolynomial(vector<int>& coeffs)
{
    int degree = coeffs.size() - 1;
    for (int i = 0; i <= degree; ++i)
    {
        if (coeffs[i] != 0)
        {
            if (i != 0) cout << " ";
            if (coeffs[i] > 0 && i != 0) cout << "+";
            if (i == 0) cout << coeffs[i];
            else if (i == 1) cout << coeffs[i] << "x";
            else cout << coeffs[i] << "x^" << i;
        }
    }
    cout << endl;
}
vector<int> calculateDerivative(const vector<int>& coeffs)
{
    int degree = coeffs.size() - 1;
    vector<int> derivative(degree);
    for (int i = 1; i <= degree; ++i)
    {
        derivative[i - 1] = coeffs[i] * i;
    }

    return derivative;
}

int main()
{
    int degree;
    cout << "Enter the degree of the polynomial: ";
    cin >> degree;
    if (degree < 0 || degree > 5)
    {
        cout << "Degree out of bounds. Please enter a value between 0 and 5." << endl;
        return 1;
    }
    vector<int> coeffs(degree + 1);
    cout << "Enter the coefficients of the polynomial (from constant term to highest degree term):" << endl;
    for (int i = 0; i <= degree; ++i)
    {
        cin >> coeffs[i];
    }
    cout << "The polynomial is: ";
    printPolynomial(coeffs);
    vector<int> derivative = calculateDerivative(coeffs);
    cout << "The derivative of the polynomial is: ";
    printPolynomial(derivative);

    return 0;
}
