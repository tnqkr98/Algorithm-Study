//#include <iostream>
//#include <sstream>
//#define MIN(a,b) (((a)>(b))?(b):(a))
//using namespace std;
//
//void solution(int day, int width, int **blocks) {
//  int height[101]={0};
//	int cnt=0;
//	for(int i=0;i<day;i++){
//		for(int j=0;j<width;j++)
//			height[j] += blocks[i][j];
//		
//		for(int j=0;j<width;j++){
//			int s=j+1, e=0;
//			for(int k=j+1;k<width;k++){
//				if(height[k] < height[j])
//					continue;
//				else{
//					e = k;
//					break;
//				}
//			}
//			for(int k=s;k<e;k++){
//				cnt+=(height[j]-height[k]);
//				height[k] = height[j];
//			}
//		}
//			
//	}
//	cout<<cnt;
//}
//
//struct input_data {
//  int day;
//  int width;
//  int **blocks;
//};
//
//void process_stdin(struct input_data& inputData) {
//  string line;
//  istringstream iss;
//
//  getline(cin, line);
//  iss.str(line);
//  iss >> inputData.day;
//
//  getline(cin, line);
//  iss.clear();
//  iss.str(line);
//  iss >> inputData.width;
//
//  inputData.blocks = new int*[inputData.day];
//  for (int i = 0; i < inputData.day; i++) {
//    getline(cin, line);
//    iss.clear();
//    iss.str(line);
//    inputData.blocks[i] = new int[inputData.width];
//    for (int j = 0; j < inputData.width; j++) {
//      iss >> inputData.blocks[i][j];
//    }
//  }
//}
//
//int main() {
//	struct input_data inputData;
//	process_stdin(inputData);
//
//	solution(inputData.day, inputData.width, inputData.blocks);
//	return 0;
//}