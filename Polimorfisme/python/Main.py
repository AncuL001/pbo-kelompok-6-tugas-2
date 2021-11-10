# /*
#   Nama File : Main.py
#   Nama      : Andaru Danurdara Wibisana, Fauzan Azmi Dwicahyo, Irfan Kamal, Muhammad Attila An Naufal
#   NPM       : 140810200020, 140810200030, 140810200032, 140810200048
#   Kelas     : B
#   Tanggal   : 10 November 2021
#   Deskripsi : Implementasi Polimorfisme makhluk pada Python, bagian main
# *********************************************/

from Anjing import Anjing
from Kuda import Kuda
from Orangutan import Orangutan
from Mamalia import Mamalia
from Makhluk import Makhluk

# Main
if __name__ == "__main__":
    makhluk = Makhluk()
    makhluk.info()

    makhluk = Mamalia()
    makhluk.info()

    makhluk = Anjing()
    makhluk.info()

    makhluk = Kuda()
    makhluk.info()

    makhluk = Orangutan()
    makhluk.info()
