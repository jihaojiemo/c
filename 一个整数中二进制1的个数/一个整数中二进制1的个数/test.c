#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
<<<<<<< HEAD
// 仅限于正数，因为负数 % 2 是 -1
=======
// 浠呴檺浜庢鏁帮紝鍥犱负璐熸暟 % 2 鏄� -1
>>>>>>> 7b715b6ff11ae63a249316712fff204c4b5d8884
//int BitOneCount(int num) {
//	int count = 0;
//	while (num) {
//		if (num % 2 == 1) {
//			++count;
//		}
//		num /= 2;
//	}
//	return count;
//}
<<<<<<< HEAD
// 确保每一位都进行过比较，第 i 位是否为 1
=======
// 纭繚姣忎竴浣嶉兘杩涜杩囨瘮杈冿紝绗� i 浣嶆槸鍚︿负 1
>>>>>>> 7b715b6ff11ae63a249316712fff204c4b5d8884
int BitOneCount(int num) {
	int count = 0;
	for (int i = 1; i <= 32; ++i) {
		if (num & (1 << i)) {
			++count;
		}
	}
	return count;
}
int main() {
	int num = 0;
	scanf("%d", &num);
	printf("%d\n", BitOneCount(num));
    system("pause");
    return 0;
}
