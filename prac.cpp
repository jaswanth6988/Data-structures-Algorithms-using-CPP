#include<iostream>
#include<cmath>
#include<vector>
#include<string>
using namespace std;
//int main(){
//	int t;
//	int a,b;
//	long long c;
//	cin >>t;
//	while(t--){
//		cin>>a>>b;
//		c=pow(a,b);
//		cout<<c<<endl;	
//	}	
//}

//tower of hanoin no.of steps

//int main(){
//	int x;
//	int n;
//	cin>>n;
//	x=(2*n)-1;
//	cout<<x;
//}

//
//int main(){
//	int n;
//	cin>>n;
//	int a[n];
//	for(int i=0;i<n;i++){
//		cin>>a[i];
//	}
//	    
//    for(int i=0; i<n; i++)
//    {
//        for(int j=i+1; j<n; j++) 
//		{ if(a[i]>a[j])
//            {
//                int temp = a[i];
//                a[i] = a[j];
//                a[j] = temp;
//            }
//        }
//	}
//	bool odd = false;
//	
//	for (int i = 0; i < n; i++) {
//        if (a[i] % 2 != 0) {
//            odd = true;
//            cout<<a[i]<<" ";
//        }   
//    }
//    if(!odd){
//    	cout<<"None";
//	}
//}

//bubble sort ***
//
//int main(){
//	int n;
//	cin>>n;
//	int a[n];
//	for(int i=0;i<n;i++){
//		cin>>a[i];
//	}
//	for(int i=0;i<n;i++){
//		for(int j=i+1;j<n;j++){
//			if(a[j]>a[i]){
//				int temp = a[i];
//				a[i]=a[j];
//				a[j]=temp;
//			}
//		}
//	}
//	int k;
//	cin>>k;
//	cout<<a[n-k];
//}

//
//int main(){
//	int temp;
//	int k;
//	vector<int>arr;
//	while(cin>>temp){
//		arr.push_back(temp);
//	}
//	cin>>k;
//    if(k > 0 && k <= sizeof(arr)/sizeof(arr[0])) {
//        cout << "The " << k << "th element is: " << arr[k-1] << endl;
//    } else {
//        cout << "Invalid position" << endl;
//    }
//
//    return 0;
//}

// pre order traversel

//struct Node{
//	int data;
//	Node*left;
//	Node*right;
//};
//Node*creatNode(int data){
//	Node*newNode = new Node;
//	newNode->data = data;
//	newNode->left = newNode->right = NULL;
//	return newNode;
//}
//Node*insertNode(Node*root,int data){
//	if(root==NULL){
//		return creatNode(data);
//	}
//	if(data<root->data){
//		root->left=insertNode(root->left,data);
//	}else{
//		root->right=insertNode(root->right,data);
//	}
//	return root;
//}
//
//void preorder(Node*root){
//	if(root!=NULL){
//		cout<<root->data<<" ";
//		preorder(root->left);
//		preorder(root->right);
//	}
//}
//int main(){
//	Node*root = NULL;
//	int n;
//	int data;
//	cin>>n;
//	for(int i=0;i<n;i++){
//		cin>>data;
//		root=insertNode(root,data);
//	}
//	preorder(root);
//	return 0 ;
//}






//
//struct Node{
//	char data;
//	Node*left;
//	Node*right;
//};
//
//Node*createNode(char data){
//	Node*newNode= new Node;
//	newNode->data=data;
//	newNode->left=newNode->right=NULL;
//	return newNode;
//}
//
//Node*insertNode(Node*root,char data){
//	if(root==NULL){
//		return createNode(data);
//	}
//	if(data<root->data){
//		root->left=insertNode(root->left,data);
//	}else{
//		root->right=insertNode(root->right,data);
//	}
//	return root;
//}
//void preorder(Node*root){
//	if(root!=NULL){
//		cout<<root->data<<" ";
//		preorder(root->left);
//		preorder(root->right);
//	}
//}
//int main(){
//	Node*root=NULL;
//	char data;
//	int n;
//	cin>>n;
//	for(int i=0;i<n;i++){
//		cin>>data;
//		root=insertNode(root,data);
//	}
//	
//	preorder(root);
//	
//}

