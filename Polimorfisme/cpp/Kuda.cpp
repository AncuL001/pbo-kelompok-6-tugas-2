/*
  Nama File : Kuda.cpp
  Nama      : Andaru Danurdara Wibisana, Fauzan Azmi Dwicahyo, Irfan Kamal, Muhammad Attila An Naufal
  NPM       : 140810200020, 140810200030, 140810200032, 140810200048
  Kelas     : B
  Tanggal   : 10 November 2021
  Deskripsi : File class implementasi Polimorfisme di C++
*********************************************/

#include <iostream>
#include "Mamalia.cpp"
#pragma once

class Kuda : public Mamalia{
    public :
    void info(){
        std::cout << "Kuda merupakan mamalia yang berasal dari genus Equus.\n";
        std::cout << "Kuda sudah mulai dimanfaatkan untuk keperluan manusia sejak 2000 SM.\n\n";
    }
};
