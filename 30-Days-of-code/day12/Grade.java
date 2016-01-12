class Grade extends Student{
  private int score;
  Grade(String firstName,String lastName,int phone,int score)
  {
    super(firstName, lastName, phone);
    this.score = score;
  }

  public int getScore()
  {
    return this.score;
  }

  public String calculate()
  {

    if(getScore() < 40) return "D";

    if( 40 <= getScore() && getScore() <60) return "B";

    if( 60 <= getScore() && getScore() <75) return "A";

    if( 75 <= getScore() && getScore() <90) return "E";

    if( 90 <= getScore() && getScore() <= 100) return "O";

    return "";
  }
}
