namespace algorithms {
    int reverseNumber(int x) {
        if (x < 0) return -1;
        long long reversed = 0;
        long long temp = x;
        while (temp != 0) {
            int digit = temp % 10;
            reversed = reversed * 10 + digit;
            temp /= 10;
        }
        return reversed;
    }

}