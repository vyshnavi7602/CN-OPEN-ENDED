import java.net.InetAddress;

public class IP
{
  public static void main(String args[]) throws Exception
  {
    InetAddress adr = InetAddress.getLocalHost();
    System.out.println("Local HostAddress: " + adr.getHostAddress());
    Strin hostname = adr.getHostName();
    System.out.println("Local host name: " + hostname);
  }
}
