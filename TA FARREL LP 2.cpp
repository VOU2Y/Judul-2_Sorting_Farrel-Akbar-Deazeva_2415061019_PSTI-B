#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Masukkan jumlah mahasiswa: ";
    cin >> n;
    long long npm[n]; // NPM mahasiswa 10 digit angka

    cout << "Masukkan NPM mahasiswa:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "NPM ke-" << i + 1 << ": ";
        cin >> npm[i];
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (npm[j] > npm[j + 1]) {
                swap(npm[j], npm[j + 1]);
            }
        }
    }
    
    cout << "\nNPM setelah diurutkan (Bubble Sort):" << endl;
    for (int i = 0; i < n; i++) {
        cout << npm[i] << endl;
    }

    return 0;
}
