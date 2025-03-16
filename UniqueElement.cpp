#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> UniqueElement(int n, vector<int> &nums)
{
    for (int i = 0; i < n; i++)
    {
        int found = 0;
        for (int j = 0; j < n; j++)
        {
            if (nums[i] == nums[j])
            {
                found++;
            }
        }
        if (found == 1)
        {
            return {nums[i]};
        }
    }
    return {};
}


vector<int> UniqueElementUsingMap(int n,vector<int> &nums){
    unordered_map<int,int> store;
    for(int num :nums){
        store[num]++;
    }
    vector<int> result;
    for(auto &pair:store){
        if(pair.second==1){
            result.push_back(pair.first);
        }

    }
    return result;
}


int main()
{
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7, 8, 9, 1, 2, 3, 4, 5, 6, 7, 8};
    int n = nums.size();
    vector<int> result = UniqueElement(n, nums);
    for (int num : result)
    {

        cout <<"using loop: "<< num << " ";
    }
    cout << endl;
    vector<int> result2 = UniqueElementUsingMap(n, nums);
    for (int num : result2)
    {
        cout <<"using map: "<< num << " ";
    }
    cout<<endl;
    return 0;
}
