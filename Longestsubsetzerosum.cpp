int LongestSubsetWithZeroSum(vector < int > arr) {

  // Write your code here
    int len=0;
    unordered_map<int, int> mp;
    mp[0]=-1;
    int sum=0;
    for(int i=0; i<arr.size(); i++){
        sum+=arr[i];
        if(mp.find(sum)==mp.end())
            mp[sum]=i;
        else len= max(i-mp[sum], len);
    }
    return len;

}