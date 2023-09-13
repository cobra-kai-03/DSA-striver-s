vector<vector<int>> mergeOverlappingIntervals(vector<vector<int>> &arr){
	// Write your code here.
	vector<vector<int>>ans;
	sort(arr.begin(),arr.end());
	ans.push_back(arr[0]);
	int k=0;
	for(int i=1;i<arr.size();i++)
	{
		if(ans[k][1]>=arr[i][0] && ans[k][1]<=arr[i][1])
		{
			ans[k][1]=arr[i][1];
		}
		else if (ans[k][0]<=arr[i][0] && ans[k][1]>=arr[i][1])
		{
			continue;
			cout<<"Continue: "<<arr[i][0]<<endl;
		}
		else{
			ans.push_back(arr[i]);
			k++;
		}
	}
	return ans;
	
}