//
//struct Node{
//	int data;
//	Node*left;
//	Node*right;
//};
//
//Node*createNode(int data){
//	Node*newNode= new Node;
//	newNode->data = data;
//	newNode->left=newNode->right=NULL;
//	return newNode;
//}
//
//Node*insertNode(Node*root,int data){
//	if(root==NULL){
//		return createNode(data);
//	}
//	if(data<root->data){
//		root->left=insertNode(root->left,data);
//	}else{
//		root->right=insertNode(root->right,data);
//	}
//}
//
//void preorder(Node*root){
//	if(root!=NULL){
//	cout<<root->data<<" ";
//	preorder(root->left);
//	preorder(root->right);
//}
//}
//
//int main()
//{
//	Node*root=NULL;
//	int data;
//	int n;
//	cin>>n;
//	for(int i=0;i<n;i++){
//		cin>>data;
//		root=insertNode(root,data);
//	}
//	preorder(root);
//	
//	
//}

//
//struct Node{
//	int data;
//	Node*left;
//	Node*right;
//};
//
//Node*createNode(int data){
//	Node*newNode = new Node;
//	newNode->data=data;
//	newNode->left=newNode->right=NULL;
//}
//
//Node*insertNode(Node*root,int data){
//	if(root==NULL){
//		return createNode(data);
//	}
//	if(data<root->data){
//		root->left=insertNode(root->left,data);
//	}else{
//		root->right=insertNode(root->right,data);
//	}
//	return root;
//}
//
//void preorder(Node*root){
//if(root!=NULL){
//	
//	cout<<root->data<<" ";
//	preorder(root->left);
//	preorder(root->right);
//}
//}
//int main(){
//	Node*root=NULL;
//	int data;
//	int n;
//	cin>>n;
//	for(int i=0;i<n;i++){
//		cin>>data;
//		root=insertNode(root,data);
//	}
//	preorder(root);
//}
//
//
//struct Node{
//	int data;
//	Node*left;
//	Node*right;
//};
//
//Node*createNode(int data){
//	Node*newNode=new Node;
//	newNode->data=data;
//	newNode->left=newNode->right=NULL;
//	return newNode;
//	
//}
//
//Node*insertNode(Node*root,int data){
//	if(root==NULL){
//		return createNode(data);
//	}
//	if(data<root->data){
//		root->left=insertNode(root->left,data);
//	}else{
//		root->right=insertNode(root->right,data);
//	}
//	return root;
//}
//
//void preorder(Node*root){
//	if(root!=NULL){
//	
//
//	preorder(root->left);
//		
//	preorder(root->right);
//	cout<<root->data<<" ";
//}
//}
//
//int main(){
//	Node*root=NULL;
//	int data;
//	int n;
//	cin>>n;
//	for(int i=0;i<n;i++){
//		cin>>data;
//		root=insertNode(root,data);
//	}
//	preorder(root);
//}

//struct Node{
//	int data;
//	Node*left;
//	Node*right;
//};
//
//Node*createNode(int data){
//	Node*newNode = new Node;
//	newNode->data=data;
//	newNode->left=newNode->right=NULL;
//	return newNode;	
//}
//
//Node*insertNode(Node*root,int data){
//	if(root==NULL){
//		return createNode(data);
//	}
//	if(data<root->data){
//		root->left=insertNode(root->left,data);
//		
//	}else{
//		root->right=insertNode(root->right,data);
//	}
//	return root;
//}
//
//void preorder(Node*root){
//	if(root!=NULL){
//	
//	cout<<root->data<<" ";
//	preorder(root->left);
//	preorder(root->right);
//	}
//}
//
//int main(){
//	Node*root=NULL;
//	int n;
//	int data;
//	cin>>n;
//	for(int i=0;i<n;i++){
//		cin>>data;
//		root=insertNode(root,data);
//	}
//	preorder(root);
//}
//
//

