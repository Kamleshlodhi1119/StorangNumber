class Spaceremove {

    public static void main(String[] args)

    {

        String str = "   Kamlesh   lodhi     ";
 

        // Call the replaceAll() method

        str = str.replaceAll("\\s", "");
 

        System.out.println(str);

    }
}