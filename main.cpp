#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
  int data[5][3] = {{5,2,3},{4,4,4},{2,2,4},{2,3,5},{3,4,2}};
  cout<<"Alternatif:"<<endl;
  for(int i=0;i<5;i++) {
      for(int j=0;j<3;j++) {
          cout<<data[i][j]<<" ";
      }
      cout<<endl;
  }
  
  double bobot[3] = {3,3,4};
  cout<<"\nBobot:"<<endl;
  for(int i=0;i<3;i++) {
      cout<<bobot[i]<<" "<<endl;
  }
  
  //Sigma Bobot
  int sum = 0;
  cout<<"\nSigma Bobot:";
  for(int i=0;i<3;i++) {
      sum += bobot[i];
  } cout<<"\n"<<sum<<endl;
  
  //Normalisasi Bobot
  vector<double> vec;
  cout<<"\nNormalisasi Bobot:"<<endl;
  for(int i=0;i<3;i++) {
      //double norm_bobot = bobot[i]/sum;
      vec.push_back(bobot[i]/sum);
      cout<<vec[i]<<endl;
  }
  
  //Menghitung Nilai Vektor S
  double s1 = (pow(data[0][0], -vec[0]))*(pow(data[0][1], vec[1]))*(pow(data[0][2], vec[2]));
  double s2 = (pow(data[1][0], -vec[0]))*(pow(data[1][1], vec[1]))*(pow(data[1][2], vec[2]));
  double s3 = (pow(data[2][0], -vec[0]))*(pow(data[2][1], vec[1]))*(pow(data[2][2], vec[2]));
  double s4 = (pow(data[3][0], -vec[0]))*(pow(data[3][1], vec[1]))*(pow(data[3][2], vec[2]));
  double s5 = (pow(data[4][0], -vec[0]))*(pow(data[4][1], vec[1]))*(pow(data[4][2], vec[2]));
  
  
  //Menghitung Nilai Vektor V
  double sigma_s = s1+s2+s3+s4+s5;
  
  double v1 = s1/sigma_s;
  double v2 = s2/sigma_s;
  double v3 = s3/sigma_s;
  double v4 = s4/sigma_s;
  double v5 = s5/sigma_s;
  
  vector<double> lst;
  lst.push_back(v1);
  lst.push_back(v2);
  lst.push_back(v3);
  lst.push_back(v4);
  lst.push_back(v5);
  
  //Tampilkan Hasil Akhir
  cout<<"\nTampilkan Hasil:"<<endl;
  for(int i=0;i<5;i++) {
      cout<<"Alternatif["<<i+1<<"]="<<lst[i]<<endl;
  }
}
