class Solution
{
public:
    //     void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    //     int k=0;
    //         for(int i=m;i<m+n;i++){
    //             nums1[i]=nums2[k];
    //             k++;
    //         }
    //         sort(nums1.begin(),nums1.end());
    //     }
    // };

    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
    {
        int i = m - 1, j = n - 1, k = m + n - 1;
        while (i >= 0 && j >= 0)
        {
            if (nums1[i] > nums2[j])
            {
                nums1[k] = nums1[i];
                i--;
                k--;
            }
            else
            {
                nums1[k] = nums2[j];
                j--;
                k--;
            }
        }
        while (i >= 0)
            nums1[k--] = nums1[i--];
        while (j >= 0)
            nums1[k--] = nums2[j--];
    }
};

// class Solution {
// public:
//     void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
//          for(int i=0;i<n;i++){
//              nums1[m+i]=nums2[i];
//          }
//          sort(nums1.begin(),nums1.end());
// 		 }
// 	};

// class Solution {
// public:
//     void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

//         int a=m-1;
//         int b=n-1;
//         int i=m+n-1;    // calculate the index of the last element of the merged array

//         // go from the back by A and B and compare and put to the A element which is larger
//         while(a>=0 && b>=0)
//         {
//             if(nums1[a]>nums2[b])
//                 nums1[i--]=nums1[a--];
//             else
//                 nums1[i--]=nums2[b--];
//         }

//         // if B is longer than A just copy the rest of B to A location, otherwise no need to do anything
//         while(b>=0)
//             nums1[i--]=nums2[b--];
//     }
// };
