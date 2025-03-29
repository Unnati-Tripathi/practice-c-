public static int th1(int l,int b) throws Exception  {  // generally used jb aap apni error message type krna chate ho or vo ek method se dusri method me transfer me ho
    if (l<0 || b<0 || b==0){
        throw new Exception(" galat h bhai..");
        
    }
    int area=l/b;
    return area;
}
public static void th2(){        //ye usually he likha h
    try{
        th1(5,0);
    }
    catch(Exception e){
        System.out.println(e);
    }
    
}


public static void main(String[] args){
    
    th2();
}
}