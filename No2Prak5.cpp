#include <iostream>
using namespace std;

    // Fungsi untuk menampilkan baris bintang(*)
    void printBtg(int n) {
      // Print spasi sebelum bintang(*)
      for(int i = 1; i <= n; i++) {
        cout << " ";
      }
    
      // Print bintang(*)
      for(int i = 1; i <= (n * 2) - 1; i++) {
        cout << "*";
      }
      cout << endl;
    }
    
    // Fungsi untuk menampilkan piramida bintang(*)
    void printPiramida(int n) {
      for(int i = n; i >= 1; i--) {
        printBtg(i);
      }
    }
    
    int main() {
      int n;
      cout << "Masukkan tinggi piramida: ";
      cin >> n;
    
      printPiramida(n);
      return 0;
}
