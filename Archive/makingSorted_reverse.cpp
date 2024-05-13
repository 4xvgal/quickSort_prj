#include<iostream>
#include<fstream>

using namespace std;

int main(){
  //파일 출력 스트림 객체 생성
  ofstream out("bin/sorted_reverse.bin", ios::binary);

  //파일 열기에 실패하면
  if(!out){
    cout << "파일을 열 수 없습니다." << endl;
    return 1;
  }

  //반복문으로 백만까지 수를 파일에 저장 (역순)
  for(int i=1000000; i>=1; i--){
    out.write((char*)&i, sizeof(int));
  }
 
  //파일 닫기
  out.close();

   //샘플로 10개 출력
  //파일 읽기
  ifstream in("bin/sorted_reverse.bin", ios::binary);
  int num;
  for(int i=1000; i>=1; i--){
    in.read((char*)&num, sizeof(int));
    cout << num << " ";
  }

  //파일 닫기
  in.close();

  return 0;
}
