
import java.lang.*;
class multi{
   public int a,b;
   public multi(){ // for no parameters NON-PARAMETRAISED
       a=1;
       b=1;
   }
   public multi(int aa,int bb){// again 2 parameters wala contructor...
       a=aa;                    // # Constructor Overloading...
       b=bb;
   }
   public int product(){
       return a+b;
   }
   public String toString(){             // to right to print all the values of the class inside the variable[0],variable[1],.... etc 
       return " a: "+a+" b: "+b;                                        // #CONNECTED
   }
   
}
public class HelloWorld {
   public static void main(String[] args) {
       multi m[]=new multi[3];
       m[0]=new multi(1,1);
       System.out.println(m[0].product());
       m[1]=new multi();    // pehle value 1,1 set ho gai thi..
        m[1].a=2;m[1].b=1;  // fir hmne change krdii..
        
        System.out.println(m[1].product());
        m[2]=new multi();
        for(multi i:m){                                                  // #CONNECTED
            System.out.println(i);
        }
       
   }
}
// ause array ne define krne ke baad bhi 1 or baar hr ek element ke liye likhna he pdta h... new class..