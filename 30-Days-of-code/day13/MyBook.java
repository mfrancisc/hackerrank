//Write MyBook Class
class MyBook extends Book
{
  String title;
  String author;
  int price;
  MyBook(String title, String author, int price)
  {
    super(title, author);
    this.title = title;
    this.author = author;
    this.price = price;
  }

  public void display()
  {
    System.out.println("Title: " + this.title);
    System.out.println("Author: " + this.author);
    System.out.println("Price: " + this.price);
  }
}
