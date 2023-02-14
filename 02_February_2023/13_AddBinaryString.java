class Solution {
    public String addBinary(String a, String b) {
        String temp1, temp2;
        if (a.length() >= b.length()){
            temp1 = a;
            temp2 = b;
        }
        else {
            temp1 = b;
            temp2 = a;
        }

        int i = temp1.length()-1, j = temp2.length()-1;
        int p = 0, q = 0, cIn = 0, sum=0, cOut=0;

        String res = "";
        while(j >= 0) {
            p = temp1.charAt(i--)-'0';
            q = temp2.charAt(j--)-'0';

            sum = p^q^cIn;
            cOut = p&q | q&cIn | p&cIn;

            res = String.valueOf(sum) + res;
            cIn = cOut;
        }

        q = 0;

        while(i >= 0) {
            p = temp1.charAt(i--)-'0';

            sum = p^q^cIn;
            cOut = p&q | q&cIn | p&cIn;

            res = String.valueOf(sum) + res;
            cIn = cOut;
        }
        
        if (cOut == 1) {
            res = "1" + res;
        }

        return res;
    }
}