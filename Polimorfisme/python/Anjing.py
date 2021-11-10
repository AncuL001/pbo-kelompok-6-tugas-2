# /*
#   Nama File : Anjing.py
#   Nama      : Andaru Danurdara Wibisana, Fauzan Azmi Dwicahyo, Irfan Kamal, Muhammad Attila An Naufal
#   NPM       : 140810200020, 140810200030, 140810200032, 140810200048
#   Kelas     : B
#   Tanggal   : 10 November 2021
#   Deskripsi : Implementasi Polimorfisme makhluk pada Python, class Anjing
# *********************************************/

from Mamalia import Mamalia
class Anjing(Mamalia):
    def __init__(self):
        super().__init__()
        pass
    
    def info(self):
        print("Anjing merupakan mamalia yang umum dijadikan peliharaan")

    