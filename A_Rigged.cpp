#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    vector<pair<int, int>> athletes(n);
    for (int i = 0; i < n; i++) {
      cin >> athletes[i].first >> athletes[i].second;
    }

    // Sort the athletes by strength in descending order.
    sort(athletes.begin(), athletes.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
      return a.first > b.first;
    });

    // Find the minimum weight that Polycarp can lift.
    int min_weight = athletes[0].second;

    // Find the maximum weight that Polycarp can lift.
    int max_weight = athletes[0].first;

    // Check if there is a weight that Polycarp can lift more times than any other
    // athlete.
    for (int weight = min_weight; weight <= max_weight; weight++) {
      int max_lifts = athletes[0].second;

      for (int i = 1; i < n; i++) {
        if (athletes[i].first < weight) {
          break;
        }

        int lifts = athletes[i].second;

        if (lifts > max_lifts) {
          max_lifts = lifts;
        }
      }

      if (max_lifts == athletes[0].second) {
        cout << weight << endl;
        break;
      }
    }

    if (max_lifts != athletes[0].second) {
      cout << -1 << endl;
    }
  }

  return 0;
}
