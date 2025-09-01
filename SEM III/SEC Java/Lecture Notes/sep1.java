class sep1 {
    public static void main(String[] args) {
        String a = "Hello";
        String b = "hello";
        System.out.println(a);
        System.out.println(a.toUpperCase());
        System.out.println(a.toLowerCase());
        System.out.println(a.length());
        //System.out.println(a.CharAt(index: 2));
        if(a.equals(b))
            System.out.println("Both are equal");
        if(a.equalsIgnoreCase(b))
            System.out.println("Both are equal");
   }
}