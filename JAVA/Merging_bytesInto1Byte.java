
import java.lang.*;

public class airthmatics{
   
    public static void main(String[] args){
        
        byte a=8,b=12;
       
        b=(byte)(b<<4);          //shift operation type cast kr deta h int me.. so typecast it back into byte..
        a=(byte)(a|b);            //a me dono save ho gaye..
        System.out.println(a & 0b00001111);  // trying to get b ki value
        System.out.println((a & 0b11110000)>>4);  // trying to get b ki value
        
        
    }
}