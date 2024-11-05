class Solution {
public:
    string mergeAlternately(string word1, string word2) {

        //initialize an empty string that will be used to add the letters from word1 and word2 alternatly
        string str = "";

        int first = word1.size();
        int second = word2.size();

       //iterate inside both strings
        for (int i = 0; i<first && i < second; i++){
            //add the letter of index i inside the empty string 
            str += word1[i];//this and the operation below is adding the letters alternatly
            str += word2[i];
        }

       //if the word1 has more words than word2
        if(first > second){
            //creates a substring of word1 starting at the end of length of word 2 and appends the excess elements
            str += word1.substr(second);
        }

       //if the word2 has more words than word1
        else if(second > first){
            //creates a substring of word2 starting at the end of length of word1 and appends the excess elements
            str += word2.substr(first);
        }
        return str;
    }
};

//i have two strings word1 and word2
//i need to merge the strings by adding each letter alternatly 
//for example add the first letter in word1 then the first letter of word2 after etc
//if i have any excess words like one word is longer than the other
//i add the excess letters at the end of the new string that will contain the alternatly added letters