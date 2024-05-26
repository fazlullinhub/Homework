#include <iostream>
using namespace std;
template <class T>
void MinMax(T* A, T NA, T& max, T& min, T& elmn, T& elmx) {
    elmx = 0; elmn = 0; min = A[0]; max = A[0];
    for (int i = 1; i < NA; i++)
    {
        if (min > A[i])
        {
            min = A[i];
            elmn = i;
        }
        if (max < A[i])
        {
            max = A[i];
            elmx = i;
        }
    }
}

int main()
{
    const int NA = 5, NB = 5, NC = 5;
    double mx, mn, B[NB];
    int max, elmn, elmx, min, A[NA];
    char Max, Min, C[NC];
    for (int i = 0; i < NA; i++)
    {
        cout << "input integer number:";
        cin >> A[i];
    }
    MinMax(A, NA, max, min, elmn, elmx);
    cout << "max integer number: A[" << elmx << "] = " << max << endl;
    cout << "min integer number: A[" << elmn << "] = " << min << endl << endl;
    for (int i = 0; i < NB; i++)
    {
        cout << "input real number:";
        cin >> B[i];
    }
    MinMax(B, NB, mx, mn, elmn, elmx);
    cout << "max real number: B[" << elmx << "] = " << mx << endl;
    cout << "min real number: B[" << elmn << "] = " << mn << endl << endl;
}


