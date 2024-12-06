  //keep track of the current sum
    //go from 1 to n
    //check if you are part of the band with a log2 binary search
    //if you exceed the max sum stop and return i
    //this is nlogn
    //append the current banned to an array with a linear addition
    //if you encounter a number don't add it
    //how to combine lists? create an array 1 to n with some indices with a binary state 0 or 1 saying that the number is valid or not
    //this is n
    //this would be easier to deal with in c++ where I can specify a vector length and intial values



class Solution {
public:
	int maxCount(vector<int>& banned, int n, int maxSum) {
		vector<int> nums(n, 1);
		int sum = 0;
		int i = 0;
		int amount = 0;
		int sumInc = 0;

		for(int bannedNum : banned){
			if(bannedNum <= n)
				nums[bannedNum - 1] = 0;
		}


		for(int num : nums) cout << num << endl;
		while(i < n){
			sumInc = nums[i] * (i + 1);
			sum += sumInc;
			if(sumInc){
				if(sum <= maxSum)
					amount++;
				else
					break;
			}
			i++;
		}

			return amount;


	}
};
