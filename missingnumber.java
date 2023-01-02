class missingnumber{

	//program to get missing number using xor operator
	public static void main(String[] args)
	{
		int arr[]={2,3,4,5,6,7};
		int n=arr.length;
		
		int r1=0;
		for(int i=0;i<n;i++){
				r1=r1^arr[i];
		}
		for(int i=1;i<=n+1;i++){       
			r1=r1^i;
		}
		System.out.println("Missing "+r1);
	}
}