class hiiii {
    public static void main(String[] args) {
        System.out.println(decimaltobinary(50)); // Should print: 110010
        System.out.print("hhhh");
    }

    private static String decimaltobinary(int n) {
        if (n == 0) return "0";  // special case

        int rem;
        String res = "";
        while (n > 0) {
            rem = n % 2;
            n = n / 2;
            res = rem + res; // prepend
        }
        return res;
    }
}
