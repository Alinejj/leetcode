
/**
 * @param {string} ransomNote
 * @param {string} magazine
 * @return {boolean}
 */
var canConstruct = function(ransomNote, magazine) {
    // Create a Map to store character counts from the magazine
    const ransom = new Map();

    // Populate the Map with character frequencies from the magazine
    for (let i = 0; i < magazine.length; i++) {
        let c = magazine[i];
        if (ransom.has(c)) {
            // Increment count if character already exists in the map
            ransom.set(c, ransom.get(c) + 1);
        } else {
            // Initialize count to 1 if character is new
            ransom.set(c, 1);
        }
    }

    // Check if each character in ransomNote can be constructed from the magazine characters
    for (let i = 0; i < ransomNote.length; i++) {
        let c = ransomNote[i];
        // If the character exists in the Map and has remaining counts, use one count
        if (ransom.has(c) && ransom.get(c) > 0) {
            ransom.set(c, ransom.get(c) - 1);
        } else {
            // If the character doesn't exist or count is zero, return false
            return false;
        }
    }
    // Return true if all characters in ransomNote can be constructed
    return true;
};
