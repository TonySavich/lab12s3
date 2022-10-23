#include <iostream>
#include <vector>








void main() {
	const int N = 32;
	int mas[N];
	//std::vector<int> A;
	//std::vector<int> B;

	int s = 2;


	for (int i = 0; i < N; i++) {
		mas[i] = rand() % 100;
	}



	int ch = 0;
	int yyy = N;


	for (int i = 0; i < N; i++) {
		std::cout << mas[i] << " ";
	}


	while (s <= N) {

		for (int i = s; i <= N; i = i + s) {
			int j = i - s;
			if (ch % 2 == 0) {
				for (int iii = j; iii < i; iii++) {
					for (int jjj = iii; jjj < i; jjj++) {
						if (mas[iii] > mas[jjj]) {
							std::swap(mas[iii], mas[jjj]);
						}

					}
				}
				//for (int iii = j; iii < i; iii++) {
				//	A.push_back(mas[iii]);
				//}
			}
			else {
				for (int iii = j; iii < i; iii++) {
					for (int jjj = iii; jjj < i; jjj++) {
						if (mas[iii] > mas[jjj]) {
							std::swap(mas[iii], mas[jjj]);
						}

					}
				}
				//for (int iii = j; iii < i; iii++) {
				//	B.push_back(mas[iii]);
				//}
			}
			ch++;
		}

		s = s * 2;
	}

	





	//for (int i = 0; i < N / 2; i++) {
	//	std::cout << A[i] << " ";
	//}
	//std::cout << std::endl;
	///for (int i = 0; i < N / 2; i++) {
	//	std::cout << B[i] << " ";
//	}
	std::cout << std::endl;
	for (int i = 0; i < N ; i++) {
		std::cout << mas[i] << " ";
	}
	std::cout << std::endl;
	

}