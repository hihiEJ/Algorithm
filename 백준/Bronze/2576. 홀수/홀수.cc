#include <bits/stdc++.h>
using namespace std;

int main(void) {
	vector<int> nums;
	vector<int> oddnum;
	int num = 0;
	int sum = 0;
	for (int i = 0; i <7; i++){
		cin >> num;
		nums.push_back(num);
	}

	for (int i = 0; i < 7; i++) {
		
		if (nums[i] % 2 != 0) {
			sum += nums[i];
			oddnum.push_back(nums[i]);
		}
	}
	if (sum == 0) {
		cout << "-1" << "\n";
	}
	else {
		cout << sum << "\n";
		int min = *min_element(oddnum.begin(), oddnum.end());
		cout << min << "\n";
	}
}