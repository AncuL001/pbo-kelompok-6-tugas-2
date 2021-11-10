/*
  Nama File : soal-uts-1.cpp
  Nama      : Andaru Danurdara Wibisana, Fauzan Azmi Dwicahyo, Irfan Kamal, Muhammad Attila An Naufal
  NPM       : 140810200020, 140810200030, 140810200032, 140810200048
  Kelas     : B
  Tanggal   : 10 November 2021
  Deskripsi : Implementasi kasus nilai sidang menggunakan Java, class Student
*********************************************/

public class Student extends Person {
    private String npm;
    private float nilaiPenguji1;
    private float nilaiPenguji2;
    private float nilaiPembimbing;
    
    Student(String name, int age, String npm){
        super(name, age);
        this.npm = npm;
    }

    public String getNpm() {
        return this.npm;
    }

    public void setNpm(String npm) {
        this.npm = npm;
    }

    public float getNilaiPenguji1() {
        return nilaiPenguji1;
    }

    public void setNilaiPenguji1(float nilaiPenguji1) {
        this.nilaiPenguji1 = nilaiPenguji1;
    }

    public float getNilaiPenguji2() {
        return nilaiPenguji2;
    }

    public void setNilaiPenguji2(float nilaiPenguji2) {
        this.nilaiPenguji2 = nilaiPenguji2;
    }

    public float getNilaiPembimbing() {
        return nilaiPembimbing;
    }

    public void setNilaiPembimbing(float nilaiPembimbing) {
        this.nilaiPembimbing = nilaiPembimbing;
    }

    public float getNilaiAkhir(){
        return (nilaiPenguji1*0.3f + nilaiPenguji2*0.3f + nilaiPembimbing*0.4f);
    }

    public char getHurufMutu(){
        float nilai = this.getNilaiAkhir();
        if(nilai > 0 && nilai <= 60){
            return 'T';
        }else if(nilai > 60 && nilai <= 70){
            return 'C';
        }else if(nilai > 70 && nilai <= 80){
            return 'B';
        }else if(nilai > 80 && nilai <= 100){
            return 'A';
        }
        return 'T';
    }

    public String getStatus(){
        char hurufMutu = this.getHurufMutu();
        if(hurufMutu == 'T'){
            return "Tidak Lulus !!";
        }
        return "Lulus !!";
    }

    public String toString(){
        return "Nama : " + this.getName() + "\n" +
               "Umur : " + this.getAge() + "\n" +
               "NPM : " + this.getNpm() + "\n" +
               "Nilai Penguji 1 : " + this.getNilaiPenguji1() + "\n" +
               "Nilai Penguji 2 : " + this.getNilaiPenguji2() + "\n" +
               "Nilai Pembimbing : " + this.getNilaiPembimbing() + "\n" +
               "Nilai Akhir : " + this.getNilaiAkhir() + "\n" +
               "Huruf Mutu : " + this.getHurufMutu() + "\n" +
               "Status : " + this.getStatus();
    }

    public void print(){
        System.out.println(this.toString());
    }
}
