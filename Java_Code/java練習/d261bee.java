import java.util.*;
public class d261bee {
    public static void main (String args[]){
        Scanner input = new Scanner(System.in);
        while (input.hasNext()){
        int year = input.nextInt();
        if (year == -1) break;
        long[][] numofbee = new long[2][year+1];
        numofbee[0][0] = 1;
            for (int i=1; i<=year; i++){
                numofbee[0][i] = numofbee[1][i-1]+1;
                numofbee[1][i] = numofbee[0][i-1] + numofbee[1][i-1];
            }
            System.out.println(numofbee[1][year] +" "+ (numofbee[0][year]+numofbee[1][year]));
        }
    input.close();
    }
}
