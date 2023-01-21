
<details>
    <summary>[Minimum_Common_Value](https://leetcode.cn/contest/biweekly-contest-96/problems/minimum-common-value/)</summary>

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
    <summary>[Minimum_Operations_to Make_Array_Equal_II](https://leetcode.cn/contest/biweekly-contest-96/problems/minimum-operations-to-make-array-equal-ii/)</summary>

> I failed in the other three problems, the note below was 

</details>

