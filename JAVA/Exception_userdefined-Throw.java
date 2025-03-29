class th3 extends Exception{
    public String toString(){
        return "galat h bhai..";
    }
}
public class test{

public int th1(int l,int b) throws th3  {      //throws Exception
    if(l<0 || b<0 || b==0){
        throw new th3();
    }
    int area=l/b;
    return area;
}
public  void th2(){
    try{
        th1(5,0);
    }
    catch(th3 e){
        System.out.println(e);
    }

}


public static void main(String[] args){

test t=new test();
t.th2();

}
}