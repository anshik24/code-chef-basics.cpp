using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y;
	    cin>>x>>y;
	    if(x>y)
	    cout<<x-y<<endl;
	    else if(y>x)
	    cout<<"0"<<endl;
	    else
	    cout<<x-y<<endl;
	}
	return 0;
}
