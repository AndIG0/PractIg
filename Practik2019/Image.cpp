#include <iostream>
using namespace std;

class Image{

	int mx;
	int my;
	int * img;


public:

	Image(int tmx, int tmy){ 

		mx = tmx;
		my = tmy;

		int mas[tmx*tmy] = {0};

		img = mas;


		for(int i = 0;i<=tmx*tmy;++i){

			img[i] =0;

		}




	}

  void 	setPoint(int x,int y, int color){

		img[mx*y+x] = color;

	}

  int getPoint(int x, int y){


	  return img[mx*y+x];

  }

  void showPoint(int x, int y){

	  cout << getPoint(x,y) << " ";

  }

  void showALL(){

	  for(int i =0 ; i<mx*my;++i){


		  cout << img[(i/16)+(i%16)] << " ";


		  if(i%16 == 15)cout << endl;
	  }




  }



};

int main() {




	Image i1(9,12);

	i1.setPoint(1,0,255);
	int c1 = i1.getPoint(1,0);


	cout << c1 << endl;

	i1.setPoint(1,0,255);
	int c2 = i1.getPoint(1,0);
	cout << c2 << endl;


	//i1.setPoint(1,1,254);
	i1.showPoint(1,1);

	cout << endl;





}
