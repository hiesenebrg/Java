public class temperature_sequence 
    {
    public void printFahrenheitTable(int start, int end, int step)
    {
    int C ; 
    for (int i = start; i <= end; i = i+step) 
    {
        C= (((i-32)*5)/9);   
        System.out.println(i+"\t"+C); 
    }    
    }
}
