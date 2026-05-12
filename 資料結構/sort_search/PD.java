package sort_search;

import java.util.*;

class mos {
                int no;
                double decibel;
                double weight;
                double speed;
                mos(int no , double decibel, double weight, double speed){
                    this.no = no;
                    this.decibel = decibel;
                    this.weight = weight;
                    this.speed = speed;
                }
            }
public class PD {
    public static void main(String args[]){
        Scanner input = new Scanner(System.in);
        while(input.hasNext()){
            int n = input.nextInt();
            if (n == 0) break;
            ArrayList<mos> list = new ArrayList<>();
            for (int i=0; i<n; i++){
                int no = input.nextInt();
                double weight = input.nextDouble();
                double speed = input.nextDouble();
                double decibel = input.nextDouble();
                list.add(new mos(no, decibel, weight, speed));
            }
            list.sort((a, b) -> {
                if (a.decibel != b.decibel) return Double.compare(b.decibel, a.decibel);
                if (a.speed != b.speed) return Double.compare(b.speed, a.speed);
                if (a.weight != b.weight) return Double.compare(a.weight, b.weight);
                return Integer.compare(a.no, b.no);
            });
            for (mos m : list){
                System.out.print(m.no + " ");
            }
            System.out.println();
        }
        input.close();
    }
}
