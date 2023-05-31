#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    vector<string> stations(N);
    for (int i = 0; i < N; i++) {
        cin >> stations[i];
    }

    unordered_set<string> expressStations;
    for (int i = 0; i < M; i++) {
        string expressStation;
        cin >> expressStation;
        expressStations.insert(expressStation);
    }

    vector<string> result(N);
    result[0] = "Yes"; // Starting station is always a stop for express trains
    result[N - 1] = "Yes"; // Terminal station is always a stop for express trains

    for (int i = 1; i < N - 1; i++) {
        if (expressStations.count(stations[i]) > 0) {
            result[i] = "Yes";
        } else {
            result[i] = "No";
        }
    }

    for (int i = 0; i < N; i++) {
        cout << result[i] << endl;
    }

    return 0;
}
