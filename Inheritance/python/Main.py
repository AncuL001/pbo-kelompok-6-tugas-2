# /*
#   Nama File : soal-uts-1.cpp
#   Nama      : Andaru Danurdara Wibisana, Fauzan Azmi Dwicahyo, Irfan Kamal, Muhammad Attila An Naufal
#   NPM       : 140810200020, 140810200030, 140810200032, 140810200048
#   Kelas     : B
#   Tanggal   : 10 November 2021
#   Deskripsi : Implementasi kasus nilai sidang menggunakan Python, bagian Main
# *********************************************/

from Student import Student

if __name__ == "__main__":
    coba = Student("Irfan Kamal", 30, "140810200032")

    coba.setNilaiPenguji1(80)
    coba.setNilaiPenguji2(90)
    coba.setNilaiPembimbing(100)

    coba.output()