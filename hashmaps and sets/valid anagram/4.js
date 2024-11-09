//1st method:
/**
 * @param {string} s
 * @param {string} t
 * @return {boolean}
 */
var isAnagram = function(s, t) {
    if(s.length != t.length){
        return false;
    }

    let str1 = s.split('').sort().join('');
    let str2 = t.split('').sort().join('');
    return str1 == str2;
};

//2nd method
/**
 * @param {string} s
 * @param {string} t
 * @return {boolean}
 */
var isAnagram = function(s, t) {
    const count = new Map();

    // Loop over each character in string s, and increment its count in the map.
    for (const c of s) {
        count.set(c, (count.get(c) || 0) + 1);  // If character doesn't exist, it defaults to 0 and then adds 1.
    }

    // Loop over each character in string t, and decrement its count in the map.
    for (const c of t) {
        count.set(c, (count.get(c) || 0) - 1);  // If character doesn't exist, it defaults to 0 and then subtracts 1.
    }

    // Check if all values in the map are 0.
    for (let value of count.values()) {
        if (value !== 0) {
            return false;  // If any value is not 0, return false (not an anagram).
        }
    }

    return true;  // All values are 0, so the strings are anagrams.
};
