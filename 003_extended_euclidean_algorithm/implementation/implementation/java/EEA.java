public class EEA {

    private static int x = 0;
    private static int y = 0;

    public static void main(String[] args) {
        int a = 1914;
        int b = 899;
        // answer should be 8, -17, 29
        System.out.println("g: " + eea(a, b));
        int g = eeaRecurs(a, b);
        System.out.println("x: " + EEA.x + ", y: " + EEA.y + ", g: " + g);
    }

    public static int eea(int a, int b) {
        int x1 = 0;
        int y1 = 1;
        int x = 1;
        int y = 0;
        int temp;
        while (b > 0) {
            int q = a / b;
            temp = a;
            a = b;
            b = temp - q * b;
            temp = x;
            x = x1;
            x1 = temp - q * x1;
            temp = y;
            y = y1;
            y1 = temp - q * y1;
        }
        System.out.print("x: " + x + ",  y: " + y + ", ");
        return a;
    }

    public static int eeaRecurs(int a, int b) {
        if (b == 0) {
            EEA.x = 1;
            EEA.y = 0;
            return a;
        }
        int g = eeaRecurs(b, a % b);
        int x1 = EEA.x;
        int y1 = EEA.y;
        EEA.x = y1;
        EEA.y = x1 - (a / b) * y1;
        return g;
    }
}