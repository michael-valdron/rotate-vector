#include <iostream>
#include <vector>
#include <string>

using namespace std;

void rotate(vector<int>& nums, int k) {
    if ((k <= 0) || (nums.size() <= 1)) {
        return;
    }

    k %= nums.size();

    for (int i = 0; i < k; i++) {
        nums.insert(nums.begin(), nums[nums.size() - 1]);
        nums.pop_back();
    }
}

int main(int argc, char const *argv[]) {
    const int array[] = {1, 2, 3, 4, 5, 6, 7};
    int k;
    vector<int> v;

    k = stoi(argv[1]);

    v.insert(v.begin(), array, array+7);

    for (int i = 0; i < v.size(); i++) {
        if ((i + 1) == v.size()) {
             cout << v.at(i);
        }
        else {
            cout << v.at(i) << ", ";
        }
    }

    cout << endl;

    rotate(v, k);

    for (int i = 0; i < v.size(); i++) {
        if ((i + 1) == v.size()) {
             cout << v.at(i);
        }
        else {
            cout << v.at(i) << ", ";
        }
    }

    cout << endl;

     return 0;
}
