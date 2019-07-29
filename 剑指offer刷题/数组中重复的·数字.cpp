class Solution {
public:
    // Parameters:
    //        numbers:     an array of integers
    //        length:      the length of array numbers
    //        duplication: (Output) the duplicated number in the array number
    // Return value:       true if the input is valid,
    //and there are some duplications in the array number
    //                     otherwise false
    bool duplicate(int numbers[], int length, int* duplication) {
        if(length<=0) return false;
        int aha[1000]={0};
        for(int i=0;i<length;i++)
        {
            int j=numbers[i];
            aha[j]++;
        }
        bool flag=true;
        int count=0;
        for(int i=0;i<length;i++)
        {
            if(aha[i]>=2)
            {
                duplication[count++]=numbers[i];
                return true;
            }
        }
        if(flag) return false;
    }
};
