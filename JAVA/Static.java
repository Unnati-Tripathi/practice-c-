
interface test{
    public void meth1();
    default  void meth2(){
        System.out.println("default method");
        meth3();         // class ke ander hmne private meth ko bulaya magar jaha bulaya waha to puri public dekh skti h na...:)
    } 
    private void meth3(){
        System.out.println("Private method");
    }
    static void meth4(){
        System.out.println("Static");
    }
}
class tst implements test{
    
    public void meth1(){
        System.out.println("Try");
    }
}
public class HelloWorld {
    public static void main(String[] args) {
        tst t=new tst();
        t.meth1();
        t.meth2();
      // t.meth4();              //Not work..
      test.meth4();              // abe static bht tez h vo apne wale personal meth NAME se he maane ga... LOL
    }
}