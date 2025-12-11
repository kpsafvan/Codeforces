public class Solution {
    public string GcdOfStrings(string str1, string str2) {
        int max = 0;
        string ret = "";
        for(int i =0;i<str1.Length;i++){
            int curr = 0,shift =0;

            for(int j=0;j<str2.Length;j++){
                if(i + j >= str1.Length){
                    break;
                }
                Console.WriteLine("123");
                if(str1[i + j] == str2[j-shift]){
                    curr++;
                    if(curr > max){
                        max = curr;
                        ret = str2.Substring(j-shift - curr + 1, j-shift + 1);
                    }
                }
                else{
                    curr = 0;
                    shift = j;
                }
            }
        }
        return ret;
    }
}

//Different solution , question interpretation different, found longest common string