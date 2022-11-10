#include<bits/stdc++.h>

using namespace std;

class dayso{
	private:
		int size;
		float *phantu = new float;
	public: 
		dayso()
		{
			size = 0;
		}
		void In(){
			for(int i=0; i<size; i++) cout <<phantu[i] << " ";
			cout <<"\n";
		}
		void Them(float x){
			phantu[size] = x;
			size++;
		}
		int TimKiem(float x){
			for(int i=0; i<size; i++){
				if(phantu[i]==x) return i;
			}
			return size;
		}
		void Xoa(float x){
			if(TimKiem(x)<size)
			{
				for(int i=TimKiem(x); i<size-1; i++) 
				{
					phantu[i]=phantu[i+1];
				}
				size--;
			}
		}
		~dayso(){
			delete[] phantu;
		}		
};

int main(){
	dayso a;
	a.In();
	a.Them(4);
	a.Them(5);
	a.Them(6);
	a.Them(7);
	a.In();
	a.Xoa(4);
	a.Xoa(9);
	a.In();
}
	
