# /*
#   Nama File : soal-uts-1.cpp
#   Nama      : Andaru Danurdara Wibisana, Fauzan Azmi Dwicahyo, Irfan Kamal, Muhammad Attila An Naufal
#   NPM       : 140810200020, 140810200030, 140810200032, 140810200048
#   Kelas     : B
#   Tanggal   : 10 November 2021
#   Deskripsi : Implementasi kasus nilai sidang menggunakan Python, class Person
# *********************************************/

class Person:
    def __init__(self, name, age):
        self.__name = name
        self.__age = age
    
    def getName(self):
        return self.__name

    def getAge(self):
        return self.__age
    
    def setName(self, name):
        self.__name = name
    
    def setAge(self, age):
        self.__age = age

    def __str__(self) -> str:
        return " Nama : " + self.__name + "\n Umur: " + str(self.__age)