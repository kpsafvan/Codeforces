// Online C# Editor for free
// Write, Edit and Run your C# code using C# Online Compiler

using System;

public class HelloWorld
{
    public static void Main(string[] args)
    {
        int[] array = {2,-3,4,-2,2,1,-1,4};
        int start=0,end =7,sum=0,max=-100000000;
        while(start<end){
            sum=0;
            for(int i=start;i<end;i++){
                sum+=array[i];
            }
            if(sum>max){
                max=sum;
            }
            if(array[start]>=array[end]){
                end--;
            }
            else{
                start++;
            }
        }
        Console.WriteLine("The sum of largest subarray is : " + sum);
    }
}