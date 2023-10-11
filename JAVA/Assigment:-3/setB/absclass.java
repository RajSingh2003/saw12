import java.util.Scanner;
abstract class order
{
	int id;
	String desp;
	order(int id,String desp)
	{
		this.id=id;
		this.desp=desp;
	}
	abstract void display();
}
class purchesorder extends order
{
    String cname;
    purchesorder(int id,String desp,String cname)
    {
                super(id,desp);
		this.cname=cname;
	}	
	
    void display()
    {
		System.out.println("-----DETAIL FOR PURCHESORDER-----");
                System.out.println("ID ="+id);
		System.out.println("DESCRIPTION ="+desp);
		System.out.println("COSTOMER NAME ="+cname);
		System.out.println();
    }		
	
}
class salesorder extends order
{
    String vname;
    salesorder(int id,String desp,String vname)
    {
              super(id,desp);
		this.vname=vname;
    }	
    void display()
    {
		System.out.println("-----DETAIL FOR SALESORDER-----");
                System.out.println("ID ="+id);
		System.out.println("DESCRIPTION ="+desp);
		System.out.println("VANDOR NAME ="+vname);
		System.out.println();
    }		
	
}
public class absclass
{
	public static void main(String[] args)
	{
		int i;
		Scanner s=new Scanner(System.in);
		purchesorder []pur=new purchesorder[3];
		salesorder []sal=new salesorder[3];
		for(i=0;i<3;i++)
	        {
                        System.out.println("Enter the Detail for purches oreder : "+(i+1));
			System.out.print("Enter id : ");
			int id=s.nextInt();
			System.out.print("Enter description : ");
			String desp=s.next();
			System.out.print("Enter name : ");
			String cname=s.next();
                        pur[i]=new purchesorder(id,desp,cname);
                        System.out.println();
		}	
                for(i=0;i<3;i++)
	        {
                        System.out.println("\nEnter the Detail for Sales oreder : "+(i+1));
			System.out.print("Enter id : ");
			int id=s.nextInt();
			System.out.print("Enter description : ");
			String desp=s.next();
			System.out.print("Enter name : ");
			String vname=s.next();
                        sal[i]=new salesorder(id,desp,vname);
	       }	
                for(i=0;i<3;i++)	
		{
			//System.out.println("Detail");
			pur[i].display();
			sal[i].display();		
		}
		
	}
}
/*
//Q 2::

// Marker interface
interface Countable {
}

// Product class
class Product implements Countable {
    private int productId;
    private String productName;
    private double productCost;
    private int productQuantity;
    private static int objectCount = 0; // Static variable to track object count

    // Default constructor
    public Product() {
        objectCount++; 
    }

    // Parameterized constructor
    public Product(int productId, String productName, double productCost, int productQuantity) {
        this.productId = productId;
        this.productName = productName;
        this.productCost = productCost;
        this.productQuantity = productQuantity;
        objectCount++; // Increment object count when an object is created
    }

    // Method to display product details
    public void displayProduct() {
        System.out.println("Product ID: " + productId);
        System.out.println("Product Name: " + productName);
        System.out.println("Product Cost: $" + productCost);
        System.out.println("Product Quantity: " + productQuantity);
        System.out.println();
    }

    // Static method to display object count
    public static void displayObjectCount() {
        System.out.println("Total number of products created: " + objectCount);
    }
}

public class markinter {
    public static void main(String[] args) {
        // Create objects of class Product
        Product product1 = new Product(1, "Laptop", 999.99, 5);
        Product product2 = new Product(2, "Smartphone", 599.99, 10);
        Product product3 = new Product(3, "Headphones", 49.99, 20);

        // Display the contents of each object
        product1.displayProduct();
        product2.displayProduct();
        product3.displayProduct();

        // Display the object count
        Product.displayObjectCount();
    }
}
*/

/*import java.util.Scanner;
abstract class order
{
     int id;
     String descp;
     public order(int id,String descp)
     {
           this.id=id;
           this.descp=descp;
     }
    abstract void input();
    abstract void display();
    
}
class purchesorder extends order
{
      String cname;
      purchesorder(int id,String descp,String cname)
      {
           super(id,name);
           this.cname=cname;
      }
      public void input()
      {
         Scanner s= new Scanner(System.in);
         System.out.println("Enter ID: ");
         int id=s.nextInt();
         System.out.println("Enter Description : ");
         String Descp=s.nextInt();
      }
     
}
class salesorder extends order
{
      String vname;
      salesorder(int id,String descp,String vname)
      {
           super(id,name);
           this.vname=svname;
      }
      
}
class absclass
{
     public static void main(String[] args)
     {
          Scanner s=new Scanner(System.in);
          System.out.println("Enter The number of officestaff member : ");
          int n=s.nextInt();
          officestaff []a=new officestaff[n];
          
          for(int i=0;i<n;i++)
          {
             System.out.println("Enter The number of Staff : "+(i+1));
          
             System.out.println("Enter Id : ");
             int id=s.nextInt();
             
             System.out.println("Enter Name : ");
             String name=s.next();
             
             System.out.println("Enter Department: ");
             String dept=s.next();
             
             a[i]=new officestaff(id,name,dept);
          }
          for(int i=0;i<n;i++)
          {
              System.out.println("OFFICESTAFF DETAILS : ");
              a[i].display();
              System.out.println();
          }
            
     }
}

*/



















