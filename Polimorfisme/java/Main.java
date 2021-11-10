/*
  Nama File : Main.java
  Nama      : Andaru Danurdara Wibisana, Fauzan Azmi Dwicahyo, Irfan Kamal, Muhammad Attila An Naufal
  NPM       : 140810200020, 140810200030, 140810200032, 140810200048
  Kelas     : B
  Tanggal   : 10 November 2021
  Deskripsi : Implementasi Polimorfisme makhluk menggunakan Java, class Main
*********************************************/

public class Main{
  public static void main(String[] args) {
      //Polimorfisme cara 1
      System.out.println("\n================== POLIMORFISME CARA 1 ==================");
      Makhluk makhluk;
      Makhluk mamalia;

      makhluk = new Makhluk();
      makhluk.info();                 //Output = info() di class Makhluk
      mamalia = new Mamalia();
      mamalia.info();                //Output = info() di class Mamalia
      
      //Polimorfisme cara 2
      System.out.println("\n================== POLIMORFISME CARA 2 ==================");
      Mamalia mamalia1 = new Mamalia();
      Kuda kuda = new Kuda();
      Anjing anjing = new Anjing();
      Orangutan orangutan = new Orangutan();
      
      mamalia1.info();                //Output = info() di class Anjing
      kuda.info();                    //Output = info() di class kuda
      anjing.info();                  //Output = info() di class Anjing
      orangutan.info();               //Output = info() di class Orangutan
  }
}