import java.util.*;
public class P120260312 {
    public static void main(String args[]){
        Scanner input = new Scanner(System.in);
        int left = 0;
        int right = 0;
        int n = input.nextInt();
        int num = input.nextInt();
        int count = 0;
        input.nextLine();
        String s[] = input.nextLine().split(" ");
        int arr[] = new int[n];
        for (int i=0; i<n; i++){
            arr[i] = Integer.parseInt(s[i]);
        }
        long sum = arr[0];
		while (left <= n-1){
            if (right + 1 <= n-1){
				right++;
				sum += arr[right];
				}
			if (sum < num) continue;
            if (sum > num){
                sum -= arr[left];
                left++;
            }
			if (sum == num){
				count++;
				sum -= arr[left];
				left++;
			}
        }
		System.out.println(count);
        input.close();
    }
}
