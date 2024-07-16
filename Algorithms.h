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

    /* https://www.geeksforgeeks.org/selection-sort-algorithm-2/ */
    template<typename T>
    void selectionSort(std::vector<T>& v, bool ascending) {
        for (size_t i = 0; i < v.size() - 1; i++) {
            size_t swapIdx = i;
            // After a full iteration of the inner loop, the ith element will
            // be sorted, so we can start at i+1
            for (size_t j = i + 1; j < v.size(); j++) {
                // If we find an entry, past the ith index that is gt/lt,
                // then we'll want to swap the ith entry with it
                if ((ascending && v[j] < v[swapIdx]) || 
                    (!ascending &&v[j] > v[swapIdx])) {
                    swapIdx = j;
                }
            }
            if (swapIdx != i) {
                std::swap(v[swapIdx], v[i]);
            } 
        }
    }

    unsigned int fibonacciSequence(unsigned int n) {
        // 0, 1, for the first 2 sequences
        if (n <= 1) return n;
        unsigned int prev1 = 1;  // n-1
        unsigned int prev2 = 0;  // n-2
        unsigned int ret;
        for (unsigned int i = 1; i < n; i++) {
            ret = prev1 + prev2;
            prev2 = prev1;
            prev1 = ret;
        }
        return ret;
    }

}