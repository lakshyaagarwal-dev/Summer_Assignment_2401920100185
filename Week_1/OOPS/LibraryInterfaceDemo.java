package Week_1.OOPS;
interface LibraryUser
{
    void registerAccount();
    void requestBook();
}
class KidUser implements LibraryUser
{
    int age;
    String bookType;
    public void registerAccount()
    {
        if(age<=12) 
            System.out.println("You have successfully registered under a Kids Account");
        else 
        {
            System.out.println("Sorry, Age must be less than or equal to 12 to register as a kid");
        }
    }
    public void requestBook()
    {
       if(bookType.equals("Kids"))
        {
            System.out.println("Book Issued successfully, please return the book within 10 days");
        }
        else{
            System.out.println("Oops, you are allowed to take only kids books");
        } 

    }
}
class AdultUser implements LibraryUser
{
    int age;
    String bookType;
    public void registerAccount()
    {
        if(age>12) 
            System.out.println("You have successfully registered under an Adult Account");
        else 
        {
            System.out.println("Sorry, Age must be greater than 12 to register as an Adult Account");
        }
    }
    public void requestBook()
    {
       if(bookType.equals("Fiction"))
        {
            System.out.println("Book Issued successfully, please return the book within 7 days");
        }
        else{
            System.out.println("Oops, you are allowed to take only Fiction books");
        } 

    }
}
public class LibraryInterfaceDemo {
    public static void main(String[] args) 
    {
        KidUser kid = new KidUser();
        AdultUser adult = new AdultUser();
        kid.age=10;
        kid.registerAccount();
        kid.age=18;
        kid.registerAccount();
        kid.bookType="Kids";
        kid.requestBook();
        kid.bookType="Fiction";
        kid.requestBook();

        adult.age=5;
        adult.registerAccount();
        adult.age=23;
        adult.registerAccount();
        adult.bookType="Kids";
        adult.requestBook();
        adult.bookType="Fiction";
        adult.requestBook();
    }
}