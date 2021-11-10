/*
  Nama File : Mamalia.cpp
  Nama      : Andaru Danurdara Wibisana, Fauzan Azmi Dwicahyo, Irfan Kamal, Muhammad Attila An Naufal
  NPM       : 140810200020, 140810200030, 140810200032, 140810200048
  Kelas     : B
  Tanggal   : 10 November 2021
  Deskripsi : Implementasi Polimorfisme makhluk menggunakan C++, class Mamalia
*********************************************/

#include <iostream>
#include "Makhluk.cpp"
#pragma once

class Mamalia : public Makhluk{
    public :
    void info(){
        std::cout << "Beberapa hewan tergolong ke dalam mamalia.\n";
        std::cout << "Mamalia merupakan hewan menyusui yang berciri-ciri berdarah panas dan memiliki rambut atau bulu.\n\n";
    }
};
