public class GCD {
    public static void main(String[] args) {
        System.out.println(gcd(120, 140));
        System.out.println(gcdRecurs(120, 140));
    }

    public static int gcd(int a, int b) {
        while (b > 0) {
            a %= b;
            // swap both the numbers
            a += b;
            b = a - b;
            a = a - b;
        }
        return a;
    }

    public static int gcdRecurs(int a, int b) {
        if (b == 0)
            return a;
        return gcdRecurs(b, a % b);
    }
}