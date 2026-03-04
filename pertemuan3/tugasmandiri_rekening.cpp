#include <iostream>
using namespace std;

class RekeningBank {
private:
    double saldo;

public:
    // Constructor
    RekeningBank(double saldoAwal) {
        saldo = saldoAwal;
    }

    // Method setor
    void setor(double jumlah) {
        saldo += jumlah;
        cout << "Setor berhasil. Saldo sekarang: " << saldo << endl;
    }

    // Method tarik
    void tarik(double jumlah) {
        if (jumlah > saldo) {
            cout << "Penarikan Gagal" << endl;
        } else {
            saldo -= jumlah;
            cout << "Penarikan berhasil. Sisa saldo: " << saldo << endl;
        }
    }
};

int main() {
    RekeningBank rekening(10000000); // saldo awal

    rekening.setor(500000);
    rekening.tarik(300000);
    rekening.tarik(15000000);

    return 0;
}