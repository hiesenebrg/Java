package OOPs;

public class fraction_use {
    public static void main(String[] args) {
        fraction f1 = new fraction(20, 30);
        f1.print();

        //setting numerator

        f1.setNumerator(12);
        int d = f1.getDenominator();
        System.out.println();
        f1.print();

        //setting and changing numerator
        f1.setNumerator(10);
        f1.setDenominator(30);
        f1.print();
    }
}
