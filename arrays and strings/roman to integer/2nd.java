class Solution {
    public int romanToInt(String s) {

        //this is the way in java to initialize a hasmap
        Map <Character, Integer> roman = new HashMap<>();
        roman.put('I', 1);
        roman.put('V', 5);
        roman.put('X', 10);
        roman.put('L', 50);
        roman.put('C', 100);
        roman.put('D', 500);
        roman.put('M', 1000);

        int sum = 0;
        int n = s.length();
        int i = 0;

        while (i < n){
            if(i < n - 1 && roman.get(s.charAt(i)) < roman.get(s.charAt(i+1))){
                sum += roman.get(s.charAt(i + 1)) - roman.get(s.charAt(i));
                i += 2;
            }
            else{
                sum += roman.get(s.charAt(i));
                i += 1;
            }
        }
        return sum;
    }
}