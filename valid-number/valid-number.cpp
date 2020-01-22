class Solution {
public:
    bool isNumber(string s) {
        int i = 0;
        int numberOfE = 0; //number of exponent e
        int numberOfP = 0; //number of decimal points
        bool isthereNumber = false;
        bool blankAtTheBeg = true, blankAtTheEnd = false;
        if (s[i]==' ')
            i++;
        else if ((s[i] >= 48 && s[i] <= 57))
        {
            isthereNumber = true;
            i++;
            blankAtTheBeg = false;
            blankAtTheEnd = true;
        }
        else if(s[i] == '+' || s[i] == '-' || s[i]=='.')
        {
            if(s[i]=='.')
            {
                if(i==s.length()-1 || s[i+1]=='e')
                    return false;
                numberOfP++;
            }
            i++;
            blankAtTheBeg = false;
            blankAtTheEnd = true;
        }
        else
            return false;
        
        while(i!=s.length() && numberOfE!=2 && numberOfP != 2)
        {
            if (s[i]!=' ')
            {
                blankAtTheBeg = false;
                if(isthereNumber ||(s[i] >= 48 && s[i] <= 57)
                  || (s[i]=='-')|| (s[i]=='+'))
                    blankAtTheEnd = true;
            }
            if (s[i]==' ' && blankAtTheBeg);
            else if (s[i]==' ' && blankAtTheEnd)
            {
                if(s[i-1]=='e')
                    return false;
                while(i!=s.length())
                {
                    if(s[i] != ' ')
                        return false;
                    i++;
                }
                if(isthereNumber)
                    return true;
                else
                    return false;
            }
            else if (s[i]==' ' && !blankAtTheEnd && !blankAtTheBeg)
                return false;
            else if (s[i] >= 48 && s[i] <= 57)
                isthereNumber = true;
            else if(s[i]=='e')
            {
                if(s[i-1]==' ' || s[i-1]=='-' || s[i-1]=='+')
                    return false;
                numberOfE++;
                if(numberOfP==0)
                    numberOfP++; //because we cannot use . after e
            }
            else if(s[i]=='.')
                numberOfP++;
            else if(s[i] == '+' || s[i] == '-')
            {
                if((s[i-1] !='e' && s[i-1] !=' ') || (i==s.length()-1)
                   || !((s[i+1] >= 48 && s[i+1] <= 57) || s[i+1]=='.'))
                    return false;
            }
            else
                return false;
            i++;
        }
        if(i==s.length() && isthereNumber && s[i-1] != 'e'
          && numberOfE!=2 && numberOfP != 2)
            return true;
        else
            return false;
    }
};
