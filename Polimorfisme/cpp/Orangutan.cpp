/*
  Nama File : Orangutan.cpp
  Nama      : Andaru Danurdara Wibisana, Fauzan Azmi Dwicahyo, Irfan Kamal, Muhammad Attila An Naufal
  NPM       : 140810200020, 140810200030, 140810200032, 140810200048
  Kelas     : B
  Tanggal   : 10 November 2021
  Deskripsi : File class implementasi Polimorfisme di C++
*********************************************/

#include <iostream>
#include "Mamalia.cpp"
#pragma once

class Orangutan : public Mamalia{
    public :
    void info(){
        std::cout << "Orangutan merupakan mamalia dan juga termasuk jenis kera yang besar.\n";
        std::cout << "Orangutan sebagian besar hidup di hutan tropis Indonesia dan Malaysia.\n\n";
    }
};
