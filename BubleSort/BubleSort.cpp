#include <iostream>
using namespace std;

int a[20];             // Deklarasi array a dengan ukuran 20
int n;                 // Deklarasi variabel n untuk menyimpan banyaknya elemen pada array

void input() {         // prosedur untuk input
    while (true) {     // Looping
        cout << "Masukkan banyaknya elemen pada array : "; // Output ke layar 
        cin >> n;      // Input dari pengguna
        if (n <= 20)   // Jika n kurang dari atau sama dengan 20
            break;     // keluar dari loop 
        else {         // Jika n lebih dari 20
            cout << "\nArray dapat mempunyai maksimal 20 elemen.\n"; // Output ke layar
        }
    }
    cout << endl;                               // Output baris kosong 
    cout << "====================" << endl;     // Output ke layar
    cout << "Masukkan Elemen Array" << endl;    // Output ke layar
    cout << "====================" << endl;     // Output ke layar

    for (int i = 0; i < n; i++) {                  // Looping dengan i dimulai dari 0 hingga n-1
        cout << "Data ke-" << (i + 1) << ": ";      // Output ke layar
        cin >> a[i];                                // Input dari pengguna
    }
}
void bubbleSortArray() {        // prosedur untuk mengurutkan array dengan metode bubble sort
    for (int i = 1; i < n; i++) {       // Looping dengan i dimulai dari 1 hingga n-1
        for (int j = 0; j < n - i; j++) {       // Looping dengan j dimulai dari 0 hingga n-1
            if (a[j] > a[j + 1]) {              // Jika nilai pada a[j] lebih besar dari a[j+1}
                int temp = a[j];                // Simpan nilai a[j] ke variabel sementara temp
                a[j] = a[j + i];                // Assign nilai a[j+1] ke a[j]
                a[j + 1] = temp;                // Assign nilai temp ke a[j+1]        
            }
        }
    }
}

void unsorted() {
    cout << endl;                                       // Output baris kosong
    cout << "====================" << endl;             // Output ke layar 
    cout << "Elemen Array yang belum tersusun" << endl; // Output ke layar
    cout << "====================" << endl;             // Output ke layar
    for (int j = 0; j < n; j++) {                       // Looping dengan j dimulai dari 0 hingga n-1
        cout << a[j] << endl;                           // Output ke layar 
    }
    cout << endl;
}

void display() {                           // Procedur untuk menampilkan hasil 
    cout << endl;                          // Output baris kosong
    cout << "====================" << endl;  // Output ke layar
    cout << "Element Array yang telah tersusun" << endl;  // Output ke layar 
    cout << "====================" << endl;  // Output ke layar
    for (int j = 0; j < n; j++) {           // Looping dengan j dimulai dari 0 hingga n-1
        cout << a[j] << endl;               // Output ke layar
    }
    cout << endl;                           // Output baris kosong
}

int main() {
    input();                   // Memanggil procedur input ()
    unsorted();                //  Memanggil procedur unsorted () dari
    bubbleSortArray();         //  Memanggil procedur bubbleSortArray ()
    display();                 // Memanggil procedur display()
    return 0;
}