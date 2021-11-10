/*
  Nama File : Main.java
  Nama      : Andaru Danurdara Wibisana, Fauzan Azmi Dwicahyo, Irfan Kamal, Muhammad Attila An Naufal
  NPM       : 140810200020, 140810200030, 140810200032, 140810200048
  Kelas     : B
  Tanggal   : 10 November 2021
  Deskripsi : Implementasi kasus nilai sidang menggunakan Java, class Main
*********************************************/

public class Main {
    public static void main(String[] args) {
        Student coba = new Student("Irfan Kamal", 30, "140810200032");
        coba.setNilaiPenguji1(80f);
        coba.setNilaiPenguji2(90f);
        coba.setNilaiPembimbing(100f);
        System.out.println(coba);
    }
}
