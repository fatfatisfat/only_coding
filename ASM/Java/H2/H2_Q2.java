package Java_Code.ASM;  //確保在資料夾內可執行
public class H2_Q2 {
    public static void main(String[] args) {

        short num1 = 32767;                             
        int result1 = num1 + 1;
        
        boolean of1 = (result1 > Short.MAX_VALUE || result1 < Short.MIN_VALUE);
        
        int flag1 = of1 ? 0x0800 : 0x0000;            
        int ofStatus1 = flag1 & 0x0800;               
        System.out.println("加 1 後的 OF 狀態位元 (0x0800 表示溢位): 0x" + Integer.toHexString(ofStatus1));

        short num2 = -32768;                            
        int result2 = num2 - 1;                         
        
        boolean of2 = (result2 > Short.MAX_VALUE || result2 < Short.MIN_VALUE);
        
        int flag2 = of2 ? 0x0800 : 0x0000;            
        int ofStatus2 = flag2 & 0x0800;               
        System.out.println("減 1 後的 OF 狀態位元 (0x0800 表示溢位): 0x" + Integer.toHexString(ofStatus2));
    }
}