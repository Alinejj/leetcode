class Solution {
    public int maxNumberOfBalloons(String text) {
        int sum = 0;  // To count the number of times "balloon" can be formed
        String bal = "balloon";  // Target word

        // Count the occurrences of each character in `text`
        HashMap<Character, Integer> count = new HashMap<>();
        for (char t : text.toCharArray()) {
            count.put(t, count.getOrDefault(t, 0) + 1);
        }

        // Attempt to form "balloon" as many times as possible
        while (true) {
            for (char t : bal.toCharArray()) {
                // Check if character `t` has enough occurrences
                if (count.getOrDefault(t, 0) <= 0) {
                    return sum;  // If any character is missing, stop and return the result
                }
                // Decrease the count of each character used in forming "balloon"
                count.put(t, count.get(t) - 1);
            }
            sum++;  // Successfully formed one instance of "balloon"
        }
    }
}
