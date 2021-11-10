# /*
#   Nama File : Makhluk.py
#   Nama      : Andaru Danurdara Wibisana, Fauzan Azmi Dwicahyo, Irfan Kamal, Muhammad Attila An Naufal
#   NPM       : 140810200020, 140810200030, 140810200032, 140810200048
#   Kelas     : B
#   Tanggal   : 10 November 2021
#   Deskripsi : Implementasi Polimorfisme makhluk pada Python, class Makhluk
# *********************************************/

class Makhluk:
    def __init__(self):
        pass
    # In Python, to write an empty class 'pass' statement is used. pass is a special statement in Python that does nothing. 
    # It only works as a dummy statement. However, objects of an empty class can also be created.
    # pass dipakai biar fungsi __init__ ga kosong. (harus ada perintah)

    def info(self):
        print("Makhluk hidup terdiri manusia, hewan, dan tumbuhan.")
        print("Hewan dapat dikelompokkan menjadi mamalia dan bukan mamalia.\n")
    