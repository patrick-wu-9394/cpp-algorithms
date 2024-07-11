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

    /* https://www.geeksforgeeks.org/bubble-sort-algorithm/ */
    template<typename T>
    void bubbleSort(std::vector<T>& v, bool ascending) {
        bool swapped;
        for (size_t i = 0; i < v.size() - 1; i++) {
            swapped = false;
            // After a complete run of each inner loop, we know that the 
            // last i entries are sorted so we don't need to iterate
            // through them again
            for (size_t j = 0; j < v.size() - i - 1; j++) {
                if (ascending && v[j] > v[j+1]) {
                    std::swap(v[j], v[j+1]);
                    swapped = true;
                } else if (!ascending && v[j] < v[j+1]) {
                    std::swap(v[j], v[j+1]);
                    swapped = true;
                }
            }
            // Can finish early if nothing was swapped
            if (swapped == false) break;
        }
    }

}