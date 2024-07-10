#include <vector>
#include <random>

class NumberGenerator {
public:
    static std::vector<int> GenerateRandomInts(int num) {
        std::random_device rd;
        std::mt19937 gen(rd());

        std::vector<int> ret;
        for (int i = 0; i < num; i++) {
            ret.emplace_back(gen());
        }
        return ret;
    }

    static std::vector<int> GenerateRandomInts(int num, int lowerBound, int upperBound) {
        std::random_device rd;
        std::uniform_int_distribution<int> gen(lowerBound, upperBound);

        std::vector<int> ret;
        for (int i = 0; i < num; i++) {
            ret.emplace_back(gen(rd));
        }
        return ret;
    }

};