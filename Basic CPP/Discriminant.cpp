#include <iostream>
using namespace std;
int main()
{
    long long a, b, c;
    long long D;
    cout << "Enter a,b and c of Quadratic Equation : ";
    cin >> a >> b >> c;
    if (a == 0)
    {
        cout << "Enter Quadratic Equation please";
    }
    else
    {
        D = b * b - (4 * a * c);
        if (D > 0)
        {
            cout << "Roots are real and distinct";
        }
        else if (D < 0)
        {
            cout << "Roots are Complex Conjugate ";
        }
        else
        {
            cout << "Roots are real and repeated";
        }
    }
}