public class Main {
    public static void main(String[] argv) {
        System.out.println(binPow(3, 22));
        System.out.println(binPowRecurs(3, 22));
    }

    private static long binPow(int a, int n) {
        long result = 1;
        while (n > 0) {
            if ((n & 1) == 1)
                result *= a;
            a *= a;
            n >>= 1;
        }
        return result;
    }

    private static long binPowRecurs(int a, int n) {
        if (n == 0)
            return 1;
        long temp = binPowRecurs(a, n / 2);
        long result = temp * temp;
        if ((n & 1) == 1)
            result *= a;
        return result;
    }
}