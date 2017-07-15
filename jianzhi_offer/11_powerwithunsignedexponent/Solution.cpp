double power_with_unsigned_exponent(double base, unsighed int exponent)
{
    if(exponent == 0)
    {
        return 1;
    }
    if(exponent == 1)
    {
        return base;
    }
    double result;
    result = power_with_unsigned_exponent(base, exponent>>1);
    result *= result;
    if(result & 0x1 ==1)
        result *= base;
    return result;

}

