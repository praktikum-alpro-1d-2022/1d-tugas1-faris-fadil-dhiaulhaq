#include<iostream>
using namespace std;

//code ini dirancang oleh Faris Fadhil Dhiaulhaq
//kelas 1D Informatika

//Jawaban Tugas soal nomor 2 (Menggunakan Variabel Sementara)

int main()
{
    
    int a = 10;
    int b = 20;
    int temp = a;
    a = b;
    b = temp;

    cout<<"Nilai a = "<<a<<endl;
    cout<<"Nilai b = "<<b<<endl;

    return 0;
}