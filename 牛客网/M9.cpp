Class Solution
{
public:
	void push(int node){
		stack1.push(node);
	}
	int pop(){
		if(stack2.size()<=0)
		{
			while(stack1.size()>0)
			{
				int data=stack1.top();
				stack1.pop();
				stack2.push(data);
			}
		}
		int head=stack2.top();
		stack2.pop();
		return head;
	}
private:
	stack<int> stack1;
	stack<int> stack2;
}