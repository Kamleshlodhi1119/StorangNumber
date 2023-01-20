import java.util.Scanner;

class Spaceremove {

    public static void main(String[] args)

    {
        Scanner sc = new Scanner(System.in);
sc.close();
        String str = sc.nextLine();
        // Call the replaceAll() method
        str = str.replaceAll("\\s", "");
        System.out.println(str);

    }
}