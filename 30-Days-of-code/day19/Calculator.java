
class Calculator implements AdvancedArithmetic {

  public int divisorSum(int n)
  {

    int divisorSum = 0;
    int startN = n;
    while(n > 0){
      int rest = startN % n;
      if(rest == 0){
        divisorSum += n;
      }
      n--;
    }

    return divisorSum;
  }
}
