
abstract class shape{
    abstract public int area();
}
class circle extends shape{
    public int rad;
    public circle( int r){
        rad=r;
    }
    public int area(){
        return rad*rad;
    }
}
public class HelloWorld {
    public static void main(String[] args) {
        shape c=new circle(7);
     //  circle c=new circle(7); // both work...
        
        System.out.println(c.area());
        shape s=c;                //this thing iss also allowed...
        System.out.println(s.area());

    }
}