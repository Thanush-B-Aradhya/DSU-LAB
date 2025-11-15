public class Logical10rExample{
    public static void main(String[]args){
        boolean isstudent=true;
        boolean isteacher=false;
        if(isstudent||isteacher){
            System.out.println("you can enter the class room");
        }else{
            System.out.println("access denied");
        }
    }
}