import java.io.File;
import java.io.FileNotFoundException;
import java.util.Scanner;

public class Integration_With_CPP {
    public static void main(String args[])throws FileNotFoundException {
        File o=new File(args[0]);
        Scanner s = new Scanner(o);
        s.useRadix(2);
        System.out.println(s.nextLong());
    }
}
