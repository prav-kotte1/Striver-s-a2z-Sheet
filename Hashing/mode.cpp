#include <iostream>
#include <map>
#include <vector>

using namespace std;

void countFrequencies(const vector<int>& arr) {
    map<int, int> frequencyMap;

    for (int num : arr) {
        frequencyMap[num]++;
    }

    for (const auto& pair : frequencyMap) {
        cout << pair.first << ": " << pair.second << endl;
    }
}

int main() {
    vector<int> arr;
    int num;

    cout << "Enter numbers (end with -1): ";
    while (cin >> num && num != -1) {
        arr.push_back(num);
    }

    countFrequencies(arr);
    return 0;
}
