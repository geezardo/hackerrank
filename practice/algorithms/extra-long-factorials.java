import java.io.*;
import java.math.*;
import java.util.*;

public class Solution {
  private static final Scanner scanner = new Scanner(System.in);

  public static void main(String[] args) {
    int n = scanner.nextInt();
    scanner.skip("(\r\n|[\n\r\u2028\u2029\u0085])?");

    BigInteger ans = new BigInteger("1");
    for (int i = 2; i <= n; i++)
      ans = ans.multiply(BigInteger.valueOf(i));

    System.out.println(ans);

    scanner.close();
  }
}

