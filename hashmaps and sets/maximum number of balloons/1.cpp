class Solution {
public:
    int maxNumberOfBalloons(string text) {
        //get the balloon size to compare it to the text
        int balloonSize = 7;
        // sum will store the number of instances balloon was made
        int sum = 0 ;
        //will be using this string to see if text can form the word balloon
        string bal = "balloon";
        //if the length of the text is less than the word balloon return 0
        if(text.size() < balloonSize){
            return 0;
        }

        unordered_map<char, int>count;
        //loop inside the string txt and for each character t add it inside the hash map count
        for(char t : text){
            count[t]++;
        }
        //as long as my hash map isnt empty
        while(!count.empty()){
            //check each character t in string bal = balloon
            for(char t : bal){
                //if the character found in t till the end so since we looped t inside bal 
                //t has the word balloon in, so when we go inside count, if we see every letter
                //in count and is matched to a letter from bal then we can return the sum
                if(count.find(t) == count.end()){
                    return sum;
                }
                //decrement the letter since we cant use a letter more than once
                count[t]--;
                //once all the letters found in balloon is used up we can erase t
                if(count[t] == 0){
                    count.erase(t);
                }
            }
            //increment the sum
            sum++;
        }
        return sum;
    }
};
//so i have a string text and the letters/characters that i have in text 
//i need to form as many instances as i can of the word balloon.
//i can only use each character once, returning the max number of instances
//that can be formed