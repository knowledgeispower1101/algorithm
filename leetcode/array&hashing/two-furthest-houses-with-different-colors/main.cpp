#include <iostream>
using namespace std;

class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int max_distance = 0;
        for (int i = 0; i < colors.size(); i++) {
            for (int j = 0; j < colors.size(); j++) {
                if (i == j || colors[i] == colors[j]) continue;
                max_distance = max(max_distance, abs(j - i));
            }
        }
        return max_distance;
    }
};

int main() {


    return 0;
}