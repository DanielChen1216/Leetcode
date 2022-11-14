#include<iostream>
#include<unordered_map>
using namespace std;


int main()
{
    class Solution {
    public:
        bool containsDuplicate(vector<int>& nums) {
            unordered_map<int, int> hashmap;
            for (int i = 0; i < nums.size(); i++) {
                if (hashmap.find(nums[i]) != hashmap.end()) {
                    return true;
                    break;
                }
                hashmap[nums[i]];
            }
            return false;
        }
    };



    // compare size
    // class Solution {
    // public:
    // bool containsDuplicate(vector<int>& nums) {
    //     unordered_set<int> hash;
    //     for (int i = 0; i < nums.size(); i++)
    //         hash.insert(nums[i]);
    //     if(hash.size() < nums.size())
    //         return true;
    //     else 
    //         return false;
    // }
    // };
}