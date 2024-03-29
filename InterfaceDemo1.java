class InterfaceDemo1
{
  public static void main(String args[])
  {
    PPA pobj = new PPA();
    System.out.println("Value of PI is : "+Circle.PI);
   // Circle.PI = 6.15;
    float fRet = 0.0f;
    fRet = pobj.Area(10.7f);
    System.out.println("Area is : "+fRet);
    fRet = pobj.Circumfarance(10.7f);
    System.out.println("Circumfarance is :"+fRet);
  }

}

interface Circle           // All the methods are by default public and abstracted
{
    float PI = 3.14f;

    public float Area(float Radius); 
    public float Circumfarance(float Radius);
}

class PPA implements Circle
{
    public float Area(float Radius)
    {
        return PI * Radius * Radius;
    }
    public float Circumfarance(float Radius)
    {
        return 2 * PI * Radius;
    }
}