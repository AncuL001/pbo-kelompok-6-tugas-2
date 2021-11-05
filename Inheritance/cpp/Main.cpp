//include stio
#include <iostream>
//include Student class
#include "Student.cpp"

int main(){
    //create a new object of type Person
    Student coba = Student("Irfan Kamal", 30, "140810200032");
    coba.setNilaiPenguji1(80);
    coba.setNilaiPenguji2(90);
    coba.setNilaiPembimbing(100);
    std::cout << coba.str();
}