int calculateSquare(int num)
{
    //    Write your code here.
   
    if (num < 0)
    {
        num = -num; 
    }

    //    Base case.
    if (num == 0)
    {
        return 0;
    }

    //    Get floor(num/2) using right shift.

    //    If n is odd
    if (num & 1 == 1)
    {
        return ((calculateSquare(num>>1) << 2) + ((num>>1)<< 2) + 1);
    }
    //    If n is even.
    else
    {
        return (calculateSquare(num>>1) << 2);
    }
 
}