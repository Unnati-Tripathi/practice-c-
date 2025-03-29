
 import java.lang.*;
 class multi{
    public int a,b;        // agar ye private hoga to child class isko access ni kr skta.... fir to vo volume nikal he ni paye ga..
   
   
    // public multi(){ //  NON-PARAMETRAISED           if child class me super keyword se isko parameters pass ni krejayenge tb by default ye non parametarized he call hota h...
    //     a=1;
    //     b=1;
    // }
   
   
    public multi(int aa,int bb){
        a=aa;                   
        b=bb;
    }
    public int product(){
        return a+b;
    }
    
}
class add extends multi{
    public int height;
    public add(int h,int A,int B){                //,int a,int b
    super(A,B);       //#super keyword...passing parameters for parent /Super class
        height=h;
        
    }
     public int volume(){
        return a+b+height;
    }
}
public class HelloWorld {
    public static void main(String[] args) {
         add ad=new add(3,1,2);
        System.out.println(ad.volume());
    }
}
