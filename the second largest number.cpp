#include<iostream>
using namespace std;
int main(){
	unsigned int nums[5];
	cin >>nums[0];
	cin >> nums[1];
	cin >> nums[2];
	cin >> nums[3];
	cin >> nums[4];
	for (int i = 0; i < 5; ++i)
	{
		for (int j = 0; j < 5; ++j)
		{
			if (nums[i]>nums[j]&&i<j){
				unsigned a = nums[i];
				nums[i] = nums[j];
				nums[j] = a;
			}
		}
	}
	cout << nums[3];
	return 0;
}