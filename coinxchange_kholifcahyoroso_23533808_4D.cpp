#include <iostream>
using namespace std;

#define size 99

void sort(int[], int);

int main() {
    string nama = "Kholif Cahyo Roso";
    string nim = "23533808";
    
    int x[size], hasil[size], i, koin, n;

    cout << "===== Penukaran Koin dengan Algoritma Greedy =====" << endl;
    cout << "Nama: " << nama << " | NIM: " << nim << endl;

    cout << "\nMasukkan banyaknya jenis koin: ";
    cin >> n;

    cout << "\nMasukkan nilai tiap jenis koin:\n";
    for (i = 0; i < n; i++) {
        cout << "Koin ke-" << i + 1 << ": ";
        cin >> x[i];
    }

    sort(x, n); // Urutkan koin dari besar ke kecil

    cout << "\nMasukkan nilai total yang ingin ditukarkan: ";
    cin >> koin;

    for (i = 0; i < n; i++) {
        hasil[i] = koin / x[i];   // Hitung jumlah koin
        koin = koin % x[i];       // Sisa nilai
    }

    cout << "\n=== Hasil Penukaran ===\n";
    for (i = 0; i < n; i++) {
        cout << "Jumlah keping " << x[i] << "-an sebanyak: " << hasil[i] << endl;
    }

    if (koin != 0)
        cout << "Sisa uang yang tidak dapat ditukarkan: " << koin << endl;
    else
        cout << "Semua uang berhasil ditukarkan.\n";

    return 0;
}

void sort(int a[], int siz) {
    int pass, hold, j;
    for (pass = 0; pass < siz - 1; pass++) {
        for (j = 0; j < siz - pass - 1; j++) {
            if (a[j] < a[j + 1]) {
                hold = a[j];
                a[j] = a[j + 1];
                a[j + 1] = hold;
            }
        }
    }
}
