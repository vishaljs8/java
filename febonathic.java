import java.util.Scanner;
public class febonathic {
public static int febo(int n)
{
if(n==0)
return 0;
else
System.out.println(n);

return febo(n+n);



}

public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    int num= sc.nextInt(); 
    febo(num);

}}