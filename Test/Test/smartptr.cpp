#include<memory>
#include<iostream>

/*
�ǻ�ָ��  �Ԅ�ጷ�

unique_ptr<>();
make_unique<>();

shared_ptr<>();
make_shared<>();
weak_ptr<>();
make_weak<>();



*/



class Ptr {  // �����ǻ���ָ�˵�e
	int* ptr;
public:
	explicit Ptr(int* p = NULL) { ptr = p; }  // ��ָ�˃�������
	~Ptr() { delete(ptr); }  // ����ӛ���w
	int& operator *() { return *ptr; }  // ���d�� * �\����
};

int main() {









	return 0;
}