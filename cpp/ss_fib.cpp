#include <iostream>
#include <vector>

using namespace std;

void printFibonacci(int n) {
    vector<int> fibonacciSeries(n);

     fibonacciSeries[0] = 0;
     fibonacciSeries[1] = 1;

    for (int i = 2; i < n; ++i) {
        fibonacciSeries[i] = fibonacciSeries[i - 1] + fibonacciSeries[i - 2];
    }

    for (int i = 1; i < n; ++i) {
        cout << fibonacciSeries[i] << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cin >> n;

    if (n > 0) { 
    printFibonacci(n);
    }

    return 0;
}
