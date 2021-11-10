/*
  Nama File : Anjing.cpp
  Nama      : Andaru Danurdara Wibisana, Fauzan Azmi Dwicahyo, Irfan Kamal, Muhammad Attila An Naufal
  NPM       : 140810200020, 140810200030, 140810200032, 140810200048
  Kelas     : B
  Tanggal   : 10 November 2021
  Deskripsi : File class implementasi Polimorfisme di C++
*********************************************/

#include <iostream>
#include "Mamalia.cpp"
#pragma once

class Anjing : public Mamalia{
    public :
    void info(){
        std::cout << "Anjing merupakan mamalia yang mengalami domestikasi dari serigala\n";
        std::cout << "Anjing telah berkembang menjadi ratusan ras dengan bermacam-macam variasi\n\n";
    }
};