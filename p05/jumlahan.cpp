#include <iostream>

using namespace std;

int main() {
    int n = 0;
    int total = 0;
    cout << "n: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        total += i;

        cout << "n = " << i << ", total: " << total << endl;



    


    }
    return 0;
    
}