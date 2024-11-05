class Solution {
public:
    int romanToInt(string s) {

        //create a hash map that will store the roman numbers with their assigned value
        unordered_map<char, int> roman = {
        {'I', 1},
        {'V', 5},
        {'X', 10},
        {'L', 50},
        {'C', 100},
        {'D', 500},
        {'M', 1000}
        };

        //sum will store the answer when i do the addition if example VI V > I and will store the answer when subtracting IV I < V  
        int sum = 0;
        int n = s.size();
        //i will be the index used to access the element in string s
        int i = 0;
        //n-1 so it doesnt go out of bound
        while (i < n ){
            //check if index i is less than the last index and if the element at index i in s from the roman map is less than the value of the element at index i+1 example IV
            if( i < n-1 && roman[s[i]] < roman[s[i+1]] ){
                //subtract the index at i+1 from the index at i so IV would represent 5 - 1
                sum += roman[s[i+1]] - roman[s[i]];
                //increment by 2 since we would have already used 2 elements and move to the next unprocessed character
                i += 2;
            }
            else{
                //if the index at i not followed by a higher value at i+1 then just add the value of index i to sum
                sum += roman[s[i]];
                //increment by 1 to go to the next element
                i+=1;
            }
        }
        return sum;
    }
};

//i have the roman numeral symbols
//if i want the value of 2 its writter as II in roman
//12 is written as XII which is adding X + II together since X(10) > II(2)
//same for 27 XXVII is addinG XX+V+II since its checking if XX > V if it is then add and then it checks if V > II if it is we add them as well and then add what i had
//Roman numerals are usually written largest to smallest from left to right
//if i want 4 its IV it checks I < V so we subtract V - I
