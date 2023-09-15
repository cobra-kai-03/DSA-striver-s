vector<int> majorityElement(vector<int> v) {
	// Write your code here
	int c1=0,c2=0;
	int el1=-10000000000;
	int el2=-10000000000;
	if(v.size()==1)
	{
		return v;
	}
	for(int i=0;i<v.size();i++)
	{
		if(c1==0 && el2!=v[i])
		{
			el1=v[i];
			c1++;
		}
		else if(el1==v[i]) c1++;
		else if(el1!=v[i] && c2==0)
		{
			//c1--;
			el2=v[i];
			c2++;
		}
		else if (el2==v[i]) c2++;
		else{
			c1--;
			c2--;
		}
	}
	c1=0,c2=0;
	for(int i=0;i<v.size();i++)
	{
		if(v[i]==el1)
		{
			c1++;
		}
		if(v[i]==el2)
		{
			c2++;
		}
	}
	int mini=v.size()/3;
	vector<int> res;
	if(c1>mini) res.push_back(el1);
	if(c2>mini) res.push_back(el2);
	return res;
}
