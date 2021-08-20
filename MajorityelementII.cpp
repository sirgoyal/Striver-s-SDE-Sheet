vector<int> majorityElementII(vector<int> &arr)
{
    // Write your code here.
    int ele1= arr[0];
    int c1=1;
    int ele2= -1;
    int c2=0;
    for(int i=1; i<arr.size(); i++)
    {
        if(arr[i]==ele1)
            c1++;
        else if(arr[i]==ele2)
            c2++;
        else if(c1==0)
        {
            ele1=arr[i];
            c1=1;
        }
        else if(c2==0) {
            ele2=arr[i];
            c2=1;
        }
        else {
            c1--;
            c2--;
        }
    }
    c1=0;
    c2=0;
    for(int i=0; i<arr.size(); i++)
    {
        if(arr[i]==ele1)
            c1++;
        else if(arr[i]==ele2)
            c2++;
    }
    vector<int> ans;
    if(c1>arr.size()/3)
        ans.push_back(ele1);
    if(c2>arr.size()/3)
        ans.push_back(ele2);
    return ans;
}