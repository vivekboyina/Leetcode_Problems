class Solution {
public:
    string addBinary(string a, string b) {
        reverse(a.begin(),a.end());
        reverse(b.begin(),b.end());
        string ans = "";
        if(a.size() == b.size())
        {
            int c = 0;
            for(int i = 0; i < b.size(); i++)
            {
                int j = a[i] - '0',k = b[i] - '0';
                if((j^k) == 0)
                {
                    if(j == 0)
                    {
                        if(c == 1)
                        {
                            c = 0;
                            ans+='1';
                        }
                        else ans+='0';
                    }
                    else
                    {
                        if(c == 1)
                        {
                            c = 1;
                            ans+='1';
                        }
                        else
                        {
                            ans+='0';
                            c = 1;
                        }
                    }
                }
                else if((j^k) == 1)
                {
                    if(c == 1)
                    {
                        c = 1;
                        ans+='0';
                    }
                    else ans+='1';
                }
            }
            if(c == 1) ans+='1';
        }
        else if(a.size() > b.size())
        {
            int c = 0;
            for(int i = 0; i < a.size(); i++)
            {
                int k,j = a[i] - '0';
                if(i >= b.size()) k = 0;
                else k = b[i] - '0';
                if((j^k) == 0)
                {
                    if(j == 0)
                    {
                        if(c == 1)
                        {
                            c = 0;
                            ans+='1';
                        }
                        else ans+='0';
                    }
                    else
                    {
                        if(c == 1)
                        {
                            c = 1;
                            ans+='1';
                        }
                        else
                        {
                            ans+='0';
                            c = 1;
                        }
                    }
                }
                else if((j^k) == 1)
                {
                    if(c == 1)
                    {
                        c = 1;
                        ans+='0';
                    }
                    else ans+='1';
                }
            }
            if(c == 1) ans+='1';
        }
        else if(a.size() < b.size())
        {
            int c = 0;
            for(int i = 0; i < b.size(); i++)
            {
                int k,j = b[i] - '0';
                if(i >= a.size()) k = 0;
                else k = a[i] - '0';
                if((j^k) == 0)
                {
                    if(j == 0)
                    {
                        if(c == 1)
                        {
                            c = 0;
                            ans+='1';
                        }
                        else ans+='0';
                    }
                    else
                    {
                        if(c == 1)
                        {
                            c = 1;
                            ans+='1';
                        }
                        else
                        {
                            ans+='0';
                            c = 1;
                        }
                    }
                }
                else if((j^k) == 1)
                {
                    if(c == 1)
                    {
                        c = 1;
                        ans+='0';
                    }
                    else ans+='1';
                }
            }
            if(c == 1) ans+='1';
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};