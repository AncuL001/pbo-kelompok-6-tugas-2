# /*
#   Nama File : Mamalia.py
#   Nama      : Andaru Danurdara Wibisana, Fauzan Azmi Dwicahyo, Irfan Kamal, Muhammad Attila An Naufal
#   NPM       : 140810200020, 140810200030, 140810200032, 140810200048
#   Kelas     : B
#   Tanggal   : 10 November 2021
#   Deskripsi : Implementasi Polimorfisme makhluk pada Python, class Mamalia
# *********************************************/

from Makhluk import Makhluk
class Mamalia(Makhluk):
    def __init__(self):
        super().__init__()
        pass

    def info(self):
        print ("Mamalia merupakan makhluk yang menyusu")