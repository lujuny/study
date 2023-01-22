
<details>
<summary> 

[Minimum Common Value](https://leetcode.cn/contest/biweekly-contest-96/problems/minimum-common-value/)

</summary>

> My solution is traverse array1,and record time each element appear. Then traverse array2, find the ans according to the record.
```cpp
class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int > cnt;
        for(auto &p: nums1){
            cnt[p] ++;
        }
        int size2 = nums2.size();
        for(int t = 0; t < size2 ; t ++){
            if(cnt[nums2[t]])
                return nums2[t];
        }
        return -1;
    }
};

```

</details>

<details>
<summary>

[Minimum Operations to MakeArray Equal II](https://leetcode.cn/contest/biweekly-contest-96/problems/minimum-operations-to-make-array-equal-ii/)

</summary>

> I failed in solving the other three problems, the note below according other [blogs](https://leetcode.cn/circle/discuss/33ZnsL/)

> first if k is 0 and nums1[i] != nums2[i] return -1, or delta = (nums1[i] - nums2[i]) is % k is not 0 return -1, else if delta > 0 pos += delta / k, else nag += delta / k

```cpp
class Solution {
public:
    using ll = long long;

    long long minOperations(vector<int>& nums1, vector<int>& nums2, int k) {
        int n = nums1.size();
        ll neg = 0, pos = 0;

        for(int i = 0; i < n; i ++){
            ll delta = nums1[i] - nums2[i];
            
            if(k == 0 && delta != 0)return -1;
            else {
                if(delta%k)return -1;
                neg += delta < 0? delta/k:0;
                pos += delta > 0? delta/k:0;
            }
        }
        return nag + pos == 0? pos:-1;

    }
};
```


</details>


<details>
<summary>

[Maximum Subsequence Score](https://leetcode.cn/contest/biweekly-contest-96/problems/maximum-subsequence-score/)

</summary>

> The idea is to consider for each element of array of nums2[i] as minimum once and check for maximum possible values available in nums1 keeping in mind nums2[i] as minimum .
    

[Citation](https://leetcode.com/problems/maximum-subsequence-score/solutions/3082737/c-easiest-solution-using-priority-queue-with-explanation/)

</details>
