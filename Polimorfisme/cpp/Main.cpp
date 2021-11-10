/*
  Nama File : Main.cpp
  Nama      : Andaru Danurdara Wibisana, Fauzan Azmi Dwicahyo, Irfan Kamal, Muhammad Attila An Naufal
  NPM       : 140810200020, 140810200030, 140810200032, 140810200048
  Kelas     : B
  Tanggal   : 10 November 2021
  Deskripsi : Main program implementasi Polimorfisme di C++
*********************************************/

#include <iostream>
#include "Kuda.cpp"
#include "Orangutan.cpp"
#include "Anjing.cpp"

int main(){
    //Polimorfisme 1 (Polimorfisme dari Parent : Makhluk, ke Child : Mamalia)
    std::cout << "\n================== POLIMORFISME 1 ==================\n";
    Makhluk makhluk;
    Mamalia mamalia;

    makhluk.info();                 //Output = info() di class Makhluk
    mamalia.info();                //Output = info() di class Mamalia
    
    //Polimorfisme 2 (Polimorfisme dari Child : Mamalia, ke Grandchild : Kuda, Anjing, Orangutan)
    std::cout << "\n================== POLIMORFISME 2 ==================\n";
    Mamalia mamalia1;
    Kuda kuda;
    Anjing anjing;
    Orangutan orangutan;
    
    mamalia1.info();                //Output = info() di class Anjing
    kuda.info();                    //Output = info() di class kuda
    anjing.info();                  //Output = info() di class Anjing
    orangutan.info();               //Output = info() di class Orangutan
}