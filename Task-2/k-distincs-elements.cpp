class Solution {
public:
    vector <int> countDistinct (int A[], int n, int k)
    {
        vector<int> ans;
        map<int, int> freq;
        int cnt = 0;
        f(i, 0, k) if (freq[A[i]]++ == 0) cnt++;

        ans.push_back(cnt);

        f(i, k, n)
        {
            if (freq[A[i]]++ == 0) cnt++;
            if (--freq[A[i - k]] == 0) cnt--;
            ans.push_back(cnt);
        }

        return ans;
    }
};

