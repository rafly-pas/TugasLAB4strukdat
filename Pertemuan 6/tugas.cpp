#include <iostream>
#include <string>
using namespace std;

void tampilkanData(string data[], int n) {
    for (int i = 0; i < n; i++) {
        cout << data[i] << " ";
    }
    cout << endl;
}

int main() {
    system("cls");

    int n;
    cout << "Masukkan jumlah kata: "; cin >> n;

    string data[n];
    cout << "Masukkan " << n << " kata:\n";
    for (int i = 0; i < n; i++) {
        cout << "Kata ke-" << i + 1 << ": ";
        cin >> data[i];
    }

    cout << "\nKata yang diinput: ";
    tampilkanData(data, n);

    for (int i = 1; i < n; i++) {
        string key = data[i];
        int j = i - 1;

        cout << "Langkah " << i << ", Memproses kata \"" << key << "\":\n";

        while (j >= 0 && data[j] > key) {
            data[j + 1] = data[j];
            cout << "Pergeseran: ";
            tampilkanData(data, n);
            j--;
        }

        data[j + 1] = key;
        cout << "Hasil setelah disisipkan: ";
        tampilkanData(data, n);
        cout << endl;
    }

    cout << "Hasil akhir Insertion Sort (A-Z): ";
    tampilkanData(data, n);

    return 0;
}