class Solution {
public:
	int remove_duplicate(int arr[], int n) {
		int x = 1;
		int ind = 1;
		for (int i = 1; i < n; i++)
		{
			if (arr[i] != arr[i - 1]) arr[ind++] = arr[i];
		}
		return ind;
	}
};

