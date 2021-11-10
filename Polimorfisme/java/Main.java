public class Main{
    public static void main(String[] args) {
        //Polimorfisme cara 1
        System.out.println("\n================== POLIMORFISME CARA 1 ==================");
        Makhluk makhluk;
        Makhluk makhluk1;
        Mamalia mamalia1;
        Mamalia mamalia2;

        makhluk = new Makhluk();
        makhluk.info();                 //Output = info() di class Makhluk
        makhluk1 = new Mamalia();
        makhluk1.info();                //Output = info() di class Mamalia
        mamalia1 = new Kuda();
        mamalia1.info();                //Output = info() di class Kuda
        mamalia2 = new Anjing();
        mamalia2.info();                //Output = info() di class Anjing
        
        //Polimorfisme cara 2
        System.out.println("\n================== POLIMORFISME CARA 2 ==================");
        Makhluk makhluk2 = new Mamalia();
        Mamalia mamalia3 = new Anjing();
        Mamalia mamalia4 = new Orangutan();
        
        makhluk2.info();                //Output = info() di class Mamalia
        mamalia3.info();                //Output = info() di class Anjing
        mamalia4.info();                //Output = info() di class Orangutan
        
        //Polimorfisme cara 3
        System.out.println("\n================== POLIMORFISME CARA 3 ==================");
        Makhluk makhluk3;
        Mamalia mamalia5 = new Mamalia();
        Mamalia mamalia6;
        Orangutan orangutan1 = new Orangutan();

        makhluk3 = mamalia5;
        makhluk3.info();                //Output = info() di class Mamalia
        mamalia6 = orangutan1;
        mamalia6.info();                //Output = info() di class Orangutan
    }
}