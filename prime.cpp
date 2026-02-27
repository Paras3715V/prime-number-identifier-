#include <iostream>
#include <string>
#include <cmath> //  for square root()

using namespace std;

int main()
{
    int N, n;
    string P = "prime";

    cout << "Enter the number: ";
    cin >> N;

    // for numbers less than 2
    if (N < 2) {
        P = "not prime";
    } 
    else {
        // only goes up to the square root of N
        for(n = 2; n * n <= N; n++) {
            if (N % n == 0) {
                P = "not prime";
                break;
            }
        }
    }

    cout << N << " is " << P << endl;
    return 0;
}
