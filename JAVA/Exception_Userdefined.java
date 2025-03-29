

class my extends Exception{
    public String toString(){
        return"put the amount more than or equal to 5000";
    }
}
public class test{
    static void fun1(){
        try{
            throw new my();
        }
        catch(my e){
            System.out.println(e);
        }
    }
    public static void main(String[] args){
        fun1();
    }
}





// Alternate..


class my extends Exception{
    public String toString(){
        return"put the amount more than or equal to 5000";
    }
}
public class test{
    
    public static void main(String[] args){
        //int a[]=new int[5];
        int a[]={10000,200000,6300,4,4500};  //array me size mention ni kiya jata h...
        for(int i=0;i<a.length;i++){
            if(a[i]<5000){
                 try{
                    throw new my();
                }
                catch(my e){
                    System.out.println(e);
                }
            }
        }
    }
}