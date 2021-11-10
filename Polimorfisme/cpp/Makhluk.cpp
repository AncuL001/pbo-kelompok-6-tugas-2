/*
  Nama File : Makhluk.cpp
  Nama      : Andaru Danurdara Wibisana, Fauzan Azmi Dwicahyo, Irfan Kamal, Muhammad Attila An Naufal
  NPM       : 140810200020, 140810200030, 140810200032, 140810200048
  Kelas     : B
  Tanggal   : 10 November 2021
  Deskripsi : Implementasi Polimorfisme makhluk menggunakan C++, class Makhluk
*********************************************/

#include <iostream>
#pragma once

class Makhluk {
    public :
    void info() {
        std::cout << "Makhluk hidup terdiri manusia, hewan, dan tumbuhan.\n";
        std::cout << "Hewan dapat dikelompokkan menjadi mamalia dan bukan mamalia.\n\n";
    }
};
