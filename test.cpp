#include <iostream>
#include <vector>

using namespace std;

vector<int> findSequence(int n) {
    vector<int> sequence;
    vector<int> result;

    // Create the initial sequence [1, 2, 3, ..., n-1]
    for (int i = 1; i < n; i++) {
        sequence.push_back(i);
    }

    // Calculate the product of the sequence modulo n
    int product = 1;
    for (int i = 0; i < sequence.size(); i++) {
        product = (product * sequence[i]) % n;
    }

    // If the product is already congruent to 1 modulo n, return an empty result
    if (product == 1) {
        return result;
    }

    // Find the factors of (n - 1) and remove them from the sequence
    for (int i = 2; i * i <= n - 1; i++) {
        if ((n - 1) % i == 0) {
            result.push_back(i);
            while ((n - 1) % i == 0) {
                (n - 1) /= i;
            }
        }
    }

    // If (n - 1) is not 1, it is a prime factor greater than sqrt(n-1)
    if (n - 1 > 1) {
        result.push_back(n - 1);
    }

    return result;
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    vector<int> result = findSequence(n);

    cout << "Elements to remove: ";
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}
