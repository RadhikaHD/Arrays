class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        if (nums.size()==0)
            len = 0;
        else if (nums.size()==1)
            len = 1;
        else
        {
            len=1;
            for (auto it1 = nums.begin(); it1!=nums.end()-1; it1++)
            { 
                for (auto it2 = it1+1; it2!=nums.end(); it2++)
                {
                    temp = *it1;
                        if (*it2 > temp)
                            {
                                temp = *it2;
                                *it2 = *(it1+1);
                                *(it1+1) = temp;
                                len++; //problem length fails for test case 112344
                            } 
                    }
            }
        }
             
        return len;
        
    }
    
    int len;
    int temp = 0;
    vector<int>::iterator it2;
    
};