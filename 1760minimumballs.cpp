//Sort the numbers descending
//keep track of penality
//if number == 1 discard it
//penality starts at max
//pop the number and break it evenly as possible 
//penality = penality < (max / 2)
//check if the new numbers are greater than current max
//if they are, push them back
//if they are less, break down the next max
//if breaking the next number 


class Solution {
public:
    int minimumSize(vector<int>& nums, int maxOperations) {
	    sort(nums.begin(), nums.end());
	    int i = 0;
	    int currentNum = 0;
	    int firstHalf = 0;
	    int secondHalf = 0;
	    while(i < maxOperations){
		i++;
		//get the last number, which is the maximum one
		currentNum = nums.back(); 
		nums.pop_back();
		int isEven = currentNum % 2 == 0;
		//divide that number
		firstHalf = (currentNum - !isEven) / 2;
		secondHalf = currentNum - firstHalf;
		//secondHalf is alway greater
		//check if the greater half is greater than the current max number in the stack
		if(nums.size() == 0 || secondHalf >= nums.back()) nums.push_back(secondHalf);
	    }
	    return nums.back();
        
    }
};
