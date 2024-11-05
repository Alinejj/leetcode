class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int sum = 0;

        for(int i = 0; i < jewels.size();i++){
            for(int j = 0; j < stones.size(); j++){
                if(jewels[i] == stones[j]){
                    sum++;
                }
            }
        }
        return sum;
    }
};

//im checking how many stones in my strinf stones is a jewel that can be found
//in the jewels string
//in order to do that i first loop through the jewels string and then i loop
//through the stones string and if i can find a stone inside the jewel
//i can increment and store that in sum