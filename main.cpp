#include <iostream>

using namespace std;
class kisi{
	private:
		string ad;
		string soyad;
		int maas;
		public:
			kisi(string ad, string soyad,int maas){
				this->ad=ad;
				this->soyad=soyad;
				this->maas=maas;
			}
			friend void yazdir(kisi a);
		
};
	void yazdir(kisi a){
				cout<<a.ad<<" "<<a.soyad<<" "<<a.maas<<endl;
			}

int main(int argc, char** argv) {
	kisi k("ibrahim","berk",4000);
	yazdir(k);
	
	
	
	return 0;
}
