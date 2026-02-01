class Solution {
public:
    int countMonobit(int n) {
    if (n < 0) return 0;

    int count = 0;

    // count 0
    if (n >= 0) count++;

    // count 1
    if (n >= 1) count++;

    long long val = 1; // already counted

    while (true) {
        val = (val << 1) | 1; // 3, 7, 15, ...
        if (val > n) break;
        count++;
    }

    return count;
    }
};