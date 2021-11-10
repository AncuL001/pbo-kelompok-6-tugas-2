# /*
#   Nama File : Orangutan.py
#   Nama      : Andaru Danurdara Wibisana, Fauzan Azmi Dwicahyo, Irfan Kamal, Muhammad Attila An Naufal
#   NPM       : 140810200020, 140810200030, 140810200032, 140810200048
#   Kelas     : B
#   Tanggal   : 10 November 2021
#   Deskripsi : Implementasi Polimorfisme makhluk pada Python, class Orangutan
# *********************************************/

from Mamalia import Mamalia
class Orangutan(Mamalia):
    def __init__(self):
        super().__init__()
        pass

    def info(self):
        print("Orangutan merupakan mamalia yang cerdas dan menyerupai manusia")