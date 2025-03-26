#include<iostream>

using namespace std;

void BinoCoff(int a, int b)
{
    int nFact = 1, rFact = 1, temp_N_R_fact = 1;
    int m = a;
    int k = b;
    int s = a - b;

    // Calculate n! (Factorial of n)
    while (m > 1)
    {
        nFact *= m;
        m--;
    }

    // Calculate r! (Factorial of r)
    while (k > 1)
    {
        rFact *= k;
        k--;
    }

    // Calculate (n-r)! (Factorial of (n-r))
    while (s > 1)
    {
        temp_N_R_fact *= s;
        s--;
    }

    // Binomial Coefficient formula: C(n, r) = n! / (r! * (n-r)!)
    cout << "Binomial Coefficient is: " << (nFact / (rFact * temp_N_R_fact)) << endl;
    return;
}

int main()
{
    int n = 5;
    int c = 4;
    BinoCoff(n, c);
}
