#include<memory>
#include<iostream>

/*
智慧指標  自動釋放

unique_ptr<>();
make_unique<>();

shared_ptr<>();
make_shared<>();
weak_ptr<>();
make_weak<>();



*/



class Ptr {  // 實作智慧型指標的類別
	int* ptr;
public:
	explicit Ptr(int* p = NULL) { ptr = p; }  // 將指標儲存起來
	~Ptr() { delete(ptr); }  // 回收記憶體
	int& operator *() { return *ptr; }  // 多載化 * 運算子
};

int main() {









	return 0;
}