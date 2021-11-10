/*
  Nama File : soal-uts-1.cpp
  Nama      : Andaru Danurdara Wibisana, Fauzan Azmi Dwicahyo, Irfan Kamal, Muhammad Attila An Naufal
  NPM       : 140810200020, 140810200030, 140810200032, 140810200048
  Kelas     : B
  Tanggal   : 10 November 2021
  Deskripsi : Implementasi kasus nilai sidang menggunakan C++, class Person
*********************************************/

#include <string>
class Person {
    protected:
        std::string name;
        int age;

    public:
        Person(std::string name, int age) {
            this->name = name;
            this->age = age;
        }
        std::string getName() {
            return name;
        }
        int getAge() {
            return age;
        }
        void setName(std::string name) {
            this->name = name;
        }
        void setAge(int age) {
            this->age = age;
        }
};