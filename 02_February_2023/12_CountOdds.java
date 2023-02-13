class Solution {
    public int countOdds(int low, int high) {
        int inc = 0;
        if (!(low % 2 == 0 && high % 2 == 0))
            inc = 1;
        return (high-low)/2 + inc;
    }
}