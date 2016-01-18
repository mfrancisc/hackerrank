class Palindrome {
  LinkedList<Character> queue = new LinkedList<Character>();
  Stack<Character> st = new Stack<Character>();

  public void pushCharacter(char ch){
    st.push(ch);    
  }

  public void enqueueCharacter(char ch)
  {
    queue.addLast(ch);
  }

  public char popCharacter()
  {
    return (char) st.pop(); 
  }

  public char dequeueCharacter() 
  {
    return (char)queue.remove(0);
  }


}
