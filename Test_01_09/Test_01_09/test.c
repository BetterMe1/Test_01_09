/*
date：2019/01/09
author:BetterMe1
program:
compiler:Visual Studio 2013
*/

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

/*
1.
写一个函数返回参数二进制中 1 的个数
比如： 15    
      0000 1111     
	  4 个 1
*/
//int count_one_bits(unsigned int value)
//{
//	int count = 0;
//	for (int i = 0; i < 32; i++){
//		if ((value >> i)&1){
//			count++;
//		}
//	}
//	return count;
//	// 返回 1的位数
//}
//int main(){
//	printf("%d\n",count_one_bits(15));
//	system("pause");
//	return 0;
//}
/*
2.获取一个数二进制序列中所有的偶数位和奇数位，
分别输出二进制序列。
*/
void print(int value){
	printf("奇数位：");
	for (int i = 30; i >= 0; i -= 2){
		printf("%d ", (value >> i) & 1);
	}
	printf("\n");
	printf("偶数位：");
	for (int i = 31; i >= 0; i -= 2){
		printf("%d ", (value >> i) & 1);
	}
	printf("\n");
}
int main(){
	print(11);
	system("pause");
	return 0;
}
