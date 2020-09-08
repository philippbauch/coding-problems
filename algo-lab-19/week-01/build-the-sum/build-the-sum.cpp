#include <iostream>

using namespace std;

int main() {
    int numOfTests;

    cin >> numOfTests;

    for(int i = 0; i < numOfTests; i++) {
        float c, sum = 0;
        int n;
                
        // Test case
        cout << "----------------------------" << endl << "Test No " << (i + 1) << endl;
        cin >> n;
        
        for(int j = 0; j < n; j++) {
            cin >> c;
            sum += c;
        }

        cout << sum << endl;
    }
}