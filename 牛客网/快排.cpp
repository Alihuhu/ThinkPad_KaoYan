int Parition(int data[],int length,int start,int end){
	if(data==nullptr||length<=0||start<0||end>=length)
		throw new exception("Invalid parameters")
	int index=RandomInRange(start,end);
	Swap(&data[index],&data[index]);
	int small=start-1;
	for(index=start;index<end;++index)
	{
		if(data[index]<data[end])
		{
			++small;
			if(small!=index)
			Swap(&data[index],&data[index]);
		}
	}
	++small;
	Swap(&data[small],&data[end]);
	return small;
}
void QuickSort(int data[],int length,int start,int end)
{
	if(start==end)
		return ;
	int index=Partition(data,length,start,end);
	if(index>start)
	QuickSort(data,length,start,end);
	if(index<end)
	QuickSort(data,length,index+1,end);
}