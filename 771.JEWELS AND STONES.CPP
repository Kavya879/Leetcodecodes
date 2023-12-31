771.JEWELS AND STONES

BRUTE FORCE- class Solution {
public:
    int numJewelsInStones(string jewels, string stones) { //some stones are jewels
      int counter=0;
        for(int i=0 ; i<jewels.length() ; i++){
            for(int j=0 ; j<stones.length() ; j++){
                if(jewels[i]==stones[j]){
                    counter++;
                }
            }
        } return counter;
    }
};


optimised - 
class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int counter = 0;
        for (int i = 0; i < stones.length(); i++) {
            if (jewels.find(stones[i]) != string::npos) { // string::npos means substring was not found within the string and we want that to be false as counter should be ++ only when jewels are found in the string
                counter++;
            }
        }
        return counter;


