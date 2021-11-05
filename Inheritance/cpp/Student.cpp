#include <string>
#include <iostream>
#include "Person.cpp"
class Student : public Person{
    private:
        float nilaiPenguji1;
        float nilaiPenguji2;
        float nilaiPembimbing;
        std::string npm;

    public:
        Student(std::string name, int age, std::string npm) : Person(name, age){
            this->npm = npm;
        }

        std::string getNpm() {
            return this->npm;
        }

        void setNpm(std::string npm) {
            this->npm = npm;
        }

        void setNilaiPenguji1(float nilaiPenguji1){
            this->nilaiPenguji1 = nilaiPenguji1;
        }

        void setNilaiPenguji2(float nilaiPenguji2){
            this->nilaiPenguji2 = nilaiPenguji2;
        }

        void setNilaiPembimbing(float nilaiPembimbing){
            this->nilaiPembimbing = nilaiPembimbing;
        }

        std::string getStatus(){
            char hurufMutu = this->getHurufMutu();

            if(hurufMutu == 'T'){
                return "Tidak Lulus !!";
            }

            return "Lulus !!";
        }

        float getNilaiPenguji1(){
            return this->nilaiPenguji1;
        }

        float getNilaiPenguji2(){
            return this->nilaiPenguji2;
        }

        float getNilaiPembimbing(){
            return this->nilaiPembimbing;
        }

        char getHurufMutu(){
            float nilaiAkhir = this->getNilaiAkhir();

            if(nilaiAkhir > 0 && nilaiAkhir <= 60){
                return 'T';
            }else if(nilaiAkhir > 60 && nilaiAkhir <= 70){
                return 'C';
            }else if(nilaiAkhir > 70 && nilaiAkhir <= 80){
                return 'B';
            }else if(nilaiAkhir > 80 && nilaiAkhir <= 100){
                return 'A';
            }

            return 'T';
        }

        float getNilaiAkhir(){
            return this->nilaiPenguji1*0.3f + this->nilaiPenguji2*0.3f + this->nilaiPembimbing*0.4f;
        }

        std::string str(){
            return "Nama : " + this->getName() + "\n" + "Umur : " + std::to_string(this->getAge()) + "\n" + "NPM : " + this->getNpm() + "\n" + "Nilai Penguji 1 : " + std::to_string(this->getNilaiPenguji1()) + "\n" + "Nilai Penguji 2 : " + std::to_string(this->getNilaiPenguji2()) + "\n" + "Nilai Pembimbing : " + std::to_string(this->getNilaiPembimbing()) + "\n" + "Nilai Akhir : " + std::to_string(this->getNilaiAkhir()) + "\n" + "Status : " + this->getStatus() + "\n" + "Huruf Mutu : " + this->getHurufMutu();
        }

        void print(){
            std::cout << "Nama: " << this->name << std::endl;
            std::cout << "Umur: " << this->age << std::endl;
            std::cout << "NPM: " << this->npm << std::endl;
            std::cout << "Status: " << this->getStatus() << std::endl;
            std::cout << "Nilai Penguji 1: " << this->nilaiPenguji1 << std::endl;
            std::cout << "Nilai Penguji 2: " << this->nilaiPenguji2 << std::endl;
            std::cout << "Nilai Pembimbing: " << this->nilaiPembimbing << std::endl;
            std::cout << "Huruf Mutu: " << this->getHurufMutu() << std::endl;
        }
};