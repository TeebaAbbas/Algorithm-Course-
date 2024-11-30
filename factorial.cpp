/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <chrono>

using namespace std;
using namespace std::chrono;

unsigned long long IterativeFactorial(int n) {
    if (n < 0)
        return 0;
    unsigned long long FinalResult = 1;
    for (int i = 1; i <= n; i++)
        FinalResult *= i;
    return FinalResult; 
}

unsigned long long RecursiveFactorial(int n) {
    if (n < 0)
        return 0;
    if (n == 1 || n == 0)
        return 1;
    else
        return n * RecursiveFactorial(n - 1);
}

int main() {
    chrono::time_point<chrono::system_clock> start_1, end_1, start_2, end_2;
    int num;
    cout << "Enter A Number: ";
    cin >> num;
    
    // Iterative:
    start_1 = chrono::system_clock::now();
    unsigned long long iterativeResult = IterativeFactorial(num); 
    end_1 = chrono::system_clock::now();
    chrono::duration<double> totaltime_1 = end_1 - start_1;
    cout << "Factorial of " << num << " using Iterative Methods is: " << iterativeResult << endl;
    cout << "Time taken: " << totaltime_1.count() << " seconds" << endl;

    // Recursive:
    start_2 = chrono::system_clock::now();
    unsigned long long recursiveResult = RecursiveFactorial(num); 
    end_2 = chrono::system_clock::now();
    chrono::duration<double> totaltime_2 = end_2 - start_2;
    cout << "Factorial of " << num << " using Recursive Methods is: " << recursiveResult << endl;
    cout << "Time taken: " << totaltime_2.count() << " seconds" << endl;

    return 0; 
}
