#include <iostream>
using namespace std;

void menu() {
    cout << "\n=== SISTEM KURSI BIOSKOP ===\n";
    cout << "1. Tampilkan alamat array kursi \n";
    cout << "2. Tampilkan alamat dari semua kursi \n";
    cout << "3. Masukkan status kursi (0 = kosong, 1 = terisi) \n";
    cout << "4. Tampilkan status kursi \n";
    cout << "10. Keluar \n";
    cout << "Pilihan: ";
}

int main() {
    int kursi[10] = {0};  
    int choice;
    bool running = true;

    while (running) {
        menu();
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Alamat array kursi (elemen pertama): " << kursi << endl;
                break;

            case 2:
                cout << "Alamat tiap kursi:\n";
                for (int i = 0; i < 10; i++) {
                    cout << "Kursi[" << i << "] = " << &kursi[i] << endl;
                }
                break;

            case 3:
                cout << "Masukkan status 10 kursi (0 kosong, 1 terisi):\n";
                for (int i = 0; i < 10; i++) {
                    do {
                        cout << "Kursi[" << i << "] = ";
                        cin >> kursi[i];
                        if (kursi[i] != 0 && kursi[i] != 1) {
                            cout << "Input tidak valid! Hanya 0 atau 1.\n";
                        }
                    } while (kursi[i] != 0 && kursi[i] != 1);
                }
                cout << "Data status kursi berhasil disimpan!\n";
                break;

            case 4:
                cout << "Status kursi bioskop:\n";
                for (int i = 0; i < 10; i++) {
                    cout << "Kursi[" << i << "] = ";
                    if (kursi[i] == 0)
                        cout << "Kosong\n";
                    else
                        cout << "Terisi\n";
                }
                break;

            case 10:
                running = false;
                cout << "Program selesai.\n";
                break;

            default:
                cout << "Pilihan tidak valid!\n";
        }
    }
    return 0;
}