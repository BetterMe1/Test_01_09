/*
date��2019/01/09
author:BetterMe1
program:
compiler:Visual Studio 2013
*/

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

/*
1.
дһ���������ز����������� 1 �ĸ���
���磺 15    
      0000 1111     
	  4 �� 1
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
//	// ���� 1��λ��
//}
//int main(){
//	printf("%d\n",count_one_bits(15));
//	system("pause");
//	return 0;
//}
/*
2.��ȡһ�������������������е�ż��λ������λ��
�ֱ�������������С�
*/
void print(int value){
	printf("����λ��");
	for (int i = 30; i >= 0; i -= 2){
		printf("%d ", (value >> i) & 1);
	}
	printf("\n");
	printf("ż��λ��");
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
