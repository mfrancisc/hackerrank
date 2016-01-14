
Difference (int[] a)
{
  elements = a;
}

public void computeDifference()
{
  int lower = 100;
  int bigger = 0;
  for( int x = 0; x < elements.length; x++)
  {
    if(elements[x] <= lower)
    {
      lower = elements[x];
    }
    if(elements[x] >= bigger)
    {
      bigger = elements[x];
    }
  }

  maximumDifference = bigger - lower;
}
