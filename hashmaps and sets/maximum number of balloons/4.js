/**
 * @param {string} text
 * @return {number}
 */
var maxNumberOfBalloons = function(text) {
    let balloonsize = 7;
    let sum = 0;

    let bal = "balloon";

    // If the text is too short to form even one "balloon", return 0
    if (text.length < balloonsize) {
        return 0;
    }

    const count = new Map();

    // Count the frequency of each character in the text
    for (const t of text) {
        count.set(t, (count.get(t) || 0) + 1);
    }

    // While we can form "balloon"
    while (true) {
        // Check if we have enough characters to form "balloon"
        for (let i = 0; i < bal.length; i++) {
            let t = bal[i];
            
            // If any character is missing or not enough of it, return the current sum
            if (!count.has(t) || count.get(t) <= 0) {
                return sum;
            }

            // Decrement the count of each character
            count.set(t, count.get(t) - 1);
        }

        // We've formed one more "balloon", so increment the sum
        sum++;
    }

    return sum;
};
