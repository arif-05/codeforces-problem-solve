#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

int minCitiesToRebuild(int n, int m) {
    // Create a set to store rebuilt cities
    unordered_set<int> rebuiltCities;

    // Iterate over the given matrix and mark necessary cities
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            int cityPos = (i - 1) * m + j;
            rebuiltCities.insert(cityPos);

            // Check if adjacent cities need to be marked
            if (j < m) {
                rebuiltCities.insert(cityPos + 1);
            }
            if (i < n) {
                rebuiltCities.insert(cityPos + m);
            }
        }
    }

    // Return the count of cities that need to be rebuilt
    return rebuiltCities.size();
}

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; ++i) {
        int n, m;
        cin >> n >> m;
        int result = minCitiesToRebuild(n, m);
        cout << result << endl;
    }

    return 0;
}
