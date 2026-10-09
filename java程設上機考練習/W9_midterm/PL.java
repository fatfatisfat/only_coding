package W9_midterm;
import java.util.*;
public class PL {
    public static void main(String args[]){
        Scanner input = new Scanner(System.in);
        while (input.hasNext()){
            int n = input.nextInt();
            if (n == 0) break;
            int m = input.nextInt();
            int[] student = new int[n];
            int[] task = new int[m];
            for (int i=0; i<n; i++){
                student[i] = input.nextInt();
            }
            for (int i=0; i<m; i++){
                task[i] = input.nextInt();
            }
            Arrays.sort(student);
            Arrays.sort(task);
            int count = 0;
            for (int i=m-1; i>=0; i--){
                for (int j=n-1; j>=0; j--){
                    if (student[j] + task[i] <= 10){
                        student[j] += task[i];
                        count++;
                        Arrays.sort(student);
                        break;
                    }
                }
            }
            System.out.println(count);
        }
    input.close();
    }
}
