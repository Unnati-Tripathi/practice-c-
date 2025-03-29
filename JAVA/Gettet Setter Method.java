class rec {
    //public int l;
    //public int b;
    private int l;
    private int b;
    
    int peri(){
        return 2*l*b;
    }
    public void getl(int len){
        l=len;
    }
    public void getb(int bre){
        b=bre;
    }
    int setl(){
        return l;
    }
    
}
public class soln{
    public static void main(String[] args){
       rec r=new rec();
    //   r.l=2;         // alloud if l and bredth are public...
    //   r.b=3;
    r.getl(2);
    r.getb(3);
       System.out.println(r.peri());
    }