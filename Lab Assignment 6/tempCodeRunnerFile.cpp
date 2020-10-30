	strng obj1,obj2;
	obj1.get();
	obj2.get();
	if((obj1==obj2)==0)
	cout<<endl<<"They are Equal";
	else
	cout<<endl<<"They are not Equal";
	strng sum;
	sum=obj1+obj2;
	cout<<endl<<"String after concatination: ";
	sum.display();
	return 1;