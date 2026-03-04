#include <iostream>
#include <vector>
#include <fstream>

int main() {
    // 1️⃣ Inisialisasi Struktur Data
    std::vector<double> sensor;

    // 2️⃣ Pengisian Data Awal
    sensor.push_back(100.5);
    sensor.push_back(200.0);
    sensor.push_back(150.5);

    // 3️⃣ Proses Kalibrasi (Naik 10%)
    for (int i = 0; i < sensor.size(); i++) {
        sensor[i] = sensor[i] * 1.1;   // kalibrasi +10%
    }

    // 4️⃣ Buka File Eksternal
    std::ofstream file("hasil_kalibrasi.txt");

    // Cek apakah file berhasil dibuka
    if (!file.is_open()) {
        std::cout << "Gagal membuka file!" << std::endl;
        return 1;
    }

    // 5️⃣ Menulis Hasil ke File
    for (int i = 0; i < sensor.size(); i++) {
        file << sensor[i] << std::endl;
    }

    // 6️⃣ Tutup File
    file.close();

    std::cout << "Proses kalibrasi selesai dan data berhasil disimpan ke hasil_kalibrasi.txt" << std::endl;

    return 0;
}