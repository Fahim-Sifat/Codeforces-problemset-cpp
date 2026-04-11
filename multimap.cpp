#include <iostream>
#include <map>

using namespace std;

int main() {
    multimap<string, int> scores;

    // ১. ইনসার্ট
    scores.insert({"Sakib", 80});
    scores.insert({"Sakib", 95});
    scores.insert({"Tamim", 70});

    // ২. কাউন্ট করা
    cout << "Sakib has " << scores.count("Sakib") << " entries." << endl;

    // ৩. নির্দিষ্ট রেঞ্জ খোঁজা (equal_range)
    auto range = scores.equal_range("Sakib");
    cout << "Sakib's scores: ";
    for (auto it = range.first; it != range.second; ++it) {
        cout << it->second << " ";
    }

    return 0;
}