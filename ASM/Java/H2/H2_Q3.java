package Java_Code.ASM;  //確保在資料夾內可執行

public class H2_Q3 {
    public static void main(String[] args) {
        int reg1 = 100;                                 
        int res1 = reg1 - reg1;                         
        
        boolean zf = (res1 == 0);                       
        int eflag1 = zf ? 0x0040 : 0x0000;             
        int ans1 = eflag1 & 0x0040;                
        System.out.println("Zero Flag 狀態位元 (0x0040 表示結果為 0): 0x" + Integer.toHexString(ans1));

        int regSmall = 10;                              
        int regLarge = 20;                              
        int res2 = regSmall - regLarge;                 
        
        boolean sf = (res2 < 0);                        
        int eflag2 = sf ? 0x0080 : 0x0000;             
        int ans2 = eflag2 & 0x0080;                
        System.out.println("Sign Flag 狀態位元 (0x0080 表示結果為負數): 0x" + Integer.toHexString(ans2));
    }
}