//class MinHeap {
//private:
//    std::vector<int> heap;
//
//    // Helper functions
//    void heapifyUp(int index) {
//        int parent = (index - 1) / 2;
//        while (index > 0 && heap[index] < heap[parent]) {
//            std::swap(heap[index], heap[parent]);
//            index = parent;
//            parent = (index - 1) / 2;
//        }
//    }
//
//    void heapifyDown(int index) {
//        int leftChild = 2 * index + 1;
//        int rightChild = 2 * index + 2;
//        int smallest = index;
//
//        if (leftChild < heap.size() && heap[leftChild] < heap[smallest]) {
//            smallest = leftChild;
//        }
//        if (rightChild < heap.size() && heap[rightChild] < heap[smallest]) {
//            smallest = rightChild;
//        }
//
//        if (smallest != index) {
//            std::swap(heap[index], heap[smallest]);
//            heapifyDown(smallest);
//        }
//    }
//
//public:
//    MinHeap() {}
//
//    void insert(int value) {
//        heap.push_back(value);
//        int index = heap.size() - 1;
//        heapifyUp(index);
//    }
//
//    int extractMin() {
//        if (heap.empty()) {
//            std::cerr << "Heap is empty." << std::endl;
//            return -1; // or throw an exception
//        }
//
//        int min = heap[0];
//        heap[0] = heap.back();
//        heap.pop_back();
//        heapifyDown(0);
//
//        return min;
//    }
//
//    bool isEmpty() {
//        return heap.empty();
//    }
//};
//
//int main() {
//    MinHeap minHeap;
//    
//    minHeap.insert(10);
//    minHeap.insert(7);
//    minHeap.insert(15);
//    minHeap.insert(20);
//    minHeap.insert(5);
//
//    while (!minHeap.isEmpty()) {
//        std::cout << minHeap.extractMin() << " ";
//    }
//
//    return 0;
//}
//


//
//void swap(int a[],int n){
//	for(int i=0;i<n;i++){
//		for(int j=i+1;j<n;j++){
//			if(a[i]>a[j]){
//				int temp = a[i];
//				a[i]=a[j];
//				a[j]=temp;
//			}
//		}
//	}
//}
//void insertion(int a[],int n,int value,int k){
//	for(int i=n;i>k;i--){
//		a[i]=a[i-1];
//	}
//	a[k]=value;
//	n++;
//}
//int main(){
//	int n;
//	int k,value;
//	cin>>n;
//	int a[n];
//	for(int i=0;i<n;i++){
//		cin>>a[i];
//	}
//	cin>>k;
//	cin>>value;
//	
//	insertion(a,n,value,k);
//	for(int i=0;i<=n;i++){
//		cout<<a[i]<<" ";
//	}
//		cout<<endl;
//	swap(a,n);	
//	for(int i=0;i<n;i++){
//		cout<<a[i]<<" ";
//	}
//}
//



//
//
//
//
//void swap(int a[],int n){
//	for(int i=0;i<n;i++){
//		for(int j=i+1;j<n;j++){
//			if(a[i]>a[j]){
//				int temp = a[i];
//				a[i]=a[j];
//				a[j]=temp;
//			}
//		}
//	}
//}
//
//void deleteElement(int a[],int &n,int k){
//	for(int i=k;i<n-1;i++){
//		a[i]=a[i+1];
//	}
//	n--;
//}
//
//int main(){
//	int n;
//	int k;
//	cin>>n;
//	int a[n];
//	for(int i=0;i<n;i++){
//		cin>>a[i];
//	}
//	cin>>k;
//	swap(a,n);
//
//	for(int i=0;i<n;i++){
//		cout<<a[i]<<" ";
//	}
//	cout<<endl;
//	deleteElement(a,n,k);
//	for(int i=0;i<n;i++){
//		cout<<a[i]<<" ";
//	}
//	return 0;
//}





