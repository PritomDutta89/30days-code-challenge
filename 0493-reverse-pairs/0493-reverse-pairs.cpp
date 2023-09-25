class Solution {
public:
// use merge sort, just slightly modify it
    void mergeAlgo(vector<int>& v, int low, int mid, int high, int& count)
    {
       int j = mid + 1;
       for(int i=low; i<=mid; i++)
       {
          while(j<=high && v[i] > 2* (long long)v[j]) 
          {
              j++;
          }
          count += j-(mid+1);
       }
       vector<int> temp(high-low+1, 0);
       int left = low, right = mid+1,k=0;
       while(left<=mid && right<=high)
       {
         if(v[left]<v[right])
         {
            temp[k++] = v[left];
            left++;
         }
         else
         {
             temp[k++] = v[right];
             right++;
         }
       }
       while(left<=mid)
       {
           temp[k++] = v[left];
           left++;
       }
       while(right<=high)
       {
            temp[k++] = v[right];
           right++;
       }
       int m=0;
       for(int i=low;i<=high;i++)
       {
           v[i] = temp[m++];
       }

    }

    void mergeSort(vector<int>& v, int low, int high, int& count)
    {
        if(low>=high)
          return;
        else
        {
            int mid = (low+high)/2;
            mergeSort(v,low,mid,count); // for left hand
            mergeSort(v,mid+1,high,count); // for right hand
            mergeAlgo(v,low,mid,high,count);
        }
    }


    int reversePairs(vector<int>& nums) {
        int count = 0;
        mergeSort(nums,0,nums.size()-1,count);
        return count;
    }
};