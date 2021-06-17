#include <iostream>
using namespace std;

void pilihan_nol(int pilihan)
{
    if(pilihan == 0){
    cout << "Terima kasih telah menggunakan Vending Machine kami." << endl;}
}

void pilihan_error(int pilihan)
{
    if(pilihan > 3)
    {
        cout << "UNKNOWN ERROR" << endl;
    }
}

int main()
{
    string nama_barang[3] = {"Capuccino", "Coca-cola", "Teh Botol"};
    int harga_barang[3] = {5000, 7000, 5000};
    int jumlah_barang[3] = {5, 8, 1};
    int jumlah_beli, jumlah_bayar, pilihan;
    float uang_kita;
    char mau;

do{
    cout << "\t VENDING MACHINE KELOMPOK 8 \t" << endl << endl;

    cout << "===========================================" << endl;
    cout << "|No |" << "   Nama Minuman  |  Harga  |  Jumlah |" << endl;
    cout << "-------------------------------------------" << endl;
    for(int i=0; i<=2; i++)
    {
        cout << "|" << i+1 << ". |" << "  " << nama_barang[i] << "      | " << harga_barang[i] << "    |   " << jumlah_barang[i] << "     |" << endl;

    }
    cout << "-------------------------------------------" << endl;
    cout << "|0. |" << "  exit " << "\t\t\t\t  |" << endl;
    cout << "===========================================" << endl;
    cout << endl;

    cout << "Masukkan pilihan anda [0-3]: ";
    cin >> pilihan;
    cout << endl;

    if(pilihan > 3)
    {
        pilihan_error(pilihan);
        exit(1);
    }
    switch(pilihan)
        {
        case 0 :
                pilihan_nol(pilihan);
                exit(1);

        case 1 :
            cout << "Masukkan jumlah " << nama_barang[0] << " yang anda inginkan: ";
            cin >> jumlah_beli;
            cout << endl;

            if(jumlah_beli > jumlah_barang[0] || jumlah_barang[0] == 0)
            {
                cout << "Maaf, jumlah barang yang anda masukkan melebihi stok persediaan kami." << endl << endl;
                exit(1);
            }
            jumlah_bayar = jumlah_beli * harga_barang[0];

            cout << "Silahkan Deposit sebesar Rp " << jumlah_bayar << endl;
            cout << ": ";
            cin >> uang_kita;
            cout << endl;

            if(uang_kita < jumlah_bayar)
            {
                cout << "Maaf, uang Anda tidak cukup." << endl;
                exit(1);
            }
            else if(uang_kita > jumlah_bayar)
            {
                int kembalian;
                kembalian = uang_kita - jumlah_bayar;

                cout << "Kembalian Anda: " << "Rp " << kembalian << endl;

            }
                jumlah_barang[0] = jumlah_barang[0] - jumlah_beli;
                break;

        case 2 :
            cout << "Masukkan jumlah " << nama_barang[1] << " yang anda inginkan: ";
            cin >> jumlah_beli;
            cout << endl;

            if(jumlah_beli > jumlah_barang[1] || jumlah_barang[1] == 0)
            {
                cout << "Maaf, jumlah barang yang anda masukkan melebihi stok persediaan kami." << endl << endl;
                exit(1);
            }
            jumlah_bayar = jumlah_beli * harga_barang[1];

            cout << "Silahkan Deposit sebesar Rp " << jumlah_bayar << endl;
            cout << ": ";
            cin >> uang_kita;
            cout << endl;

            if(uang_kita < jumlah_bayar)
            {
                cout << "Maaf, uang Anda tidak cukup." << endl;
                exit(1);
            }
            else if(uang_kita > jumlah_bayar)
            {
                int kembalian;
                kembalian = uang_kita - jumlah_bayar;

                cout << "Kembalian Anda: " << "Rp " << kembalian << endl;

            }
                jumlah_barang[1] = jumlah_barang[1] - jumlah_beli;
                break;

        case 3 :
            cout << "Masukkan jumlah " << nama_barang[2] << " yang anda inginkan: ";
            cin >> jumlah_beli;
            cout << endl;

            if(jumlah_beli > jumlah_barang[2] || jumlah_barang[2] == 0)
            {
                cout << "Maaf, jumlah barang yang anda masukkan melebihi stok persediaan kami." << endl << endl;
                exit(1);
            }
            jumlah_bayar = jumlah_beli * harga_barang[1];

            cout << "Silahkan Deposit sebesar Rp " << jumlah_bayar << endl;
            cout << ": ";
            cin >> uang_kita;
            cout << endl;

            if(uang_kita < jumlah_bayar)
            {
                cout << "Maaf, uang Anda tidak cukup." << endl;
                exit(1);
            }
            else if(uang_kita > jumlah_bayar)
            {
                int kembalian;
                kembalian = uang_kita - jumlah_bayar;

                cout << "Kembalian Anda: " << "Rp " << kembalian << endl;

            }
                jumlah_barang[2] = jumlah_barang[2] - jumlah_beli;
                break;
        }

    cout << "-------------------------------------------" << endl;
    cout << "Silahkan ambil dan selamat menikmati! " << endl;

    cout << endl;
    cout << "Apakah Anda ingin membeli lagi? (Y/N): ";
    cin >> mau;
    system ("CLS");

        }while( mau == 'y' || mau == 'Y');

    return 0;
}
