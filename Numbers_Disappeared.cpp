#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/*vector<int> findDisappearedNumbers(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    vector<int> ans;
    for(int i = 1; i <= nums.size(); i++) {
        if(!binary_search(nums.begin(), nums.end(), i)) {
            ans.push_back(i);
        }
    }
    return ans;
}

int main() {
    vector<int> nums{4, 3, 2, 7, 8, 2, 3, 1}; // Sample input vector
    vector<int> missingNumbers = findDisappearedNumbers(nums);

    cout << "Missing numbers in the input vector are: ";
    for (int num : missingNumbers) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}*/


// C++ program to initialize
// a vector like an array.
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> vect{ 10, 20, 30 };

	for (int x : vect)
		cout << x << " ";

	return 0;
}
