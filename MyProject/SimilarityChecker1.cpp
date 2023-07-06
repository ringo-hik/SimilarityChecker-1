#include <string>

class StringChecker {
public:
    double checkStringLength(const std::string& strA, const std::string& strB) {
        double lenA = static_cast<double>(strA.length());
        double lenB = static_cast<double>(strB.length());
        double gab = std::abs(lenA - lenB);
        double maxLen = std::max(lenA, lenB);

        double score = (1 - (gab / maxLen)) * 60.0;
        return score;
    }
};