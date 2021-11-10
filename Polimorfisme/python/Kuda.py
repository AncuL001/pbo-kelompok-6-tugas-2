# /*
#   Nama File : Kuda.py
#   Nama      : Andaru Danurdara Wibisana, Fauzan Azmi Dwicahyo, Irfan Kamal, Muhammad Attila An Naufal
#   NPM       : 140810200020, 140810200030, 140810200032, 140810200048
#   Kelas     : B
#   Tanggal   : 10 November 2021
#   Deskripsi : Implementasi Polimorfisme makhluk pada Python, class Kuda
# *********************************************/

from Mamalia import Mamalia
class Kuda(Mamalia):
    def __init__(self):
        super().__init__()
        pass

    def info(self):
        print ("Kuda merupakan mamalia berkaki 4 yang dapat berlari sangat kencang")