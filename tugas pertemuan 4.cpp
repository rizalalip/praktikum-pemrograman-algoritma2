#include <iostream>

using namespace std;

int main() {
    // Inisialisasi variabel sesuai soal
    int A = 3;
    int B = 6;
    int C = 2;
    int K = 5;
    int L = 4;
    int M = 3;

    // Evaluasi setiap ekspresi logika
    int hasil_a = (4 + 2 > A && B - 2 > 3 + 2 || B + 2 <= 6 + 2);
    int hasil_b = (K + 5 < M || (C * M < L && 2 * M - L > 0));
    int hasil_c = (L + 5 < M || C * K <= L && 2 * K - L > 0);
    int hasil_d = (A * 4 <= 3 * M + B);
    int hasil_e = (K + 10 > A && L - 2 > 4 * C);

    // Menampilkan hasil numerik
    cout << "Hasil Numerik dalam C++:" << endl;
    cout << "a. " << hasil_a << endl;
    cout << "b. " << hasil_b << endl;
    cout << "c. " << hasil_c << endl;
    cout << "d. " << hasil_d << endl;
    cout << "e. " << hasil_e << endl;

    return 0;
}
