string isSubset(int a1[], int a2[], int n, int m) 
{
    bool isSubset=false;
    int counter=0;
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            
            if(a1[i]==a2[j])
            {
                counter++;
                break;
            }
        }
    }
    
    if(counter == m)
    {
        isSubset = true;
    }
    
    if(isSubset == true)
    {
        return "Yes";
    }
    else
    {
        return "No";
    }
    
}