//
//struct Node{
//	int data;
//	Node*left;
//	Node*right;
//};
//
//Node*createNode(int data){
//	Node*newNode = new Node;
//	newNode->data=data;
//	newNode->left=newNode->right=NULL;
//	return newNode;
//	
//}
//
//Node*insertNode(Node*root,int data){
//	if(root==NULL){
//		return createNode(data);
//	}
//	if(data<root->data){
//		root->left=insertNode(root->left,data);
//	}else{
//		root->right=insertNode(root->right,data);
//	}
//	return root;
//}
//
//void preorder(Node*root){
//	if(root!=NULL){
//		cout<<root->data<<" ";
//		preorder(root->left);
//		preorder(root->right);
//	}
//}
//
//int main(){
//	Node*root=NULL;
//	int n;
//	cin>>n;
//	int data;
//	for(int i=0;i<n;i++){
//		cin>>data;
//		root=insertNode(root,data);
//	}
//	preorder(root);
//}
//
//
//
//
//int main() {
//    vector<int> elements; 
//    int input;
//    cout << "Enter elements (negative to end input):" << endl;
//    while (true) {
//        cin >> input;
//        if (input < 0) {
//            break; 
//        }
//        elements.push_back(input); 
//    }
//    if (elements.empty()) {
//        cout << "No elements entered." << endl;
//    } else {
//        int sum = 0;
//        for (size_t i = 0; i < elements.size(); ++i) {
//            sum += elements[i];
//        }
//        cout << "Sum of elements: " << sum << endl;
//    }
//    return 0;
//}


//
////to fint nth element using array in bst;
//
//int main() {
//    vector<int> elements; 
//    int input;
//    cout << "Enter elements (negative to end input):" << endl;
//    while (true) {
//        cin >> input;
//        if (input <= 0) {
//            break; 
//        }
//        elements.push_back(input); 
//    }
//    if (elements.empty()) {
//        cout << "No elements entered." << endl;
//    } else {
//    	int k;
//    	cin>>k;
//        if(k>=0&&k<elements.size()){
//        	
//        	cout<<elements[k];
//		}else{
//			cout<<"not in bst";
//		}
//			
//        }
//
//    return 0;
//}


//to fint nth element using array in bst;
//
//int main() {
//    vector<int> elements; 
//    int input;
//    cout << "Enter elements (negative to end input):" << endl;
//    while (true) {
//        cin >> input;
//        if (input <= 0) {
//            break; 
//        }
//        elements.push_back(input); 
//    }
//    bool found = false;
//    if (elements.empty()) {
//        cout << "No elements entered." << endl;
//    } else {
//    	int k;
//    	cin>>k;
//        for(int i=0;i<elements.size();i++){
//        	if(k==elements[i]){
//        		cout<<i;
//        	    found = true;
//        	    break;
//			}			
//		}
//			
//    }
//
//    return 0;
//}

//bst using preorder traversel of only odd numbers
//struct Node{
//	int data;
//	Node*left;
//	Node*right;
//};
//
//Node*createNode(int data){
//	Node*newNode=new Node;
//	newNode->data=data;
//	newNode->left=newNode->right=NULL;
//	return newNode;
//}
//
//Node*insertNode(Node*root,int data){
//	if(root==NULL){
//		return createNode(data);
//	}
//	if(data<root->data){
//		root->left=insertNode(root->left,data);
//	}else{
//		root->right=insertNode(root->right,data);
//	}
//	return root;
//}
//
//void oddpreorder(Node*root,int depth){
//	if(root==NULL){
//		return ;
//	}
//	if(depth%2!=0){
//		cout<<root->data<<" ";
//	}
//	oddpreorder(root->left,depth+1);
//	oddpreorder(root->right,depth+1);
//}
//int main(){
//	Node*root=NULL;
//	int n;
//	int data;
//	cin>>n;
//	for(int i=0;i<n;i++){
//		cin>>data;
//		root=insertNode(root,data);
//	}
//	oddpreorder(root,1);
//}

//void mac(int *a,int n,m,)

//int main(){
//	int n;
//	cin>>n;
//	string a[n];
//	for(int i=0;i<n;i++){
//		cin>>a[i];
//	}
//	for(int i=0; i<n; i++){
//     for(int j=i+1; j<n; j++) 
//		{ if(a[i]>a[j])
//            {
//                string temp = a[i];
//                a[i] = a[j];
//                a[j] = temp;
//            }
//        }
//}
//
//cout<<a[0];
//}











































