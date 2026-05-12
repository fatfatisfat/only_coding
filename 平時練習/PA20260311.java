import java.util.*;
public class PA20260311 {
    public static void main(String args[]){
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        String team[] = new String[n];
        int score[] = new int[n];
        for (int i=0; i<n; i++) team[i] = input.next();
        
        while (input.hasNext()){
            String bat[] = input.next().split("-");
            String sc[] = input.next().split(":");
            if (Integer.parseInt(sc[0]) > Integer.parseInt(sc[1])){
                score = addsc(team, score, bat[0], 1);
            }else if (Integer.parseInt(sc[0]) == Integer.parseInt(sc[1])){
                score = addsc(team, score, bat[0], 2);
                score = addsc(team, score, bat[1], 2);
            }else {
                score = addsc(team, score, bat[1], 1);
            }
        }
        for (int i=0; i<n; i++){
            for (int j=i; j<n-1; j++){
                if (score[j] < score[j+1]){
                    int temp = score[j];
                    score[j] = score[j+1];
                    score[j+1] = temp;
                    String s = team[j];
                    team[j] = team[j+1];
                    team[j+1] = s;
                }
            }
        }
        
        for (int i=0; i<n/2; i++){
            System.out.println(team[i]);
        }

        input.close();
    }
    public static int[] addsc(String[] team, int[] sc, String winner, int a){
        if (a == 1){
            for (int i=0; i<team.length; i++){
                if (team[i].equals(winner)){
                    sc[i] += 3;
                    break;
                }
            }
        }else {
            for (int i=0; i<team.length; i++){
                if (team[i].equals(winner)){
                    sc[i] += 1;
                    break;
                }
            }
        }
        return sc;
    }
}