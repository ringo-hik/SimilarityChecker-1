#include <string>

class LengthCalculator {
public:
    int calculateLengthDiff(const std::string& str1, const std::string& str2) {
        return calScore(str1.length(), str2.length());
    }

private:
    const int MAX_LENGTH_SCORE = 60;
    int calScore(int len1, int len2) {
        if (len1 > len2)
            return (int)((double)(len1 - len2) / len1 * MAX_LENGTH_SCORE);

        return (int)((double)(len2 - len1) / len2 * MAX_LENGTH_SCORE);
    }
};